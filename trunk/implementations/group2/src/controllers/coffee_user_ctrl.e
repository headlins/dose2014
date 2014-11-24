note
	description: "Summary description for {COFFEE_USER_CTRL}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	COFFEE_USER_CTRL

	inherit
	COFFEE_BASE_CONTROLLER
	redefine
		add_data_to_map_update, add, add_data_to_map_get, is_authorized_delete, is_authorized_update, get_all
	end

create
	make



feature -- Handlers

	is_authorized_delete(req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]): BOOLEAN
	do
		Result :=  equal(get_value_from_map("id",a_map), get_session_from_req (req, "_coffee_session_").item("id").out)
	end

	is_authorized_update(req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]): BOOLEAN
	do
		Result :=  equal(req.path_parameter("user_id").string_representation.out, get_session_from_req (req, "_coffee_session_").item("id").out)
	end

	add_data_to_map_update(req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]])
		local
			l_user_id: STRING
		do
			create l_user_id.make_empty
			l_user_id := req.path_parameter("user_id").string_representation
			a_map.keys.extend("id")
			a_map.values.extend(l_user_id)
		end

	add_data_to_map_get(req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]])
		do
			add_data_to_map_update (req, a_map)
		end

	add (req: WSF_REQUEST; res: WSF_RESPONSE)
	local
		l_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]
		l_result: JSON_OBJECT
		l_add_result: TUPLE[success: BOOLEAN; id: STRING]
	do
		create l_result.make
			l_map := parse_request (req)
			l_add_result:= my_db.add (table_name,l_map)
			if l_add_result.success then
				l_result := my_db.get_from_id (table_name, l_add_result.id)
				--l_result.put (my_db.get_from_id (table_name, l_add_result.id), table_name)
				return_success_without_message (l_result, res)
			else
				return_error(l_result, res,"Could not add to " + table_name, 501)
			end

		end

	get_all(req: WSF_REQUEST; res: WSF_RESPONSE)
	local
		l_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]
		l_result: JSON_OBJECT
		l_result_array: JSON_ARRAY
	do
		create l_result.make
		if req_has_cookie (req, "_coffee_session_" ) then
			l_map := parse_request (req)
			add_data_to_map_get_all (req, l_map)
			if is_authorized_get_all(req,l_map) then
				l_result_array := my_db.get_all_users
				if l_result /= Void then
					--l_result.put_string (l_result_array.representation, table_name + "s")
					return_success_array (l_result_array, res)
				else
					create l_result.make
					return_error(l_result, res,"Could not get from " + table_name, 501)
				end
			else
				return_error (l_result, res, "Not authorized", 403)
			end

		else
			return_error(l_result, res, "User not logged in", 404)
		end
	end



feature {NONE} -- helpers
	reject(l_result_payload: JSON_OBJECT res: WSF_RESPONSE)

	local

	do
		-- the request has no session cookie and thus the user is not logged in
		-- we return an error stating that the user is not authorized to add todos
	l_result_payload.put_string ("User is not logged in.", create {JSON_STRING}.make_json ("Message"))

		-- set the header to status code 401-unauthorized
	set_json_header (res, 401, l_result_payload.representation.count)

	end


end