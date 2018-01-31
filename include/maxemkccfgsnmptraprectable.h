/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgsnmptraprectable.h.
 *
 *  Purpose	: File contains data structures and function prototypes for 
 *			  the module maxemkccfgsnmptraprectable. 
 *
 *			  "Description"
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:57 MSK 2018
 *
 *  Docs	: Yes. 
 ***************************************************************************/

#ifdef  __cplusplus
extern "C" {
#endif /* #ifdef  __cplusplus */

#ifndef  __MAXEMKCCFGSNMPTRAPRECTABLE_H__
#define  __MAXEMKCCFGSNMPTRAPRECTABLE_H__

/* User code starts here */
/* User code ends here */

/*
 * If the user wants to add their code, then the code has to be
 * added in between the above mentioned comments. Otherwise, on
 * regeneration, the user added code will be overwritten.
 * The above mentioned comments can be used at any place in this file.
 */


/* ---------------------------- Macro Declarations ---------------------------*/

#define	MAXEMKCCFGSNMPTRAPRECTABLE_MAXEMKCSNMPTRAPRECINDEX	1
#define	MAXEMKCCFGSNMPTRAPRECTABLE_MAXEMKCCFGSNMPTRAPRECROWSTATUS	2
#define	MAXEMKCCFGSNMPTRAPRECTABLE_MAXEMKCCFGSNMPTRAPRECADDRESS	3
#define	MAXEMKCCFGSNMPTRAPRECTABLE_MAXEMKCCFGSNMPRECCOMMUNITY	4
#define	MAXEMKCCFGSNMPTRAPRECTABLE_MAXEMKCCFGSNMPTRAPRECVERSION	6

#define MAXEMKCCFGSNMPTRAPRECTABLE_OID_LEN	11
#define MAXEMKCCFGSNMPTRAPRECTABLE_INDEX_LEN	1
#define MAXEMKCCFGSNMPTRAPRECTABLE_SUBID_LEN	5

#ifdef FILE_TO_VECTOR
#if defined (UNIX) || defined (VXWORKS) || defined (NUCLEUS_OS)
#define MAXEMKCCFGSNMPTRAPRECTABLE_FILE	"ftov/max-emkc/maxemkccfgsnmptraprectable.txt"
#elif defined (WINDOWS)
#define MAXEMKCCFGSNMPTRAPRECTABLE_FILE	"ftov\\max-emkc\\maxemkccfgsnmptraprectable.txt"
#endif
#endif


/* ------------------------- Variable Declarations --------------------------*/

#ifdef MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC

MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC U_CHAR gv_maxEmkcCfgSnmpTrapRecTableIndexDataTypes[MAXEMKCCFGSNMPTRAPRECTABLE_INDEX_LEN] = {ASN_GAUGE};

/* The oid to register */
MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC OID gv_maxEmkcCfgSnmpTrapRecTableOid[MAXEMKCCFGSNMPTRAPRECTABLE_OID_LEN] = {1,3,6,1,4,1,5597,1,2,17,16};

/* The subid list of the registerd oid */
MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC OID gv_maxEmkcCfgSnmpTrapRecTableSubIdList[MAXEMKCCFGSNMPTRAPRECTABLE_SUBID_LEN] = {1,2,3,4,6};

/* Access type of each subid of the registered oid */
MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC U_CHAR gv_maxEmkcCfgSnmpTrapRecTableSubIdListAccess[MAXEMKCCFGSNMPTRAPRECTABLE_SUBID_LEN] = {NOACCESS, RCREATE, RWRITE, RWRITE, RWRITE};

/* The data type of each subid of the registered oid */
MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC U_CHAR gv_maxEmkcCfgSnmpTrapRecTableSubIdListDataTypes[MAXEMKCCFGSNMPTRAPRECTABLE_SUBID_LEN] = {ASN_GAUGE, ASN_INTEGER, ASN_IPADDRESS, ASN_OCTET_STR, ASN_INTEGER};

#else

#define MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC extern 

/* Variables to be stored in the agent tree */
MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC U_CHAR gv_maxEmkcCfgSnmpTrapRecTableIndexDataTypes[MAXEMKCCFGSNMPTRAPRECTABLE_INDEX_LEN];

/* The oid to register */
MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC OID gv_maxEmkcCfgSnmpTrapRecTableOid[MAXEMKCCFGSNMPTRAPRECTABLE_OID_LEN];

/* The subid list of the registerd oid */
MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC OID gv_maxEmkcCfgSnmpTrapRecTableSubIdList[MAXEMKCCFGSNMPTRAPRECTABLE_SUBID_LEN];

/* Access type of each subid of the registered oid */
MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC U_CHAR gv_maxEmkcCfgSnmpTrapRecTableSubIdListAccess[MAXEMKCCFGSNMPTRAPRECTABLE_SUBID_LEN];

/* The data type of each subid of the registered oid */
MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC U_CHAR gv_maxEmkcCfgSnmpTrapRecTableSubIdListDataTypes[MAXEMKCCFGSNMPTRAPRECTABLE_SUBID_LEN];

#endif /* #ifdef MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC */

/* Vector contains all added instances of the table */
MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC Vector gv_maxEmkcCfgSnmpTrapRecTableVector;

/* Structure to store entry information of maxEmkcCfgSnmpTrapRecTable */
typedef struct maxEmkcCfgSnmpTrapRecTableEntryType
{
	U_INT32 maxEmkcSnmpTrapRecIndex;
	INT32 maxEmkcCfgSnmpTrapRecRowStatus;
	U_CHAR *maxEmkcCfgSnmpTrapRecAddress;
	INT32 maxEmkcCfgSnmpTrapRecAddressLen;
	U_CHAR *maxEmkcCfgSnmpRecCommunity;
	INT32 maxEmkcCfgSnmpTrapRecVersion;
} MaxEmkcCfgSnmpTrapRecTableEntry;

/* --------------------------- Function Prototypes ---------------------------*/

/* Functions defined in maxemkccfgsnmptraprectablehdlr.c */
MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC void InitMaxEmkcCfgSnmpTrapRecTable(void);

MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC CHAR CreateAndAddNewMaxEmkcCfgSnmpTrapRecTableEntry(U_INT32 maxEmkcSnmpTrapRecIndex, INT32 maxEmkcCfgSnmpTrapRecRowStatus, U_CHAR *maxEmkcCfgSnmpTrapRecAddress, INT32 maxEmkcCfgSnmpTrapRecAddressLen , U_CHAR *maxEmkcCfgSnmpRecCommunity, INT32 maxEmkcCfgSnmpTrapRecVersion);

MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC CHAR CreateAndAddMaxEmkcCfgSnmpTrapRecTableEntry(OID *instance, INT32 instanceLen, U_INT32 maxEmkcSnmpTrapRecIndex, INT32 maxEmkcCfgSnmpTrapRecRowStatus, U_CHAR *maxEmkcCfgSnmpTrapRecAddress, INT32 maxEmkcCfgSnmpTrapRecAddressLen , U_CHAR *maxEmkcCfgSnmpRecCommunity, INT32 maxEmkcCfgSnmpTrapRecVersion);

MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC OID *CreateMaxEmkcCfgSnmpTrapRecTableInstance(INT32 *instanceLen, U_INT32 maxEmkcSnmpTrapRecIndex);

MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC CHAR MaxEmkcCfgSnmpTrapRecTableProcessRequests(INT32 pduVersion,U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex);

MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC U_CHAR *MaxEmkcCfgSnmpTrapRecTableProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC U_CHAR *MaxEmkcCfgSnmpTrapRecTableProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC Vector *GetMaxEmkcCfgSnmpTrapRecTableInfo(INT32 startIdx, INT32 numOfRows, INT32 *flag);

MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC CHAR UpdateMaxEmkcCfgSnmpTrapRecTable(U_CHAR command);

MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC void FreeMaxEmkcCfgSnmpTrapRecTableEntryMemory(Entry *entryPtr);

MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC void FreeMaxEmkcCfgSnmpTrapRecTableVector();

/* Functions defined in maxemkccfgsnmptraprectableinstru.c */
MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC U_CHAR *GetMaxEmkcSnmpTrapRecIndex(MaxEmkcCfgSnmpTrapRecTableEntry *maxEmkcCfgSnmpTrapRecTableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC U_CHAR *SetMaxEmkcSnmpTrapRecIndex(MaxEmkcCfgSnmpTrapRecTableEntry *maxEmkcCfgSnmpTrapRecTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC U_CHAR *GetMaxEmkcCfgSnmpTrapRecRowStatus(MaxEmkcCfgSnmpTrapRecTableEntry *maxEmkcCfgSnmpTrapRecTableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC U_CHAR *SetMaxEmkcCfgSnmpTrapRecRowStatus(MaxEmkcCfgSnmpTrapRecTableEntry *maxEmkcCfgSnmpTrapRecTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC U_CHAR *GetMaxEmkcCfgSnmpTrapRecAddress(MaxEmkcCfgSnmpTrapRecTableEntry *maxEmkcCfgSnmpTrapRecTableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC U_CHAR *SetMaxEmkcCfgSnmpTrapRecAddress(MaxEmkcCfgSnmpTrapRecTableEntry *maxEmkcCfgSnmpTrapRecTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC U_CHAR *GetMaxEmkcCfgSnmpRecCommunity(MaxEmkcCfgSnmpTrapRecTableEntry *maxEmkcCfgSnmpTrapRecTableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC U_CHAR *SetMaxEmkcCfgSnmpRecCommunity(MaxEmkcCfgSnmpTrapRecTableEntry *maxEmkcCfgSnmpTrapRecTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC U_CHAR *GetMaxEmkcCfgSnmpTrapRecVersion(MaxEmkcCfgSnmpTrapRecTableEntry *maxEmkcCfgSnmpTrapRecTableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC U_CHAR *SetMaxEmkcCfgSnmpTrapRecVersion(MaxEmkcCfgSnmpTrapRecTableEntry *maxEmkcCfgSnmpTrapRecTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

/* Functions defined in maxemkccfgsnmptraprectableftov.c */
#ifdef FILE_TO_VECTOR
MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC CHAR ReadFromMaxEmkcCfgSnmpTrapRecTableFile();
MAXEMKCCFGSNMPTRAPRECTABLE_PUBLIC CHAR WriteToMaxEmkcCfgSnmpTrapRecTableFile();
#endif

#endif  /* __MAXEMKCCFGSNMPTRAPRECTABLE_H__ */


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgsnmptraprectable.h
 *****************************************************************************/
