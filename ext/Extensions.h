/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "asn1/rfc3280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER -no-gen-example`
 */

#ifndef	_Extensions_H_
#define	_Extensions_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Extension;

/* Extensions */
typedef struct Extensions {
	A_SEQUENCE_OF(struct Extension) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Extensions_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Extensions;
extern asn_SET_OF_specifics_t asn_SPC_Extensions_specs_1;
extern asn_TYPE_member_t asn_MBR_Extensions_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Extension.h"

#endif	/* _Extensions_H_ */
#include <asn_internal.h>
