note
	description: "The main class of the demo. Sets up the router and instanciates the controllers and database."
	author: "Group1"

class
	APPLICATION

inherit

	WSF_DEFAULT_SERVICE
		redefine
			initialize
		end

	WSF_ROUTED_SERVICE
		-- a routed_service implements the execute loop
		-- but it expectes us to implement

	WSF_URI_TEMPLATE_HELPER_FOR_ROUTED_SERVICE
	-- for the routing we use uri templates
	-- thus we can have "varialbes" in the uris

create
	make_and_launch

feature {NONE} -- Initialization

	path_to_db_file: STRING
			-- calculates the path to the demo.db file, based on the location of the .ecf file
			-- Note: we used to have a fixed path here but this way it should work out-of-box for everyone
		once
			Result := ".." + Operating_environment.directory_separator.out + "database.db"
		end

	path_to_www_folder: STRING
			-- calculates the path to the www folder, based on the location of the .ecf file
			-- Note: we used to have a fixed path here but this way it should work out-of-box for everyone
		once
			Result := ".." + Operating_environment.directory_separator.out + "www"
		end

	user: USER
			-- a controller for handling user requests

	project: PROJECT
			-- a controller for handling project requests

	sprint: SPRINT
			-- a controller for handling sprint requests

	task: TASK
			-- a controller for handling task requests

	requirement: REQUIREMENT
			-- a contreoler for handling requirement requets

	dao: DB
			-- access to the database and the functionality that comes with that class

	session_ctrl: SESSION_CTRL

	session_manager: WSF_FS_SESSION_MANAGER

	initialize
			-- Initialize current service.
		do
				-- create the dao object and the controllers
				-- we reuse the same database connection so we don't open up too many connections at once
			create dao.make (path_to_db_file)
			create session_manager.make
			create session_ctrl.make (dao, session_manager)
			create user.make (dao, session_manager)
			create project.make (dao, session_manager)
			create sprint.make (dao, session_manager)
			create task.make (dao, session_manager)
			create requirement.make (dao, session_manager)

				-- set the prot of the web server to 9090
			set_service_option ("port", 9090)

				-- initialize the router
			initialize_router
		end

feature -- Basic operations

	setup_router
		local
			fhdl: WSF_FILE_SYSTEM_HANDLER
		do

				-- Handing login and logout

			map_uri_template_agent_with_request_methods ("/api/login", agent session_ctrl.login, router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/logout", agent session_ctrl.logout, router.methods_get)

				-- handling of all ht routes relating to "user"

			map_uri_template_agent_with_request_methods ("/api/users", agent user.get_users, router.methods_get)
			map_uri_template_agent_with_request_methods ("/api/users", agent user.add_user, router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/users/{id_user}", agent user.get_users_by_id, router.methods_get)
			map_uri_template_agent_with_request_methods ("/api/users/{id_user}", agent user.delete_users, router.methods_delete)
			map_uri_template_agent_with_request_methods ("/api/users/{id_user}", agent user.put_users, router.methods_put)
			map_uri_template_agent_with_request_methods ("/api/users/{id_user}/projects/{id_project}/role", agent user.get_user_role, router.methods_get)

				-- handling of all ht routes relating to "project"
			map_uri_template_agent_with_request_methods ("/api/users/{id_user}/projects", agent user.get_projects_by_user, router.methods_get)
			map_uri_template_agent_with_request_methods ("/api/users/{id_user}/projects", agent project.add_project, router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/users/{id_user}/projects/{id_project}", agent project.update_project, router.methods_put)
			map_uri_template_agent_with_request_methods ("/api/users/{id_user}/projects/{id_project}", agent project.delete_project, router.methods_delete)
			map_uri_template_agent_with_request_methods ("/api/users/{id_user}/projects/{id_project}", agent user.get_project_by_id, router.methods_get)
			map_uri_template_agent_with_request_methods ("/api/users/{id_user}/projects/{id_project}/developers", agent project.get_users_by_id_project, router.methods_get)
			map_uri_template_agent_with_request_methods ("/api/users/{id_user}/projects/{id_project}/developers", agent project.add_user_in_project , router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/users/{id_user}/projects/{id_project}/developers/{developer_id}", agent project.delete_user_in_project, router.methods_delete)
			map_uri_template_agent_with_request_methods ("/api/users/{id_user}/projects/{id_project}/ranking", agent project.get_ranking, router.methods_get)



				-- handling of all ht routes relating to "sprint"
			map_uri_template_agent_with_request_methods ("/api/users/{id_user}/projects/{id_project}/sprints", agent sprint.add_sprint, router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/users/{id_user}/projects/{id_project}/sprints", agent project.get_project_sprints, router.methods_get)
			map_uri_template_agent_with_request_methods ("/api/users/{id_user}/projects/{id_project}/sprints/{id_sprint}", agent sprint.get_a_sprint, router.methods_get)
			map_uri_template_agent_with_request_methods ("/api/users/{id_user}/projects/{id_project}/sprints/{id_sprint}", agent sprint.update_sprint, router.methods_put)
			map_uri_template_agent_with_request_methods ("/api/users/{id_user}/projects/{id_project}/sprints/{id_sprint}", agent sprint.delete_sprint, router.methods_delete)

				-- handling of all ht routes relating to "task"
			map_uri_template_agent_with_request_methods ("/api/users/{id_user}/projects/{id_project}/sprints/{id_sprint}/tasks", agent task.add_a_task, router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/users/{id_user}/projects/{id_project}/sprints/{id_sprint}/tasks", agent sprint.get_tasks_by_sprint, router.methods_get)
			map_uri_template_agent_with_request_methods ("/api/users/{id_user}/projects/{id_project}/sprints/{id_sprint}/tasks/{id_task}", agent task.get_a_task, router.methods_get)
			map_uri_template_agent_with_request_methods ("/api/users/{id_user}/projects/{id_project}/sprints/{id_sprint}/tasks/{id_task}", agent task.update_task, router.methods_put)
			map_uri_template_agent_with_request_methods ("/api/users/{id_user}/projects/{id_project}/sprints/{id_sprint}/tasks/{id_task}", agent task.delete_task, router.methods_delete)

				-- handling of all ht routes relating to "requirement"
			map_uri_template_agent_with_request_methods ("/api/users/{id_user}/projects/{id_project}/requirements", agent requirement.add_requeriment, router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/users/{id_user}/projects/{id_project}/requirements", agent requirement.get_requeriments, router.methods_get)
			map_uri_template_agent_with_request_methods ("/api/users/{id_user}/projects/{id_project}/requirements/{id_requirement}", agent requirement.get_a_requeriment, router.methods_get)
			map_uri_template_agent_with_request_methods ("/api/users/{id_user}/projects/{id_project}/requirements/{id_requirement}", agent requirement.update_requiremet, router.methods_put)
			map_uri_template_agent_with_request_methods ("/api/users/{id_user}/projects/{id_project}/requirements/{id_requirement}", agent requirement.delete_requirement, router.methods_delete)


				-- setting the path to the folder from where we serve static files
			create fhdl.make_hidden (path_to_www_folder)
			fhdl.set_directory_index (<<"index.html">>)
			router.handle_with_request_methods ("", fhdl, router.methods_GET)
		end

end
