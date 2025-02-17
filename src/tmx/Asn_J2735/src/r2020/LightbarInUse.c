/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Common"
 * 	found in "J2735-Common.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -fincludes-quoted -no-gen-JER`
 */

#include "LightbarInUse.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_LightbarInUse_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_LightbarInUse_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LightbarInUse_value2enum_1[] = {
	{ 0,	11,	"unavailable" },
	{ 1,	8,	"notInUse" },
	{ 2,	5,	"inUse" },
	{ 3,	19,	"yellowCautionLights" },
	{ 4,	16,	"schooldBusLights" },
	{ 5,	16,	"arrowSignsActive" },
	{ 6,	17,	"slowMovingVehicle" },
	{ 7,	9,	"freqStops" }
};
static const unsigned int asn_MAP_LightbarInUse_enum2value_1[] = {
	5,	/* arrowSignsActive(5) */
	7,	/* freqStops(7) */
	2,	/* inUse(2) */
	1,	/* notInUse(1) */
	4,	/* schooldBusLights(4) */
	6,	/* slowMovingVehicle(6) */
	0,	/* unavailable(0) */
	3	/* yellowCautionLights(3) */
};
const asn_INTEGER_specifics_t asn_SPC_LightbarInUse_specs_1 = {
	asn_MAP_LightbarInUse_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_LightbarInUse_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LightbarInUse_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LightbarInUse = {
	"LightbarInUse",
	"LightbarInUse",
	&asn_OP_NativeEnumerated,
	asn_DEF_LightbarInUse_tags_1,
	sizeof(asn_DEF_LightbarInUse_tags_1)
		/sizeof(asn_DEF_LightbarInUse_tags_1[0]), /* 1 */
	asn_DEF_LightbarInUse_tags_1,	/* Same as above */
	sizeof(asn_DEF_LightbarInUse_tags_1)
		/sizeof(asn_DEF_LightbarInUse_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_LightbarInUse_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LightbarInUse_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LightbarInUse_specs_1	/* Additional specs */
};

