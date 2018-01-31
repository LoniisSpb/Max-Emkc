/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgloginaccess.h.
 *
 *  Purpose	: File contains data structures and function prototypes for 
 *			  the module maxemkccfgloginaccess.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:53 MSK 2018
 *
 *  Docs	: Yes. 
 ***************************************************************************/

#ifdef  __cplusplus
extern "C" {
#endif /* #ifdef  __cplusplus */

#ifndef  __MAXEMKCCFGLOGINACCESS_H__
#define  __MAXEMKCCFGLOGINACCESS_H__

/* User code starts here */
/* User code ends here */

/*
 * If the user wants to add their code, then the code has to be
 * added in between the above mentioned comments. Otherwise, on
 * regeneration, the user added code will be overwritten.
 * The above mentioned comments can be used at any place in this file.
 */


/* ---------------------------- Macro Declarations ---------------------------*/

#define	MAXEMKCCFGLOGINACCESS_MAXEMKCCFGDISABLEROOTLOGIN	1
#define	MAXEMKCCFGLOGINACCESS_MAXEMKCCFGALLOWNETWORKDISCOVERY	2

#define MAXEMKCCFGLOGINACCESS_OID_LEN	11
#define MAXEMKCCFGLOGINACCESS_SUBID_LEN	2

#ifdef FILE_TO_VECTOR
#if defined (UNIX) || defined (VXWORKS) || defined (NUCLEUS_OS)
#define MAXEMKCCFGLOGINACCESS_FILE	"ftov/max-emkc/maxemkccfgloginaccess.txt"
#elif defined (WINDOWS)
#define MAXEMKCCFGLOGINACCESS_FILE	"ftov\\max-emkc\\maxemkccfgloginaccess.txt"
#endif
#endif


/* ------------------------- Variable Declarations --------------------------*/

#ifdef MAXEMKCCFGLOGINACCESS_PUBLIC


/* The oid to register */
MAXEMKCCFGLOGINACCESS_PUBLIC OID gv_maxEmkcCfgLoginAccessOid[MAXEMKCCFGLOGINACCESS_OID_LEN] = {1,3,6,1,4,1,5597,1,2,4,2};

/* The subid list of the registerd oid */
MAXEMKCCFGLOGINACCESS_PUBLIC OID gv_maxEmkcCfgLoginAccessSubIdList[MAXEMKCCFGLOGINACCESS_SUBID_LEN] = {1,2};

/* Access type of each subid of the registered oid */
MAXEMKCCFGLOGINACCESS_PUBLIC U_CHAR gv_maxEmkcCfgLoginAccessSubIdListAccess[MAXEMKCCFGLOGINACCESS_SUBID_LEN] = {RWRITE, RWRITE};

/* The data type of each subid of the registered oid */
MAXEMKCCFGLOGINACCESS_PUBLIC U_CHAR gv_maxEmkcCfgLoginAccessSubIdListDataTypes[MAXEMKCCFGLOGINACCESS_SUBID_LEN] = {ASN_INTEGER, ASN_INTEGER};

#else

#define MAXEMKCCFGLOGINACCESS_PUBLIC extern 

/* The oid to register */
MAXEMKCCFGLOGINACCESS_PUBLIC OID gv_maxEmkcCfgLoginAccessOid[MAXEMKCCFGLOGINACCESS_OID_LEN];

/* The subid list of the registerd oid */
MAXEMKCCFGLOGINACCESS_PUBLIC OID gv_maxEmkcCfgLoginAccessSubIdList[MAXEMKCCFGLOGINACCESS_SUBID_LEN];

/* Access type of each subid of the registered oid */
MAXEMKCCFGLOGINACCESS_PUBLIC U_CHAR gv_maxEmkcCfgLoginAccessSubIdListAccess[MAXEMKCCFGLOGINACCESS_SUBID_LEN];

/* The data type of each subid of the registered oid */
MAXEMKCCFGLOGINACCESS_PUBLIC U_CHAR gv_maxEmkcCfgLoginAccessSubIdListDataTypes[MAXEMKCCFGLOGINACCESS_SUBID_LEN];

#endif /* #ifdef MAXEMKCCFGLOGINACCESS_PUBLIC */

MAXEMKCCFGLOGINACCESS_PUBLIC INT32 gv_maxEmkcCfgDisableRootLogin;
MAXEMKCCFGLOGINACCESS_PUBLIC INT32 gv_maxEmkcCfgAllowNetworkDiscovery;

/* --------------------------- Function Prototypes ---------------------------*/

/* Functions defined in maxemkccfgloginaccesshdlr.c */
MAXEMKCCFGLOGINACCESS_PUBLIC void InitMaxEmkcCfgLoginAccess(void);

MAXEMKCCFGLOGINACCESS_PUBLIC CHAR MaxEmkcCfgLoginAccessProcessRequests(INT32 pduVersion,U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex);

MAXEMKCCFGLOGINACCESS_PUBLIC U_CHAR *MaxEmkcCfgLoginAccessProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGLOGINACCESS_PUBLIC U_CHAR *MaxEmkcCfgLoginAccessProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGLOGINACCESS_PUBLIC CHAR UpdateMaxEmkcCfgLoginAccess(U_CHAR command);

/* Functions defined in maxemkccfgloginaccessinstru.c */
MAXEMKCCFGLOGINACCESS_PUBLIC U_CHAR *GetMaxEmkcCfgDisableRootLogin(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGLOGINACCESS_PUBLIC U_CHAR *SetMaxEmkcCfgDisableRootLogin(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGLOGINACCESS_PUBLIC U_CHAR *GetMaxEmkcCfgAllowNetworkDiscovery(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGLOGINACCESS_PUBLIC U_CHAR *SetMaxEmkcCfgAllowNetworkDiscovery(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

/* Functions defined in maxemkccfgloginaccessftov.c */
#ifdef FILE_TO_VECTOR
MAXEMKCCFGLOGINACCESS_PUBLIC CHAR ReadFromMaxEmkcCfgLoginAccessFile();
MAXEMKCCFGLOGINACCESS_PUBLIC CHAR WriteToMaxEmkcCfgLoginAccessFile();
#endif

#endif  /* __MAXEMKCCFGLOGINACCESS_H__ */


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgloginaccess.h
 *****************************************************************************/
