/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "asn1/rfc5280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER`
 */

#include "RDNSequence.h"

asn_TYPE_member_t asn_MBR_RDNSequence_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (17 << 2)),
		0,
		&asn_DEF_RelativeDistinguishedName,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_RDNSequence_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_RDNSequence_specs_1 = {
	sizeof(struct RDNSequence),
	offsetof(struct RDNSequence, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_RDNSequence = {
	"RDNSequence",
	"RDNSequence",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_RDNSequence_tags_1,
	sizeof(asn_DEF_RDNSequence_tags_1)
		/sizeof(asn_DEF_RDNSequence_tags_1[0]), /* 1 */
	asn_DEF_RDNSequence_tags_1,	/* Same as above */
	sizeof(asn_DEF_RDNSequence_tags_1)
		/sizeof(asn_DEF_RDNSequence_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_OF_constraint },
	asn_MBR_RDNSequence_1,
	1,	/* Single element */
	&asn_SPC_RDNSequence_specs_1	/* Additional specs */
};

