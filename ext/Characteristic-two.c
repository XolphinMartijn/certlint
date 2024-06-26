/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Algorithms88"
 * 	found in "asn1/rfc3279-PKIX1Algorithms88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER`
 */

#include "Characteristic-two.h"

static asn_TYPE_member_t asn_MBR_Characteristic_two_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Characteristic_two, m),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_INTEGER,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"m"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Characteristic_two, basis),
		(ASN_TAG_CLASS_UNIVERSAL | (6 << 2)),
		0,
		&asn_DEF_OBJECT_IDENTIFIER,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"basis"
		},
	{ ATF_ANY_TYPE | ATF_NOFLAGS, 0, offsetof(struct Characteristic_two, parameters),
		-1 /* Ambiguous tag (ANY?) */,
		0,
		&asn_DEF_ANY,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"parameters"
		},
};
static const ber_tlv_tag_t asn_DEF_Characteristic_two_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Characteristic_two_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 0 }, /* m */
    { (ASN_TAG_CLASS_UNIVERSAL | (6 << 2)), 1, 0, 0 } /* basis */
};
static asn_SEQUENCE_specifics_t asn_SPC_Characteristic_two_specs_1 = {
	sizeof(struct Characteristic_two),
	offsetof(struct Characteristic_two, _asn_ctx),
	asn_MAP_Characteristic_two_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Characteristic_two = {
	"Characteristic-two",
	"Characteristic-two",
	&asn_OP_SEQUENCE,
	asn_DEF_Characteristic_two_tags_1,
	sizeof(asn_DEF_Characteristic_two_tags_1)
		/sizeof(asn_DEF_Characteristic_two_tags_1[0]), /* 1 */
	asn_DEF_Characteristic_two_tags_1,	/* Same as above */
	sizeof(asn_DEF_Characteristic_two_tags_1)
		/sizeof(asn_DEF_Characteristic_two_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Characteristic_two_1,
	3,	/* Elements count */
	&asn_SPC_Characteristic_two_specs_1	/* Additional specs */
};

