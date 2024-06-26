/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "asn1/rfc5280-PKIX1Implicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER`
 */

#ifndef	_AuthorityInfoAccessSyntax_H_
#define	_AuthorityInfoAccessSyntax_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AccessDescription;

/* AuthorityInfoAccessSyntax */
typedef struct AuthorityInfoAccessSyntax {
	A_SEQUENCE_OF(struct AccessDescription) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AuthorityInfoAccessSyntax_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AuthorityInfoAccessSyntax;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AccessDescription.h"

#endif	/* _AuthorityInfoAccessSyntax_H_ */
#include <asn_internal.h>
