/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "asn1/rfc5280-PKIX1Implicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER`
 */

#ifndef	_BaseDistance_H_
#define	_BaseDistance_H_


#include <asn_application.h>

/* Including external dependencies */
#include <INTEGER.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BaseDistance */
typedef INTEGER_t	 BaseDistance_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BaseDistance;
asn_struct_free_f BaseDistance_free;
asn_struct_print_f BaseDistance_print;
asn_constr_check_f BaseDistance_constraint;
ber_type_decoder_f BaseDistance_decode_ber;
der_type_encoder_f BaseDistance_encode_der;
xer_type_decoder_f BaseDistance_decode_xer;
xer_type_encoder_f BaseDistance_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _BaseDistance_H_ */
#include <asn_internal.h>
