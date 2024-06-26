/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "asn1/rfc5280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER`
 */

#ifndef	_BuiltInDomainDefinedAttributes_H_
#define	_BuiltInDomainDefinedAttributes_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BuiltInDomainDefinedAttribute;

/* BuiltInDomainDefinedAttributes */
typedef struct BuiltInDomainDefinedAttributes {
	A_SEQUENCE_OF(struct BuiltInDomainDefinedAttribute) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BuiltInDomainDefinedAttributes_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BuiltInDomainDefinedAttributes;
extern asn_SET_OF_specifics_t asn_SPC_BuiltInDomainDefinedAttributes_specs_1;
extern asn_TYPE_member_t asn_MBR_BuiltInDomainDefinedAttributes_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "BuiltInDomainDefinedAttribute.h"

#endif	/* _BuiltInDomainDefinedAttributes_H_ */
#include <asn_internal.h>
