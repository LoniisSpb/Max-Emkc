/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkcmeasethportsettings.h.
 *
 *  Purpose	: File contains data structures and function prototypes for 
 *			  the module maxemkcmeasethportsettings.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:25 MSK 2018
 *
 *  Docs	: Yes. 
 ***************************************************************************/

#ifdef  __cplusplus
extern "C" {
#endif /* #ifdef  __cplusplus */

#ifndef  __MAXEMKCMEASETHPORTSETTINGS_H__
#define  __MAXEMKCMEASETHPORTSETTINGS_H__

/* User code starts here */
/* User code ends here */

/*
 * If the user wants to add their code, then the code has to be
 * added in between the above mentioned comments. Otherwise, on
 * regeneration, the user added code will be overwritten.
 * The above mentioned comments can be used at any place in this file.
 */


/* ---------------------------- Macro Declarations ---------------------------*/

#define	MAXEMKCMEASETHPORTSETTINGS_MAXEMKCMEASETHPORTMACADDRESS	1
#define	MAXEMKCMEASETHPORTSETTINGS_MAXEMKCMEASETHPORTIPADDRESS	2
#define	MAXEMKCMEASETHPORTSETTINGS_MAXEMKCMEASETHPORTMASK	3
#define	MAXEMKCMEASETHPORTSETTINGS_MAXEMKCMEASETHPORTGW	4
#define	MAXEMKCMEASETHPORTSETTINGS_CMAXEMKCMEASURINGETHPORTDHCP	5
#define	MAXEMKCMEASETHPORTSETTINGS_MAXEMKCMEASURINGETHPORTRATE	6
#define	MAXEMKCMEASETHPORTSETTINGS_MAXEMKCMEASURINGETHPORTDUPLEX	7

#define MAXEMKCMEASETHPORTSETTINGS_OID_LEN	12
#define MAXEMKCMEASETHPORTSETTINGS_SUBID_LEN	7

#ifdef FILE_TO_VECTOR
#if defined (UNIX) || defined (VXWORKS) || defined (NUCLEUS_OS)
#define MAXEMKCMEASETHPORTSETTINGS_FILE	"ftov/max-emkc/maxemkcmeasethportsettings.txt"
#elif defined (WINDOWS)
#define MAXEMKCMEASETHPORTSETTINGS_FILE	"ftov\\max-emkc\\maxemkcmeasethportsettings.txt"
#endif
#endif


/* ------------------------- Variable Declarations --------------------------*/

#ifdef MAXEMKCMEASETHPORTSETTINGS_PUBLIC


/* The oid to register */
MAXEMKCMEASETHPORTSETTINGS_PUBLIC OID gv_maxEmkcMeasEthPortSettingsOid[MAXEMKCMEASETHPORTSETTINGS_OID_LEN] = {1,3,6,1,4,1,5597,1,1,3,2,7};

/* The subid list of the registerd oid */
MAXEMKCMEASETHPORTSETTINGS_PUBLIC OID gv_maxEmkcMeasEthPortSettingsSubIdList[MAXEMKCMEASETHPORTSETTINGS_SUBID_LEN] = {1,2,3,4,5,6,7};

/* Access type of each subid of the registered oid */
MAXEMKCMEASETHPORTSETTINGS_PUBLIC U_CHAR gv_maxEmkcMeasEthPortSettingsSubIdListAccess[MAXEMKCMEASETHPORTSETTINGS_SUBID_LEN] = {RONLY, RONLY, RONLY, RONLY, RONLY, RONLY, RONLY};

/* The data type of each subid of the registered oid */
MAXEMKCMEASETHPORTSETTINGS_PUBLIC U_CHAR gv_maxEmkcMeasEthPortSettingsSubIdListDataTypes[MAXEMKCMEASETHPORTSETTINGS_SUBID_LEN] = {ASN_OCTET_STR, ASN_IPADDRESS, ASN_GAUGE, ASN_IPADDRESS, ASN_INTEGER, ASN_INTEGER, ASN_INTEGER};

#else

#define MAXEMKCMEASETHPORTSETTINGS_PUBLIC extern 

/* The oid to register */
MAXEMKCMEASETHPORTSETTINGS_PUBLIC OID gv_maxEmkcMeasEthPortSettingsOid[MAXEMKCMEASETHPORTSETTINGS_OID_LEN];

/* The subid list of the registerd oid */
MAXEMKCMEASETHPORTSETTINGS_PUBLIC OID gv_maxEmkcMeasEthPortSettingsSubIdList[MAXEMKCMEASETHPORTSETTINGS_SUBID_LEN];

/* Access type of each subid of the registered oid */
MAXEMKCMEASETHPORTSETTINGS_PUBLIC U_CHAR gv_maxEmkcMeasEthPortSettingsSubIdListAccess[MAXEMKCMEASETHPORTSETTINGS_SUBID_LEN];

/* The data type of each subid of the registered oid */
MAXEMKCMEASETHPORTSETTINGS_PUBLIC U_CHAR gv_maxEmkcMeasEthPortSettingsSubIdListDataTypes[MAXEMKCMEASETHPORTSETTINGS_SUBID_LEN];

#endif /* #ifdef MAXEMKCMEASETHPORTSETTINGS_PUBLIC */

MAXEMKCMEASETHPORTSETTINGS_PUBLIC U_CHAR *gv_maxEmkcMeasEthPortMacAddress;
MAXEMKCMEASETHPORTSETTINGS_PUBLIC INT32 gv_maxEmkcMeasEthPortMacAddressLen;
MAXEMKCMEASETHPORTSETTINGS_PUBLIC U_CHAR *gv_maxEmkcMeasEthPortIpAddress;
MAXEMKCMEASETHPORTSETTINGS_PUBLIC INT32 gv_maxEmkcMeasEthPortIpAddressLen;
MAXEMKCMEASETHPORTSETTINGS_PUBLIC U_INT32 gv_maxEmkcMeasEthPortMask;
MAXEMKCMEASETHPORTSETTINGS_PUBLIC U_CHAR *gv_maxEmkcMeasEthPortGw;
MAXEMKCMEASETHPORTSETTINGS_PUBLIC INT32 gv_maxEmkcMeasEthPortGwLen;
MAXEMKCMEASETHPORTSETTINGS_PUBLIC INT32 gv_cmaxEmkcMeasuringEthPortDhcp;
MAXEMKCMEASETHPORTSETTINGS_PUBLIC INT32 gv_maxEmkcMeasuringEthPortRate;
MAXEMKCMEASETHPORTSETTINGS_PUBLIC INT32 gv_maxEmkcMeasuringEthPortDuplex;

/* --------------------------- Function Prototypes ---------------------------*/

/* Functions defined in maxemkcmeasethportsettingshdlr.c */
MAXEMKCMEASETHPORTSETTINGS_PUBLIC void InitMaxEmkcMeasEthPortSettings(void);

MAXEMKCMEASETHPORTSETTINGS_PUBLIC CHAR MaxEmkcMeasEthPortSettingsProcessRequests(INT32 pduVersion,U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex);

MAXEMKCMEASETHPORTSETTINGS_PUBLIC U_CHAR *MaxEmkcMeasEthPortSettingsProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status);

MAXEMKCMEASETHPORTSETTINGS_PUBLIC U_CHAR *MaxEmkcMeasEthPortSettingsProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCMEASETHPORTSETTINGS_PUBLIC CHAR UpdateMaxEmkcMeasEthPortSettings(U_CHAR command);

/* Functions defined in maxemkcmeasethportsettingsinstru.c */
MAXEMKCMEASETHPORTSETTINGS_PUBLIC U_CHAR *GetMaxEmkcMeasEthPortMacAddress(INT32 *varValLen, U_CHAR *status);

MAXEMKCMEASETHPORTSETTINGS_PUBLIC U_CHAR *SetMaxEmkcMeasEthPortMacAddress(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCMEASETHPORTSETTINGS_PUBLIC U_CHAR *GetMaxEmkcMeasEthPortIpAddress(INT32 *varValLen, U_CHAR *status);

MAXEMKCMEASETHPORTSETTINGS_PUBLIC U_CHAR *SetMaxEmkcMeasEthPortIpAddress(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCMEASETHPORTSETTINGS_PUBLIC U_CHAR *GetMaxEmkcMeasEthPortMask(INT32 *varValLen, U_CHAR *status);

MAXEMKCMEASETHPORTSETTINGS_PUBLIC U_CHAR *SetMaxEmkcMeasEthPortMask(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCMEASETHPORTSETTINGS_PUBLIC U_CHAR *GetMaxEmkcMeasEthPortGw(INT32 *varValLen, U_CHAR *status);

MAXEMKCMEASETHPORTSETTINGS_PUBLIC U_CHAR *SetMaxEmkcMeasEthPortGw(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCMEASETHPORTSETTINGS_PUBLIC U_CHAR *GetCmaxEmkcMeasuringEthPortDhcp(INT32 *varValLen, U_CHAR *status);

MAXEMKCMEASETHPORTSETTINGS_PUBLIC U_CHAR *SetCmaxEmkcMeasuringEthPortDhcp(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCMEASETHPORTSETTINGS_PUBLIC U_CHAR *GetMaxEmkcMeasuringEthPortRate(INT32 *varValLen, U_CHAR *status);

MAXEMKCMEASETHPORTSETTINGS_PUBLIC U_CHAR *SetMaxEmkcMeasuringEthPortRate(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCMEASETHPORTSETTINGS_PUBLIC U_CHAR *GetMaxEmkcMeasuringEthPortDuplex(INT32 *varValLen, U_CHAR *status);

MAXEMKCMEASETHPORTSETTINGS_PUBLIC U_CHAR *SetMaxEmkcMeasuringEthPortDuplex(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

/* Functions defined in maxemkcmeasethportsettingsftov.c */
#ifdef FILE_TO_VECTOR
MAXEMKCMEASETHPORTSETTINGS_PUBLIC CHAR ReadFromMaxEmkcMeasEthPortSettingsFile();
MAXEMKCMEASETHPORTSETTINGS_PUBLIC CHAR WriteToMaxEmkcMeasEthPortSettingsFile();
#endif

#endif  /* __MAXEMKCMEASETHPORTSETTINGS_H__ */


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkcmeasethportsettings.h
 *****************************************************************************/
