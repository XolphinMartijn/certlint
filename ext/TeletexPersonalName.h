/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "asn1/rfc5280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER`
 */

#ifndef	_TeletexPersonalName_H_
#define	_TeletexPersonalName_H_


#include <asn_application.h>

/* Including external dependencies */
#include <TeletexString.h>
#include <constr_SET.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */

/*
 * Method of determining the components presence
 */
typedef enum TeletexPersonalName_PR {
	TeletexPersonalName_PR_surname,	/* Member surname is present */
	TeletexPersonalName_PR_given_name,	/* Member given_name is present */
	TeletexPersonalName_PR_initials,	/* Member initials is present */
	TeletexPersonalName_PR_generation_qualifier,	/* Member generation_qualifier is present */
} TeletexPersonalName_PR;

/* TeletexPersonalName */
typedef struct TeletexPersonalName {
	TeletexString_t	 surname;
	TeletexString_t	*given_name	/* OPTIONAL */;
	TeletexString_t	*initials	/* OPTIONAL */;
	TeletexString_t	*generation_qualifier	/* OPTIONAL */;
	
	/* Presence bitmask: ASN_SET_ISPRESENT(pTeletexPersonalName, TeletexPersonalName_PR_x) */
	unsigned int _presence_map
		[((4+(8*sizeof(unsigned int))-1)/(8*sizeof(unsigned int)))];
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TeletexPersonalName_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TeletexPersonalName;

#ifdef __cplusplus
}
#endif

#endif	/* _TeletexPersonalName_H_ */
#include <asn_internal.h>
