/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "asn1/rfc5280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER`
 */

#include "X520dnQualifier.h"

/*
 * This type is implemented using PrintableString,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_X520dnQualifier_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (19 << 2))
};
asn_TYPE_descriptor_t asn_DEF_X520dnQualifier = {
	"X520dnQualifier",
	"X520dnQualifier",
	&asn_OP_PrintableString,
	asn_DEF_X520dnQualifier_tags_1,
	sizeof(asn_DEF_X520dnQualifier_tags_1)
		/sizeof(asn_DEF_X520dnQualifier_tags_1[0]), /* 1 */
	asn_DEF_X520dnQualifier_tags_1,	/* Same as above */
	sizeof(asn_DEF_X520dnQualifier_tags_1)
		/sizeof(asn_DEF_X520dnQualifier_tags_1[0]), /* 1 */
	{ 0, 0, PrintableString_constraint },
	0, 0,	/* No members */
	0	/* No specifics */
};

