/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LogotypeCertExtn"
 * 	found in "asn1/rfc3709-LogotypeCertExtn.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER -no-gen-example`
 */

#ifndef	_OtherLogotypeInfo_H_
#define	_OtherLogotypeInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OBJECT_IDENTIFIER.h>
#include "LogotypeInfo.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* OtherLogotypeInfo */
typedef struct OtherLogotypeInfo {
	OBJECT_IDENTIFIER_t	 logotypeType;
	LogotypeInfo_t	 info;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} OtherLogotypeInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OtherLogotypeInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_OtherLogotypeInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_OtherLogotypeInfo_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _OtherLogotypeInfo_H_ */
#include <asn_internal.h>
