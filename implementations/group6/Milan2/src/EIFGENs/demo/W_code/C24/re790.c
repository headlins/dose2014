/*
 * Code for class RESIZABLE [NATURAL_8]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F790_2505(EIF_REFERENCE);
extern EIF_TYPED_VALUE F790_2506(EIF_REFERENCE);
extern EIF_TYPED_VALUE F790_2507(EIF_REFERENCE);
extern EIF_TYPED_VALUE F790_2508(EIF_REFERENCE);
extern void F790_2509(EIF_REFERENCE);
extern void F790_8242(EIF_REFERENCE, int);
extern void EIF_Minit790(void);

#ifdef __cplusplus
}
#endif

#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {RESIZABLE}.growth_percentage */
EIF_TYPED_VALUE F790_2505 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	return r;
}

/* {RESIZABLE}.minimal_increase */
EIF_TYPED_VALUE F790_2506 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	return r;
}

/* {RESIZABLE}.additional_space */
EIF_TYPED_VALUE F790_2507 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "additional_space";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 789, Current, 0, 0, 2815);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(789, Current, 2815);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2237, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2240, dtype))(Current)).it_i4);
	ui4_1 = ti4_2;
	ti4_2 = eif_max_int32 ((EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L)),ui4_1);
	Result = (EIF_INTEGER_32) ti4_2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("at_least_one", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ui4_1
}

/* {RESIZABLE}.resizable */
EIF_TYPED_VALUE F790_2508 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "resizable";
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 789, Current, 0, 0, 2816);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(789, Current, 2816);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {RESIZABLE}.automatic_grow */
void F790_2509 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "automatic_grow";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 789, Current, 0, 0, 2817);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(789, Current, 2817);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("resizable", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2238, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2237, dtype))(Current)).it_i4);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2241, dtype))(Current)).it_i4);
		ti4_2 = ti4_3;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2237, dtype))(Current)).it_i4);
	ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2241, dtype))(Current)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_3 + ti4_4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2243, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("increased_capacity", EX_POST);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2237, dtype))(Current)).it_i4);
		RTCO(tr1);
		RTCO(tr2);
		if ((EIF_BOOLEAN) (ti4_3 >= (EIF_INTEGER_32) (ti4_1 + ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui4_1
}

/* {RESIZABLE}._invariant */
void F790_8242 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 789, Current, 0, 8241);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("increase_by_at_least_one", Current);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2240, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 1L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
}

void EIF_Minit790 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
