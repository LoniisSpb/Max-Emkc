/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkcsnmpethportsettings.h.
 *
 *  Purpose	: File contains data structures and function prototypes for 
 *			  the module maxemkcsnmpethportsettings.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:27 MSK 2018
 *
 *  Docs	: Yes. 
 ***************************************************************************/

#ifdef  __cplusplus
extern "C" {
#endif /* #ifdef  __cplusplus */

#ifndef  __MAXEMKCSNMPETHPORTSETTINGS_H__
#define  __MAXEMKCSNMPETHPORTSETTINGS_H__

/* User code starts here */
/* User code ends here */

/*
 * If the user wants to add their code, then the code has to be
 * added in between the above mentioned comments. Otherwise, on
 * regeneration, the user added code will be overwritten.
 * The above mentioned comments can be used at any place in this file.
 */


/* ---------------------------- Macro Declarations ---------------------------*/

#define	MAXEMKCSNMPETHPORTSETTINGS_MAXEMKCSNMPETHPORTMACADDRESS	1
#define	MAXEMKCSNMPETHPORTSETTINGS_MAXEMKCSNMPETHPORTIPADDRESS	2
#define	MAXEMKCSNMPETHPORTSETTINGS_MAXEMKCSNMPETHPORTMASK	3
#define	MAXEMKCSNMPETHPORTSETTINGS_MAXEMKCSNMPETHPORTGW	4

#define MAXEMKCSNMPETHPORTSETTINGS_OID_LEN	11
#define MAXEMKCSNMPETHPORTSETTINGS_SUBID_LEN	4

#ifdef FILE_TO_VECTOR
#if defined (UNIX) || defined (VXWORKS) || defined (NUCLEUS_OS)
#define MAXEMKCSNMPETHPORTSETTINGS_FILE	"ftov/max-emkc/maxemkcsnmpethportsettings.txt"
#elif defined (WINDOWS)
#define MAXEMKCSNMPETHPORTSETTINGS_FILE	"ftov\\max-emkc\\maxemkcsnmpethportsettings.txt"
#endif
#endif


/* ------------------------- Variable Declarations --------------------------*/

#ifdef MAXEMKCSNMPETHPORTSETTINGS_PUBLIC


/* The oid to register */
MAXEMKCSNMPETHPORTSETTINGS_PUBLIC OID gv_maxEmkcSnmpEthPortSettingsOid[MAXEMKCSNMPETHPORTSETTINGS_OID_LEN] = {1,3,6,1,4,1,5597,1,1,4,4};

/* The subid list of the registerd oid */
MAXEMKCSNMPETHPORTSETTINGS_PUBLIC OID gv_maxEmkcSnmpEthPortSettingsSubIdList[MAXEMKCSNMPETHPORTSETTINGS_SUBID_LEN] = {1,2,3,4};

/* Access type of each subid of the registered oid */
MAXEMKCSNMPETHPORTSETTINGS_PUBLIC U_CHAR gv_maxEmkcSnmpEthPortSettingsSubIdListAccess[MAXEMKCSNMPETHPORTSETTINGS_SUBID_LEN] = {RONLY, RONLY, RONLY, RONLY};

/* The data type of each subid of the registered oid */
MAXEMKCSNMPETHPORTSETTINGS_PUBLIC U_CHAR gv_maxEmkcSnmpEthPortSettingsSubIdListDataTypes[MAXEMKCSNMPETHPORTSETTINGS_SUBID_LEN] = {ASN_OCTET_STR, ASN_IPADDRESS, ASN_GAUGE, ASN_IPADDRESS};

#else

#define MAXEMKCSNMPETHPORTSETTINGS_PUBLIC extern 

/* The oid to register */
MAXEMKCSNMPETHPORTSETTINGS_PUBLIC OID gv_maxEmkcSnmpEthPortSettingsOid[MAXEMKCSNMPETHPORTSETTINGS_OID_LEN];

/* The subid list of the registerd oid */
MAXEMKCSNMPETHPORTSETTINGS_PUBLIC OID gv_maxEmkcSnmpEthPortSettingsSubIdList[MAXEMKCSNMPETHPORTSETTINGS_SUBID_LEN];

/* Access type of each subid of the registered oid */
MAXEMKCSNMPETHPORTSETTINGS_PUBLIC U_CHAR gv_maxEmkcSnmpEthPortSettingsSubIdListAccess[MAXEMKCSNMPETHPORTSETTINGS_SUBID_LEN];

/* The data type of each subid of the registered oid */
MAXEMKCSNMPETHPORTSETTINGS_PUBLIC U_CHAR gv_maxEmkcSnmpEthPortSettingsSubIdListDataTypes[MAXEMKCSNMPETHPORTSETTINGS_SUBID_LEN];

#endif /* #ifdef MAXEMKCSNMPETHPORTSETTINGS_PUBLIC */

MAXEMKCSNMPETHPORTSETTINGS_PUBLIC U_CHAR *gv_maxEmkcSnmpEthPortMacAddress;
MAXEMKCSNMPETHPORTSETTINGS_PUBLIC INT32 gv_maxEmkcSnmpEthPortMacAddressLen;
MAXEMKCSNMPETHPORTSETTINGS_PUBLIC U_CHAR *gv_maxEmkcSnmpEthPortIpAddress;
MAXEMKCSNMPETHPORTSETTINGS_PUBLIC INT32 gv_maxEmkcSnmpEthPortIpAddressLen;
MAXEMKCSNMPETHPORTSETTINGS_PUBLIC U_INT32 gv_maxEmkcSnmpEthPortMask;
MAXEMKCSNMPETHPORTSETTINGS_PUBLIC U_CHAR *gv_maxEmkcSnmpEthPortGw;
MAXEMKCSNMPETHPORTSETTINGS_PUBLIC INT32 gv_maxEmkcSnmpEthPortGwLen;

/* --------------------------- Function Prototypes ---------------------------*/

/* Functions defined in maxemkcsnmpethportsettingshdlr.c */
MAXEMKCSNMPETHPORTSETTINGS_PUBLIC void InitMaxEmkcSnmpEthPortSettings(void);

MAXEMKCSNMPETHPORTSETTINGS_PUBLIC CHAR MaxEmkcSnmpEthPortSettingsProcessRequests(INT32 pduVersion,U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex);

MAXEMKCSNMPETHPORTSETTINGS_PUBLIC U_CHAR *MaxEmkcSnmpEthPortSettingsProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status);

MAXEMKCSNMPETHPORTSETTINGS_PUBLIC U_CHAR *MaxEmkcSnmpEthPortSettingsProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCSNMPETHPORTSETTINGS_PUBLIC CHAR UpdateMaxEmkcSnmpEthPortSettings(U_CHAR command);

/* Functions defined in maxemkcsnmpethportsettingsinstru.c */
MAXEMKCSNMPETHPORTSETTINGS_PUBLIC U_CHAR *GetMaxEmkcSnmpEthPortMacAddress(INT32 *varValLen, U_CHAR *status);

MAXEMKCSNMPETHPORTSETTINGS_PUBLIC U_CHAR *SetMaxEmkcSnmpEthPortMacAddress(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCSNMPETHPORTSETTINGS_PUBLIC U_CHAR *GetMaxEmkcSnmpEthPortIpAddress(INT32 *varValLen, U_CHAR *status);

MAXEMKCSNMPETHPORTSETTINGS_PUBLIC U_CHAR *SetMaxEmkcSnmpEthPortIpAddress(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCSNMPETHPORTSETTINGS_PUBLIC U_CHAR *GetMaxEmkcSnmpEthPortMask(INT32 *varValLen, U_CHAR *status);

MAXEMKCSNMPETHPORTSETTINGS_PUBLIC U_CHAR *SetMaxEmkcSnmpEthPortMask(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCSNMPETHPORTSETTINGS_PUBLIC U_CHAR *GetMaxEmkcSnmpEthPortGw(INT32 *varValLen, U_CHAR *status);

MAXEMKCSNMPETHPORTSETTINGS_PUBLIC U_CHAR *SetMaxEmkcSnmpEthPortGw(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

/* Functions defined in maxemkcsnmpethportsettingsftov.c */
#ifdef FILE_TO_VECTOR
MAXEMKCSNMPETHPORTSETTINGS_PUBLIC CHAR ReadFromMaxEmkcSnmpEthPortSettingsFile();
MAXEMKCSNMPETHPORTSETTINGS_PUBLIC CHAR WriteToMaxEmkcSnmpEthPortSettingsFile();
#endif

#endif  /* __MAXEMKCSNMPETHPORTSETTINGS_H__ */


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkcsnmpethportsettings.h
 *****************************************************************************/
