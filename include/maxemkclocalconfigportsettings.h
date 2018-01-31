/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkclocalconfigportsettings.h.
 *
 *  Purpose	: File contains data structures and function prototypes for 
 *			  the module maxemkclocalconfigportsettings.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:28 MSK 2018
 *
 *  Docs	: Yes. 
 ***************************************************************************/

#ifdef  __cplusplus
extern "C" {
#endif /* #ifdef  __cplusplus */

#ifndef  __MAXEMKCLOCALCONFIGPORTSETTINGS_H__
#define  __MAXEMKCLOCALCONFIGPORTSETTINGS_H__

/* User code starts here */
/* User code ends here */

/*
 * If the user wants to add their code, then the code has to be
 * added in between the above mentioned comments. Otherwise, on
 * regeneration, the user added code will be overwritten.
 * The above mentioned comments can be used at any place in this file.
 */


/* ---------------------------- Macro Declarations ---------------------------*/

#define	MAXEMKCLOCALCONFIGPORTSETTINGS_MAXEMKCLOCALCONFIGETHPORTMACADDRESS	1
#define	MAXEMKCLOCALCONFIGPORTSETTINGS_MAXEMKCLOCALCONFIGETHPORTIPADDRESS	2
#define	MAXEMKCLOCALCONFIGPORTSETTINGS_MAXEMKCLOCALCONFIGETHPORTMASK	3

#define MAXEMKCLOCALCONFIGPORTSETTINGS_OID_LEN	11
#define MAXEMKCLOCALCONFIGPORTSETTINGS_SUBID_LEN	3

#ifdef FILE_TO_VECTOR
#if defined (UNIX) || defined (VXWORKS) || defined (NUCLEUS_OS)
#define MAXEMKCLOCALCONFIGPORTSETTINGS_FILE	"ftov/max-emkc/maxemkclocalconfigportsettings.txt"
#elif defined (WINDOWS)
#define MAXEMKCLOCALCONFIGPORTSETTINGS_FILE	"ftov\\max-emkc\\maxemkclocalconfigportsettings.txt"
#endif
#endif


/* ------------------------- Variable Declarations --------------------------*/

#ifdef MAXEMKCLOCALCONFIGPORTSETTINGS_PUBLIC


/* The oid to register */
MAXEMKCLOCALCONFIGPORTSETTINGS_PUBLIC OID gv_maxEmkcLocalConfigPortSettingsOid[MAXEMKCLOCALCONFIGPORTSETTINGS_OID_LEN] = {1,3,6,1,4,1,5597,1,1,5,3};

/* The subid list of the registerd oid */
MAXEMKCLOCALCONFIGPORTSETTINGS_PUBLIC OID gv_maxEmkcLocalConfigPortSettingsSubIdList[MAXEMKCLOCALCONFIGPORTSETTINGS_SUBID_LEN] = {1,2,3};

/* Access type of each subid of the registered oid */
MAXEMKCLOCALCONFIGPORTSETTINGS_PUBLIC U_CHAR gv_maxEmkcLocalConfigPortSettingsSubIdListAccess[MAXEMKCLOCALCONFIGPORTSETTINGS_SUBID_LEN] = {RONLY, RONLY, RONLY};

/* The data type of each subid of the registered oid */
MAXEMKCLOCALCONFIGPORTSETTINGS_PUBLIC U_CHAR gv_maxEmkcLocalConfigPortSettingsSubIdListDataTypes[MAXEMKCLOCALCONFIGPORTSETTINGS_SUBID_LEN] = {ASN_OCTET_STR, ASN_IPADDRESS, ASN_GAUGE};

#else

#define MAXEMKCLOCALCONFIGPORTSETTINGS_PUBLIC extern 

/* The oid to register */
MAXEMKCLOCALCONFIGPORTSETTINGS_PUBLIC OID gv_maxEmkcLocalConfigPortSettingsOid[MAXEMKCLOCALCONFIGPORTSETTINGS_OID_LEN];

/* The subid list of the registerd oid */
MAXEMKCLOCALCONFIGPORTSETTINGS_PUBLIC OID gv_maxEmkcLocalConfigPortSettingsSubIdList[MAXEMKCLOCALCONFIGPORTSETTINGS_SUBID_LEN];

/* Access type of each subid of the registered oid */
MAXEMKCLOCALCONFIGPORTSETTINGS_PUBLIC U_CHAR gv_maxEmkcLocalConfigPortSettingsSubIdListAccess[MAXEMKCLOCALCONFIGPORTSETTINGS_SUBID_LEN];

/* The data type of each subid of the registered oid */
MAXEMKCLOCALCONFIGPORTSETTINGS_PUBLIC U_CHAR gv_maxEmkcLocalConfigPortSettingsSubIdListDataTypes[MAXEMKCLOCALCONFIGPORTSETTINGS_SUBID_LEN];

#endif /* #ifdef MAXEMKCLOCALCONFIGPORTSETTINGS_PUBLIC */

MAXEMKCLOCALCONFIGPORTSETTINGS_PUBLIC U_CHAR *gv_maxEmkcLocalConfigEthPortMacAddress;
MAXEMKCLOCALCONFIGPORTSETTINGS_PUBLIC INT32 gv_maxEmkcLocalConfigEthPortMacAddressLen;
MAXEMKCLOCALCONFIGPORTSETTINGS_PUBLIC U_CHAR *gv_maxEmkcLocalConfigEthPortIpAddress;
MAXEMKCLOCALCONFIGPORTSETTINGS_PUBLIC INT32 gv_maxEmkcLocalConfigEthPortIpAddressLen;
MAXEMKCLOCALCONFIGPORTSETTINGS_PUBLIC U_INT32 gv_maxEmkcLocalConfigEthPortMask;

/* --------------------------- Function Prototypes ---------------------------*/

/* Functions defined in maxemkclocalconfigportsettingshdlr.c */
MAXEMKCLOCALCONFIGPORTSETTINGS_PUBLIC void InitMaxEmkcLocalConfigPortSettings(void);

MAXEMKCLOCALCONFIGPORTSETTINGS_PUBLIC CHAR MaxEmkcLocalConfigPortSettingsProcessRequests(INT32 pduVersion,U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex);

MAXEMKCLOCALCONFIGPORTSETTINGS_PUBLIC U_CHAR *MaxEmkcLocalConfigPortSettingsProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status);

MAXEMKCLOCALCONFIGPORTSETTINGS_PUBLIC U_CHAR *MaxEmkcLocalConfigPortSettingsProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCLOCALCONFIGPORTSETTINGS_PUBLIC CHAR UpdateMaxEmkcLocalConfigPortSettings(U_CHAR command);

/* Functions defined in maxemkclocalconfigportsettingsinstru.c */
MAXEMKCLOCALCONFIGPORTSETTINGS_PUBLIC U_CHAR *GetMaxEmkcLocalConfigEthPortMacAddress(INT32 *varValLen, U_CHAR *status);

MAXEMKCLOCALCONFIGPORTSETTINGS_PUBLIC U_CHAR *SetMaxEmkcLocalConfigEthPortMacAddress(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCLOCALCONFIGPORTSETTINGS_PUBLIC U_CHAR *GetMaxEmkcLocalConfigEthPortIpAddress(INT32 *varValLen, U_CHAR *status);

MAXEMKCLOCALCONFIGPORTSETTINGS_PUBLIC U_CHAR *SetMaxEmkcLocalConfigEthPortIpAddress(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCLOCALCONFIGPORTSETTINGS_PUBLIC U_CHAR *GetMaxEmkcLocalConfigEthPortMask(INT32 *varValLen, U_CHAR *status);

MAXEMKCLOCALCONFIGPORTSETTINGS_PUBLIC U_CHAR *SetMaxEmkcLocalConfigEthPortMask(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

/* Functions defined in maxemkclocalconfigportsettingsftov.c */
#ifdef FILE_TO_VECTOR
MAXEMKCLOCALCONFIGPORTSETTINGS_PUBLIC CHAR ReadFromMaxEmkcLocalConfigPortSettingsFile();
MAXEMKCLOCALCONFIGPORTSETTINGS_PUBLIC CHAR WriteToMaxEmkcLocalConfigPortSettingsFile();
#endif

#endif  /* __MAXEMKCLOCALCONFIGPORTSETTINGS_H__ */


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkclocalconfigportsettings.h
 *****************************************************************************/
