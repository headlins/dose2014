/*
 * Code for class STRING_ITERATION_CURSOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st281.h"
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {STRING_ITERATION_CURSOR}.item */
EIF_CHARACTER_32 F538_4403 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4580[Dtype(tr1)-735])(RTCV(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_));
	RTLE;
	return Result;
}

/* {STRING_ITERATION_CURSOR}.new_cursor */
EIF_REFERENCE F538_4405 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	
	RTGC;
	Result = (EIF_REFERENCE) eif_builtin_ANY_twin (Current);
	F538_4407(RTCV(Result));
	RTLE;
	return Result;
}

/* {STRING_ITERATION_CURSOR}.after */
EIF_BOOLEAN F538_4406 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_));
}

/* {STRING_ITERATION_CURSOR}.start */
void F538_4407 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
}

/* {STRING_ITERATION_CURSOR}.forth */
void F538_4408 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_))++;
}

/* {STRING_ITERATION_CURSOR}.target */
EIF_REFERENCE F538_4409 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


void EIF_Minit281 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
