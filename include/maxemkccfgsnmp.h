/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgsnmp.h.
 *
 *  Purpose	: File contains data structures and function prototypes for 
 *			  the module maxemkccfgsnmp.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:41:00 MSK 2018
 *
 *  Docs	: Yes. 
 ***************************************************************************/

#ifdef  __cplusplus
extern "C" {
#endif /* #ifdef  __cplusplus */

#ifndef  __MAXEMKCCFGSNMP_H__
#define  __MAXEMKCCFGSNMP_H__

/* User code starts here */
/* User code ends here */

/*
 * If the user wants to add their code, then the code has to be
 * added in between the above mentioned comments. Otherwise, on
 * regeneration, the user added code will be overwritten.
 * The above mentioned comments can be used at any place in this file.
 */


/* ---------------------------- Macro Declarations ---------------------------*/

#define	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPREADCOMMUNITY	1
#define	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPWRITECOMMUNITY	2
#define	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPCONTACT	3
#define	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPLOCATION	4
#define	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPV3USERNAME	5
#define	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPV3USERRIGHTS	6
#define	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPV3CONTEXT	7
#define	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPV3SECURITYLEVEL	8
#define	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPV3AUTHPROTOCOL	9
#define	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPV3AUTHPASSPHRASE	10
#define	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPV3PRIVPROTOCOL	11
#define	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPV3PRIVPASSPHRASE	12
#define	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPTRAPRETRIES	13
#define	MAXEMKCCFGSNMP_MAXEMKCCFGSNMPTRAPTIMEOUT	14
#define	MAXEMKCCFGSNMP_MAXEMKCCFGSMNPENABLEDVERSION	15

#define MAXEMKCCFGSNMP_OID_LEN	11
#define MAXEMKCCFGSNMP_GROUP1_SUBID_LEN	15

#ifdef FILE_TO_VECTOR
#if defined (UNIX) || defined (VXWORKS) || defined (NUCLEUS_OS)
#define MAXEMKCCFGSNMP_FILE	"ftov/max-emkc/maxemkccfgsnmp.txt"
#elif defined (WINDOWS)
#define MAXEMKCCFGSNMP_FILE	"ftov\\max-emkc\\maxemkccfgsnmp.txt"
#endif
#endif


/* ------------------------- Variable Declarations --------------------------*/

#ifdef MAXEMKCCFGSNMP_PUBLIC


/* The oid to register */
MAXEMKCCFGSNMP_PUBLIC OID gv_maxEmkcCfgSnmpGroup1Oid[MAXEMKCCFGSNMP_OID_LEN] = {1,3,6,1,4,1,5597,1,2,17,15};

/* The subid list of the registerd oid */
MAXEMKCCFGSNMP_PUBLIC OID gv_maxEmkcCfgSnmpGroup1SubIdList[MAXEMKCCFGSNMP_GROUP1_SUBID_LEN] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};


/* Access type of each subid of the registered oid */
MAXEMKCCFGSNMP_PUBLIC U_CHAR gv_maxEmkcCfgSnmpGroup1SubIdListAccess[MAXEMKCCFGSNMP_GROUP1_SUBID_LEN] = {RWRITE, RWRITE, RWRITE, RWRITE, RWRITE, RWRITE, RWRITE, RWRITE, RWRITE, RWRITE, RWRITE, RWRITE, RWRITE, RWRITE, RWRITE};


/* The data type of each subid of the registered oid */
MAXEMKCCFGSNMP_PUBLIC U_CHAR gv_maxEmkcCfgSnmpGroup1SubIdListDataTypes[MAXEMKCCFGSNMP_GROUP1_SUBID_LEN] = {ASN_OCTET_STR, ASN_OCTET_STR, ASN_OCTET_STR, ASN_OCTET_STR, ASN_OCTET_STR, ASN_INTEGER, ASN_OCTET_STR, ASN_INTEGER, ASN_INTEGER, ASN_OCTET_STR, ASN_INTEGER, ASN_OCTET_STR, ASN_GAUGE, ASN_GAUGE, ASN_INTEGER};


#else

#define MAXEMKCCFGSNMP_PUBLIC extern 

/* The oid to register */
MAXEMKCCFGSNMP_PUBLIC OID gv_maxEmkcCfgSnmpGroup1Oid[MAXEMKCCFGSNMP_OID_LEN];

/* The subid list of the registerd oid */
MAXEMKCCFGSNMP_PUBLIC OID gv_maxEmkcCfgSnmpGroup1SubIdList[MAXEMKCCFGSNMP_GROUP1_SUBID_LEN];

/* Access type of each subid of the registered oid */
MAXEMKCCFGSNMP_PUBLIC U_CHAR gv_maxEmkcCfgSnmpGroup1SubIdListAccess[MAXEMKCCFGSNMP_GROUP1_SUBID_LEN];

/* The data type of each subid of the registered oid */
MAXEMKCCFGSNMP_PUBLIC U_CHAR gv_maxEmkcCfgSnmpGroup1SubIdListDataTypes[MAXEMKCCFGSNMP_GROUP1_SUBID_LEN];

#endif /* #ifdef MAXEMKCCFGSNMP_PUBLIC */

MAXEMKCCFGSNMP_PUBLIC U_CHAR *gv_maxEmkcCfgSnmpReadCommunity;
MAXEMKCCFGSNMP_PUBLIC U_CHAR *gv_maxEmkcCfgSnmpWriteCommunity;
MAXEMKCCFGSNMP_PUBLIC U_CHAR *gv_maxEmkcCfgSnmpContact;
MAXEMKCCFGSNMP_PUBLIC U_CHAR *gv_maxEmkcCfgSnmpLocation;
MAXEMKCCFGSNMP_PUBLIC U_CHAR *gv_maxEmkcCfgSnmpV3UserName;
MAXEMKCCFGSNMP_PUBLIC INT32 gv_maxEmkcCfgSnmpV3UserRights;
MAXEMKCCFGSNMP_PUBLIC U_CHAR *gv_maxEmkcCfgSnmpV3Context;
MAXEMKCCFGSNMP_PUBLIC INT32 gv_maxEmkcCfgSnmpV3SecurityLevel;
MAXEMKCCFGSNMP_PUBLIC INT32 gv_maxEmkcCfgSnmpV3AuthProtocol;
MAXEMKCCFGSNMP_PUBLIC U_CHAR *gv_maxEmkcCfgSnmpV3AuthPassphrase;
MAXEMKCCFGSNMP_PUBLIC INT32 gv_maxEmkcCfgSnmpV3PrivProtocol;
MAXEMKCCFGSNMP_PUBLIC U_CHAR *gv_maxEmkcCfgSnmpV3PrivPassphrase;
MAXEMKCCFGSNMP_PUBLIC U_INT32 gv_maxEmkcCfgSnmpTrapRetries;
MAXEMKCCFGSNMP_PUBLIC U_INT32 gv_maxEmkcCfgSnmpTrapTimeout;
MAXEMKCCFGSNMP_PUBLIC INT32 gv_maxEmkcCfgSmnpEnabledVersion;

/* --------------------------- Function Prototypes ---------------------------*/

/* Functions defined in maxemkccfgsnmphdlr.c */
MAXEMKCCFGSNMP_PUBLIC void InitMaxEmkcCfgSnmp(void);

MAXEMKCCFGSNMP_PUBLIC CHAR MaxEmkcCfgSnmpProcessRequests(INT32 pduVersion,U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex);

MAXEMKCCFGSNMP_PUBLIC U_CHAR *MaxEmkcCfgSnmpProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMP_PUBLIC U_CHAR *MaxEmkcCfgSnmpProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMP_PUBLIC CHAR UpdateMaxEmkcCfgSnmp(U_CHAR command);

/* Functions defined in maxemkccfgsnmpinstru.c */
MAXEMKCCFGSNMP_PUBLIC U_CHAR *GetMaxEmkcCfgSnmpReadCommunity(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMP_PUBLIC U_CHAR *SetMaxEmkcCfgSnmpReadCommunity(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMP_PUBLIC U_CHAR *GetMaxEmkcCfgSnmpWriteCommunity(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMP_PUBLIC U_CHAR *SetMaxEmkcCfgSnmpWriteCommunity(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMP_PUBLIC U_CHAR *GetMaxEmkcCfgSnmpContact(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMP_PUBLIC U_CHAR *SetMaxEmkcCfgSnmpContact(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMP_PUBLIC U_CHAR *GetMaxEmkcCfgSnmpLocation(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMP_PUBLIC U_CHAR *SetMaxEmkcCfgSnmpLocation(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMP_PUBLIC U_CHAR *GetMaxEmkcCfgSnmpV3UserName(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMP_PUBLIC U_CHAR *SetMaxEmkcCfgSnmpV3UserName(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMP_PUBLIC U_CHAR *GetMaxEmkcCfgSnmpV3UserRights(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMP_PUBLIC U_CHAR *SetMaxEmkcCfgSnmpV3UserRights(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMP_PUBLIC U_CHAR *GetMaxEmkcCfgSnmpV3Context(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMP_PUBLIC U_CHAR *SetMaxEmkcCfgSnmpV3Context(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMP_PUBLIC U_CHAR *GetMaxEmkcCfgSnmpV3SecurityLevel(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMP_PUBLIC U_CHAR *SetMaxEmkcCfgSnmpV3SecurityLevel(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMP_PUBLIC U_CHAR *GetMaxEmkcCfgSnmpV3AuthProtocol(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMP_PUBLIC U_CHAR *SetMaxEmkcCfgSnmpV3AuthProtocol(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMP_PUBLIC U_CHAR *GetMaxEmkcCfgSnmpV3AuthPassphrase(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMP_PUBLIC U_CHAR *SetMaxEmkcCfgSnmpV3AuthPassphrase(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMP_PUBLIC U_CHAR *GetMaxEmkcCfgSnmpV3PrivProtocol(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMP_PUBLIC U_CHAR *SetMaxEmkcCfgSnmpV3PrivProtocol(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMP_PUBLIC U_CHAR *GetMaxEmkcCfgSnmpV3PrivPassphrase(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMP_PUBLIC U_CHAR *SetMaxEmkcCfgSnmpV3PrivPassphrase(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMP_PUBLIC U_CHAR *GetMaxEmkcCfgSnmpTrapRetries(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMP_PUBLIC U_CHAR *SetMaxEmkcCfgSnmpTrapRetries(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMP_PUBLIC U_CHAR *GetMaxEmkcCfgSnmpTrapTimeout(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMP_PUBLIC U_CHAR *SetMaxEmkcCfgSnmpTrapTimeout(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMP_PUBLIC U_CHAR *GetMaxEmkcCfgSmnpEnabledVersion(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMP_PUBLIC U_CHAR *SetMaxEmkcCfgSmnpEnabledVersion(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

/* Functions defined in maxemkccfgsnmpftov.c */
#ifdef FILE_TO_VECTOR
MAXEMKCCFGSNMP_PUBLIC CHAR ReadFromMaxEmkcCfgSnmpFile();
MAXEMKCCFGSNMP_PUBLIC CHAR WriteToMaxEmkcCfgSnmpFile();
#endif

#endif  /* __MAXEMKCCFGSNMP_H__ */


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgsnmp.h
 *****************************************************************************/
