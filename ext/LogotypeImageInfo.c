/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LogotypeCertExtn"
 * 	found in "asn1/rfc3709-LogotypeCertExtn.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER`
 */

#include "LogotypeImageInfo.h"

static int asn_DFL_2_cmp_1(const void *sptr) {
	const LogotypeImageType_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 1 */
	long value;
	if(asn_INTEGER2long(st, &value))
		return -1;
	return (value != 1);
}
static int asn_DFL_2_set_1(void **sptr) {
	LogotypeImageType_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 1 */
	return asn_long2INTEGER(st, 1);
}
asn_TYPE_member_t asn_MBR_LogotypeImageInfo_1[] = {
	{ ATF_POINTER, 1, offsetof(struct LogotypeImageInfo, type),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LogotypeImageType,
		0,
		{ 0, 0, 0 },
		&asn_DFL_2_cmp_1,	/* Compare DEFAULT 1 */
		&asn_DFL_2_set_1,	/* Set DEFAULT 1 */
		"type"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LogotypeImageInfo, fileSize),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_INTEGER,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fileSize"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LogotypeImageInfo, xSize),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_INTEGER,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"xSize"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LogotypeImageInfo, ySize),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_INTEGER,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ySize"
		},
	{ ATF_POINTER, 2, offsetof(struct LogotypeImageInfo, resolution),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_LogotypeImageResolution,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"resolution"
		},
	{ ATF_POINTER, 1, offsetof(struct LogotypeImageInfo, language),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IA5String,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"language"
		},
};
static const ber_tlv_tag_t asn_DEF_LogotypeImageInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LogotypeImageInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, 0, 2 }, /* fileSize */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 2, -1, 1 }, /* xSize */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 3, -2, 0 }, /* ySize */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* type */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 4, 0, 0 }, /* numBits */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 4, 0, 0 }, /* tableSize */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 5, 0, 0 } /* language */
};
asn_SEQUENCE_specifics_t asn_SPC_LogotypeImageInfo_specs_1 = {
	sizeof(struct LogotypeImageInfo),
	offsetof(struct LogotypeImageInfo, _asn_ctx),
	asn_MAP_LogotypeImageInfo_tag2el_1,
	7,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LogotypeImageInfo = {
	"LogotypeImageInfo",
	"LogotypeImageInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_LogotypeImageInfo_tags_1,
	sizeof(asn_DEF_LogotypeImageInfo_tags_1)
		/sizeof(asn_DEF_LogotypeImageInfo_tags_1[0]), /* 1 */
	asn_DEF_LogotypeImageInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_LogotypeImageInfo_tags_1)
		/sizeof(asn_DEF_LogotypeImageInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LogotypeImageInfo_1,
	6,	/* Elements count */
	&asn_SPC_LogotypeImageInfo_specs_1	/* Additional specs */
};

