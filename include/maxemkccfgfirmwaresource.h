/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgfirmwaresource.h.
 *
 *  Purpose	: File contains data structures and function prototypes for 
 *			  the module maxemkccfgfirmwaresource.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:54 MSK 2018
 *
 *  Docs	: Yes. 
 ***************************************************************************/

#ifdef  __cplusplus
extern "C" {
#endif /* #ifdef  __cplusplus */

#ifndef  __MAXEMKCCFGFIRMWARESOURCE_H__
#define  __MAXEMKCCFGFIRMWARESOURCE_H__

/* User code starts here */
/* User code ends here */

/*
 * If the user wants to add their code, then the code has to be
 * added in between the above mentioned comments. Otherwise, on
 * regeneration, the user added code will be overwritten.
 * The above mentioned comments can be used at any place in this file.
 */


/* ---------------------------- Macro Declarations ---------------------------*/

#define	MAXEMKCCFGFIRMWARESOURCE_MAXEMKCCFGFIRMWARESOURCEIPADDR	1
#define	MAXEMKCCFGFIRMWARESOURCE_MAXEMKCCFGFIRMWARESOURCEDESTPORT	2
#define	MAXEMKCCFGFIRMWARESOURCE_MAXEMKCCFGFIRMWARESOURCELOGIN	3
#define	MAXEMKCCFGFIRMWARESOURCE_MAXEMKCCFGFIRMWARESOURCEPASSW	4
#define	MAXEMKCCFGFIRMWARESOURCE_MAXEMKCCFGFIRMWARESOURCEDIRECTORY	5
#define	MAXEMKCCFGFIRMWARESOURCE_MAXEMKCCFGFIRMWARESOURCEFILENAME	6

#define MAXEMKCCFGFIRMWARESOURCE_OID_LEN	11
#define MAXEMKCCFGFIRMWARESOURCE_SUBID_LEN	6

#ifdef FILE_TO_VECTOR
#if defined (UNIX) || defined (VXWORKS) || defined (NUCLEUS_OS)
#define MAXEMKCCFGFIRMWARESOURCE_FILE	"ftov/max-emkc/maxemkccfgfirmwaresource.txt"
#elif defined (WINDOWS)
#define MAXEMKCCFGFIRMWARESOURCE_FILE	"ftov\\max-emkc\\maxemkccfgfirmwaresource.txt"
#endif
#endif


/* ------------------------- Variable Declarations --------------------------*/

#ifdef MAXEMKCCFGFIRMWARESOURCE_PUBLIC


/* The oid to register */
MAXEMKCCFGFIRMWARESOURCE_PUBLIC OID gv_maxEmkcCfgFirmwareSourceOid[MAXEMKCCFGFIRMWARESOURCE_OID_LEN] = {1,3,6,1,4,1,5597,1,2,5,6};

/* The subid list of the registerd oid */
MAXEMKCCFGFIRMWARESOURCE_PUBLIC OID gv_maxEmkcCfgFirmwareSourceSubIdList[MAXEMKCCFGFIRMWARESOURCE_SUBID_LEN] = {1,2,3,4,5,6};

/* Access type of each subid of the registered oid */
MAXEMKCCFGFIRMWARESOURCE_PUBLIC U_CHAR gv_maxEmkcCfgFirmwareSourceSubIdListAccess[MAXEMKCCFGFIRMWARESOURCE_SUBID_LEN] = {RWRITE, RWRITE, RWRITE, RWRITE, RWRITE, RWRITE};

/* The data type of each subid of the registered oid */
MAXEMKCCFGFIRMWARESOURCE_PUBLIC U_CHAR gv_maxEmkcCfgFirmwareSourceSubIdListDataTypes[MAXEMKCCFGFIRMWARESOURCE_SUBID_LEN] = {ASN_IPADDRESS, ASN_GAUGE, ASN_OCTET_STR, ASN_OCTET_STR, ASN_OCTET_STR, ASN_OCTET_STR};

#else

#define MAXEMKCCFGFIRMWARESOURCE_PUBLIC extern 

/* The oid to register */
MAXEMKCCFGFIRMWARESOURCE_PUBLIC OID gv_maxEmkcCfgFirmwareSourceOid[MAXEMKCCFGFIRMWARESOURCE_OID_LEN];

/* The subid list of the registerd oid */
MAXEMKCCFGFIRMWARESOURCE_PUBLIC OID gv_maxEmkcCfgFirmwareSourceSubIdList[MAXEMKCCFGFIRMWARESOURCE_SUBID_LEN];

/* Access type of each subid of the registered oid */
MAXEMKCCFGFIRMWARESOURCE_PUBLIC U_CHAR gv_maxEmkcCfgFirmwareSourceSubIdListAccess[MAXEMKCCFGFIRMWARESOURCE_SUBID_LEN];

/* The data type of each subid of the registered oid */
MAXEMKCCFGFIRMWARESOURCE_PUBLIC U_CHAR gv_maxEmkcCfgFirmwareSourceSubIdListDataTypes[MAXEMKCCFGFIRMWARESOURCE_SUBID_LEN];

#endif /* #ifdef MAXEMKCCFGFIRMWARESOURCE_PUBLIC */

MAXEMKCCFGFIRMWARESOURCE_PUBLIC U_CHAR *gv_maxEmkcCfgFirmwareSourceIpAddr;
MAXEMKCCFGFIRMWARESOURCE_PUBLIC INT32 gv_maxEmkcCfgFirmwareSourceIpAddrLen;
MAXEMKCCFGFIRMWARESOURCE_PUBLIC U_INT32 gv_maxEmkcCfgFirmwareSourceDestPort;
MAXEMKCCFGFIRMWARESOURCE_PUBLIC U_CHAR *gv_maxEmkcCfgFirmwareSourceLogin;
MAXEMKCCFGFIRMWARESOURCE_PUBLIC U_CHAR *gv_maxEmkcCfgFirmwareSourcePassw;
MAXEMKCCFGFIRMWARESOURCE_PUBLIC U_CHAR *gv_maxEmkcCfgFirmwareSourceDirectory;
MAXEMKCCFGFIRMWARESOURCE_PUBLIC U_CHAR *gv_maxEmkcCfgFirmwareSourceFilename;

/* --------------------------- Function Prototypes ---------------------------*/

/* Functions defined in maxemkccfgfirmwaresourcehdlr.c */
MAXEMKCCFGFIRMWARESOURCE_PUBLIC void InitMaxEmkcCfgFirmwareSource(void);

MAXEMKCCFGFIRMWARESOURCE_PUBLIC CHAR MaxEmkcCfgFirmwareSourceProcessRequests(INT32 pduVersion,U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex);

MAXEMKCCFGFIRMWARESOURCE_PUBLIC U_CHAR *MaxEmkcCfgFirmwareSourceProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGFIRMWARESOURCE_PUBLIC U_CHAR *MaxEmkcCfgFirmwareSourceProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGFIRMWARESOURCE_PUBLIC CHAR UpdateMaxEmkcCfgFirmwareSource(U_CHAR command);

/* Functions defined in maxemkccfgfirmwaresourceinstru.c */
MAXEMKCCFGFIRMWARESOURCE_PUBLIC U_CHAR *GetMaxEmkcCfgFirmwareSourceIpAddr(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGFIRMWARESOURCE_PUBLIC U_CHAR *SetMaxEmkcCfgFirmwareSourceIpAddr(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGFIRMWARESOURCE_PUBLIC U_CHAR *GetMaxEmkcCfgFirmwareSourceDestPort(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGFIRMWARESOURCE_PUBLIC U_CHAR *SetMaxEmkcCfgFirmwareSourceDestPort(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGFIRMWARESOURCE_PUBLIC U_CHAR *GetMaxEmkcCfgFirmwareSourceLogin(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGFIRMWARESOURCE_PUBLIC U_CHAR *SetMaxEmkcCfgFirmwareSourceLogin(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGFIRMWARESOURCE_PUBLIC U_CHAR *GetMaxEmkcCfgFirmwareSourcePassw(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGFIRMWARESOURCE_PUBLIC U_CHAR *SetMaxEmkcCfgFirmwareSourcePassw(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGFIRMWARESOURCE_PUBLIC U_CHAR *GetMaxEmkcCfgFirmwareSourceDirectory(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGFIRMWARESOURCE_PUBLIC U_CHAR *SetMaxEmkcCfgFirmwareSourceDirectory(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGFIRMWARESOURCE_PUBLIC U_CHAR *GetMaxEmkcCfgFirmwareSourceFilename(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGFIRMWARESOURCE_PUBLIC U_CHAR *SetMaxEmkcCfgFirmwareSourceFilename(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

/* Functions defined in maxemkccfgfirmwaresourceftov.c */
#ifdef FILE_TO_VECTOR
MAXEMKCCFGFIRMWARESOURCE_PUBLIC CHAR ReadFromMaxEmkcCfgFirmwareSourceFile();
MAXEMKCCFGFIRMWARESOURCE_PUBLIC CHAR WriteToMaxEmkcCfgFirmwareSourceFile();
#endif

#endif  /* __MAXEMKCCFGFIRMWARESOURCE_H__ */


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgfirmwaresource.h
 *****************************************************************************/
