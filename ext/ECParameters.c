/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Algorithms88"
 * 	found in "asn1/rfc3279-PKIX1Algorithms88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER`
 */

#include "ECParameters.h"

asn_TYPE_member_t asn_MBR_ECParameters_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ECParameters, version),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_ECPVer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"version"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ECParameters, fieldID),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_FieldID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fieldID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ECParameters, curve),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Curve,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"curve"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ECParameters, base),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_ECPoint,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"base"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ECParameters, order),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_INTEGER,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"order"
		},
	{ ATF_POINTER, 1, offsetof(struct ECParameters, cofactor),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_INTEGER,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cofactor"
		},
};
static const ber_tlv_tag_t asn_DEF_ECParameters_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ECParameters_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 2 }, /* version */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 4, -1, 1 }, /* order */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 5, -2, 0 }, /* cofactor */
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 3, 0, 0 }, /* base */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, 0, 1 }, /* fieldID */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, -1, 0 } /* curve */
};
asn_SEQUENCE_specifics_t asn_SPC_ECParameters_specs_1 = {
	sizeof(struct ECParameters),
	offsetof(struct ECParameters, _asn_ctx),
	asn_MAP_ECParameters_tag2el_1,
	6,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ECParameters = {
	"ECParameters",
	"ECParameters",
	&asn_OP_SEQUENCE,
	asn_DEF_ECParameters_tags_1,
	sizeof(asn_DEF_ECParameters_tags_1)
		/sizeof(asn_DEF_ECParameters_tags_1[0]), /* 1 */
	asn_DEF_ECParameters_tags_1,	/* Same as above */
	sizeof(asn_DEF_ECParameters_tags_1)
		/sizeof(asn_DEF_ECParameters_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ECParameters_1,
	6,	/* Elements count */
	&asn_SPC_ECParameters_specs_1	/* Additional specs */
};

