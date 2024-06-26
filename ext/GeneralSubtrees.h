/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "asn1/rfc5280-PKIX1Implicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER`
 */

#ifndef	_GeneralSubtrees_H_
#define	_GeneralSubtrees_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GeneralSubtree;

/* GeneralSubtrees */
typedef struct GeneralSubtrees {
	A_SEQUENCE_OF(struct GeneralSubtree) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GeneralSubtrees_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GeneralSubtrees;
extern asn_SET_OF_specifics_t asn_SPC_GeneralSubtrees_specs_1;
extern asn_TYPE_member_t asn_MBR_GeneralSubtrees_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GeneralSubtree.h"

#endif	/* _GeneralSubtrees_H_ */
#include <asn_internal.h>
