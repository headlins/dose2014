/*
 * Class WSF_ROUTED_SERVICE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_85 [] = {418,84,0xFFFF};
static EIF_TYPE_INDEX gen_type1_85 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_85 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_85 [] = {0,0xFFFF};


static struct desc_info desc_85[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 314, NULL},
	{1, (BODY_INDEX)-1, 418, gen_type0_85},
	{2, (BODY_INDEX)-1, 301, NULL},
	{3, (BODY_INDEX)-1, 301, NULL},
	{4, (BODY_INDEX)-1, 301, NULL},
	{5, (BODY_INDEX)-1, 301, NULL},
	{6, (BODY_INDEX)-1, 301, NULL},
	{7, (BODY_INDEX)-1, 301, NULL},
	{8, (BODY_INDEX)-1, 301, NULL},
	{9, (BODY_INDEX)-1, 301, NULL},
	{10, (BODY_INDEX)-1, 84, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_85},
	{14, (BODY_INDEX)-1, 0, gen_type2_85},
	{15, (BODY_INDEX)-1, 84, NULL},
	{16, (BODY_INDEX)-1, 84, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_85},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 32, NULL},
	{21, (BODY_INDEX)-1, 314, NULL},
	{22, (BODY_INDEX)-1, 314, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 31, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 84, NULL},
	{29, (BODY_INDEX)-1, 304, NULL},
	{30, (BODY_INDEX)-1, 84, NULL},
	{1414, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1415, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1416, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1417, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1418, 0, 280, NULL},
};

extern void Init85(void);
void Init85(void)
{
	IDSC(desc_85, 0, 84);
	IDSC(desc_85 + 1, 2, 84);
	IDSC(desc_85 + 32, 43, 84);
}


#ifdef __cplusplus
}
#endif
