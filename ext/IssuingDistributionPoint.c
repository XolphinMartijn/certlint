/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "asn1/rfc5280-PKIX1Implicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER`
 */

#include "IssuingDistributionPoint.h"

static int asn_DFL_3_cmp_0(const void *sptr) {
	const BOOLEAN_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 0 */
	return (*st != 0);
}
static int asn_DFL_3_set_0(void **sptr) {
	BOOLEAN_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 0 */
	*st = 0;
	return 0;
}
static int asn_DFL_4_cmp_0(const void *sptr) {
	const BOOLEAN_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 0 */
	return (*st != 0);
}
static int asn_DFL_4_set_0(void **sptr) {
	BOOLEAN_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 0 */
	*st = 0;
	return 0;
}
static int asn_DFL_6_cmp_0(const void *sptr) {
	const BOOLEAN_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 0 */
	return (*st != 0);
}
static int asn_DFL_6_set_0(void **sptr) {
	BOOLEAN_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 0 */
	*st = 0;
	return 0;
}
static int asn_DFL_7_cmp_0(const void *sptr) {
	const BOOLEAN_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 0 */
	return (*st != 0);
}
static int asn_DFL_7_set_0(void **sptr) {
	BOOLEAN_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 0 */
	*st = 0;
	return 0;
}
static asn_TYPE_member_t asn_MBR_IssuingDistributionPoint_1[] = {
	{ ATF_POINTER, 6, offsetof(struct IssuingDistributionPoint, distributionPoint),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_DistributionPointName,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"distributionPoint"
		},
	{ ATF_NOFLAGS, 5, offsetof(struct IssuingDistributionPoint, onlyContainsUserCerts),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		&asn_DFL_3_cmp_0,	/* Compare DEFAULT 0 */
		&asn_DFL_3_set_0,	/* Set DEFAULT 0 */
		"onlyContainsUserCerts"
		},
	{ ATF_NOFLAGS, 4, offsetof(struct IssuingDistributionPoint, onlyContainsCACerts),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		&asn_DFL_4_cmp_0,	/* Compare DEFAULT 0 */
		&asn_DFL_4_set_0,	/* Set DEFAULT 0 */
		"onlyContainsCACerts"
		},
	{ ATF_POINTER, 3, offsetof(struct IssuingDistributionPoint, onlySomeReasons),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReasonFlags,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"onlySomeReasons"
		},
	{ ATF_NOFLAGS, 2, offsetof(struct IssuingDistributionPoint, indirectCRL),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		&asn_DFL_6_cmp_0,	/* Compare DEFAULT 0 */
		&asn_DFL_6_set_0,	/* Set DEFAULT 0 */
		"indirectCRL"
		},
	{ ATF_NOFLAGS, 1, offsetof(struct IssuingDistributionPoint, onlyContainsAttributeCerts),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		&asn_DFL_7_cmp_0,	/* Compare DEFAULT 0 */
		&asn_DFL_7_set_0,	/* Set DEFAULT 0 */
		"onlyContainsAttributeCerts"
		},
};
static const ber_tlv_tag_t asn_DEF_IssuingDistributionPoint_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_IssuingDistributionPoint_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* distributionPoint */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* onlyContainsUserCerts */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* onlyContainsCACerts */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* onlySomeReasons */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* indirectCRL */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* onlyContainsAttributeCerts */
};
static asn_SEQUENCE_specifics_t asn_SPC_IssuingDistributionPoint_specs_1 = {
	sizeof(struct IssuingDistributionPoint),
	offsetof(struct IssuingDistributionPoint, _asn_ctx),
	asn_MAP_IssuingDistributionPoint_tag2el_1,
	6,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_IssuingDistributionPoint = {
	"IssuingDistributionPoint",
	"IssuingDistributionPoint",
	&asn_OP_SEQUENCE,
	asn_DEF_IssuingDistributionPoint_tags_1,
	sizeof(asn_DEF_IssuingDistributionPoint_tags_1)
		/sizeof(asn_DEF_IssuingDistributionPoint_tags_1[0]), /* 1 */
	asn_DEF_IssuingDistributionPoint_tags_1,	/* Same as above */
	sizeof(asn_DEF_IssuingDistributionPoint_tags_1)
		/sizeof(asn_DEF_IssuingDistributionPoint_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_IssuingDistributionPoint_1,
	6,	/* Elements count */
	&asn_SPC_IssuingDistributionPoint_specs_1	/* Additional specs */
};

