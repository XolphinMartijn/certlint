/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "asn1/rfc5280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER`
 */

#ifndef	_DirectoryString_H_
#define	_DirectoryString_H_


#include <asn_application.h>

/* Including external dependencies */
#include <TeletexString.h>
#include <PrintableString.h>
#include <UniversalString.h>
#include <UTF8String.h>
#include <BMPString.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DirectoryString_PR {
	DirectoryString_PR_NOTHING,	/* No components present */
	DirectoryString_PR_teletexString,
	DirectoryString_PR_printableString,
	DirectoryString_PR_universalString,
	DirectoryString_PR_utf8String,
	DirectoryString_PR_bmpString
} DirectoryString_PR;

/* DirectoryString */
typedef struct DirectoryString {
	DirectoryString_PR present;
	union DirectoryString_u {
		TeletexString_t	 teletexString;
		PrintableString_t	 printableString;
		UniversalString_t	 universalString;
		UTF8String_t	 utf8String;
		BMPString_t	 bmpString;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DirectoryString_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DirectoryString;
extern asn_CHOICE_specifics_t asn_SPC_DirectoryString_specs_1;
extern asn_TYPE_member_t asn_MBR_DirectoryString_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _DirectoryString_H_ */
#include <asn_internal.h>
