/*
 * Code for class TYPE [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ty928.h"
#include "eif_built_in.h"
#include "eif_gen_conf.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {TYPE}.name */
EIF_REFERENCE F763_6298 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		tr1 = RTLNS(737, 737, _OBJSIZ_1_0_0_4_0_0_0_0_);
		tr2 = (EIF_REFERENCE) eif_builtin_TYPE_runtime_name (Current);
		F737_5725(RTCV(tr1), tr2);
		Result = (EIF_REFERENCE) tr1;
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {TYPE}.generic_parameter_type */
EIF_REFERENCE F763_6299 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	
	Result = (EIF_REFERENCE) eif_builtin_TYPE_generic_parameter_type (Current, arg1);
	RTLE;
	return Result;
}

/* {TYPE}.type_id */
EIF_INTEGER_32 F763_6300 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (Current);
	return Result;
}

/* {TYPE}.hash_code */
EIF_INTEGER_32 F763_6301 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) eif_builtin_TYPE_type_id (Current);
}

/* {TYPE}.is_attached */
EIF_BOOLEAN F763_6305 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) eif_builtin_TYPE_is_attached (Current);
	return Result;
}

/* {TYPE}.is_equal */
EIF_BOOLEAN F763_6306 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (Current);
	ti4_2 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (arg1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTLE;
	return Result;
}

/* {TYPE}.is_strictly_conforming_to */
EIF_BOOLEAN F763_6307 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	Result = '\0';
	ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (arg1);
	if ((EIF_BOOLEAN)((EIF_INTEGER_32) eif_builtin_TYPE_type_id (Current) != ti4_1)) {
		Result = F763_6308(Current, arg1);
	}
	RTLE;
	return Result;
}

/* {TYPE}.is_conforming_to */
EIF_BOOLEAN F763_6308 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (Current);
	ti4_2 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (arg1);
	Result = (EIF_BOOLEAN) EIF_TEST(eif_gen_conf((int16) ti4_1, (int16) ti4_2));
	RTLE;
	return Result;
}

/* {TYPE}.default */
EIF_REFERENCE F763_6312 (EIF_REFERENCE Current)
{
	GTCX
	struct eif_ex_302 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_1_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_gen_param_id(Dftype(Current), 1));
	RTLI(1);
	RTLR(0,Result);
	
	RTGC;
	Result= RTLN(eif_gen_param_id(Dftype(Current), 1));
	RTLE;
	return Result;
}

/* {TYPE}.out */
EIF_REFERENCE F763_6313 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,Result);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	tr2 = F763_6298(Current);
	F737_5725(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {TYPE}.to_string_8 */
EIF_REFERENCE F763_6320 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,Result);
	
	RTGC;
	tr1 = RTLNS(740, 740, _OBJSIZ_1_1_0_3_0_0_0_0_);
	tr2 = F763_6298(Current);
	F737_5725(RTCV(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {TYPE}.internal_name */
EIF_REFERENCE F763_6322 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {TYPE}.runtime_name */
EIF_REFERENCE F763_6323 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	
	Result = (EIF_REFERENCE) eif_builtin_TYPE_runtime_name (Current);
	RTLE;
	return Result;
}

void EIF_Minit928 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
