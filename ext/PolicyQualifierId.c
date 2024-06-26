/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "asn1/rfc5280-PKIX1Implicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER`
 */

#include "PolicyQualifierId.h"

int
PolicyQualifierId_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using OBJECT_IDENTIFIER,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_PolicyQualifierId_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (6 << 2))
};
asn_TYPE_descriptor_t asn_DEF_PolicyQualifierId = {
	"PolicyQualifierId",
	"PolicyQualifierId",
	&asn_OP_OBJECT_IDENTIFIER,
	asn_DEF_PolicyQualifierId_tags_1,
	sizeof(asn_DEF_PolicyQualifierId_tags_1)
		/sizeof(asn_DEF_PolicyQualifierId_tags_1[0]), /* 1 */
	asn_DEF_PolicyQualifierId_tags_1,	/* Same as above */
	sizeof(asn_DEF_PolicyQualifierId_tags_1)
		/sizeof(asn_DEF_PolicyQualifierId_tags_1[0]), /* 1 */
	{ 0, 0, PolicyQualifierId_constraint },
	0, 0,	/* No members */
	0	/* No specifics */
};

