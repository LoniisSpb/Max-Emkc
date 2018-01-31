/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgtraffictable.h.
 *
 *  Purpose	: File contains data structures and function prototypes for 
 *			  the module maxemkccfgtraffictable. 
 *
 *			  "Description"
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:41 MSK 2018
 *
 *  Docs	: Yes. 
 ***************************************************************************/

#ifdef  __cplusplus
extern "C" {
#endif /* #ifdef  __cplusplus */

#ifndef  __MAXEMKCCFGTRAFFICTABLE_H__
#define  __MAXEMKCCFGTRAFFICTABLE_H__

/* User code starts here */
/* User code ends here */

/*
 * If the user wants to add their code, then the code has to be
 * added in between the above mentioned comments. Otherwise, on
 * regeneration, the user added code will be overwritten.
 * The above mentioned comments can be used at any place in this file.
 */


/* ---------------------------- Macro Declarations ---------------------------*/

#define	MAXEMKCCFGTRAFFICTABLE_MAXEMKCCFGTRAFFICINDEX	1
#define	MAXEMKCCFGTRAFFICTABLE_MAXEMKCCFGTRAFFICTABLEROWSTATUS	2

#define MAXEMKCCFGTRAFFICTABLE_OID_LEN	12
#define MAXEMKCCFGTRAFFICTABLE_INDEX_LEN	1
#define MAXEMKCCFGTRAFFICTABLE_SUBID_LEN	2

#ifdef FILE_TO_VECTOR
#if defined (UNIX) || defined (VXWORKS) || defined (NUCLEUS_OS)
#define MAXEMKCCFGTRAFFICTABLE_FILE	"ftov/max-emkc/maxemkccfgtraffictable.txt"
#elif defined (WINDOWS)
#define MAXEMKCCFGTRAFFICTABLE_FILE	"ftov\\max-emkc\\maxemkccfgtraffictable.txt"
#endif
#endif


/* ------------------------- Variable Declarations --------------------------*/

#ifdef MAXEMKCCFGTRAFFICTABLE_PUBLIC

MAXEMKCCFGTRAFFICTABLE_PUBLIC U_CHAR gv_maxEmkcCfgTrafficTableIndexDataTypes[MAXEMKCCFGTRAFFICTABLE_INDEX_LEN] = {ASN_GAUGE};

/* The oid to register */
MAXEMKCCFGTRAFFICTABLE_PUBLIC OID gv_maxEmkcCfgTrafficTableOid[MAXEMKCCFGTRAFFICTABLE_OID_LEN] = {1,3,6,1,4,1,5597,1,2,2,8,2};

/* The subid list of the registerd oid */
MAXEMKCCFGTRAFFICTABLE_PUBLIC OID gv_maxEmkcCfgTrafficTableSubIdList[MAXEMKCCFGTRAFFICTABLE_SUBID_LEN] = {1,2};

/* Access type of each subid of the registered oid */
MAXEMKCCFGTRAFFICTABLE_PUBLIC U_CHAR gv_maxEmkcCfgTrafficTableSubIdListAccess[MAXEMKCCFGTRAFFICTABLE_SUBID_LEN] = {NOACCESS, RCREATE};

/* The data type of each subid of the registered oid */
MAXEMKCCFGTRAFFICTABLE_PUBLIC U_CHAR gv_maxEmkcCfgTrafficTableSubIdListDataTypes[MAXEMKCCFGTRAFFICTABLE_SUBID_LEN] = {ASN_GAUGE, ASN_INTEGER};

#else

#define MAXEMKCCFGTRAFFICTABLE_PUBLIC extern 

/* Variables to be stored in the agent tree */
MAXEMKCCFGTRAFFICTABLE_PUBLIC U_CHAR gv_maxEmkcCfgTrafficTableIndexDataTypes[MAXEMKCCFGTRAFFICTABLE_INDEX_LEN];

/* The oid to register */
MAXEMKCCFGTRAFFICTABLE_PUBLIC OID gv_maxEmkcCfgTrafficTableOid[MAXEMKCCFGTRAFFICTABLE_OID_LEN];

/* The subid list of the registerd oid */
MAXEMKCCFGTRAFFICTABLE_PUBLIC OID gv_maxEmkcCfgTrafficTableSubIdList[MAXEMKCCFGTRAFFICTABLE_SUBID_LEN];

/* Access type of each subid of the registered oid */
MAXEMKCCFGTRAFFICTABLE_PUBLIC U_CHAR gv_maxEmkcCfgTrafficTableSubIdListAccess[MAXEMKCCFGTRAFFICTABLE_SUBID_LEN];

/* The data type of each subid of the registered oid */
MAXEMKCCFGTRAFFICTABLE_PUBLIC U_CHAR gv_maxEmkcCfgTrafficTableSubIdListDataTypes[MAXEMKCCFGTRAFFICTABLE_SUBID_LEN];

#endif /* #ifdef MAXEMKCCFGTRAFFICTABLE_PUBLIC */

/* Vector contains all added instances of the table */
MAXEMKCCFGTRAFFICTABLE_PUBLIC Vector gv_maxEmkcCfgTrafficTableVector;

/* Structure to store entry information of maxEmkcCfgTrafficTable */
typedef struct maxEmkcCfgTrafficTableEntryType
{
	U_INT32 maxEmkcCfgTrafficIndex;
	INT32 maxEmkcCfgTrafficTableRowStatus;
} MaxEmkcCfgTrafficTableEntry;

/* --------------------------- Function Prototypes ---------------------------*/

/* Functions defined in maxemkccfgtraffictablehdlr.c */
MAXEMKCCFGTRAFFICTABLE_PUBLIC void InitMaxEmkcCfgTrafficTable(void);

MAXEMKCCFGTRAFFICTABLE_PUBLIC CHAR CreateAndAddNewMaxEmkcCfgTrafficTableEntry(U_INT32 maxEmkcCfgTrafficIndex, INT32 maxEmkcCfgTrafficTableRowStatus);

MAXEMKCCFGTRAFFICTABLE_PUBLIC CHAR CreateAndAddMaxEmkcCfgTrafficTableEntry(OID *instance, INT32 instanceLen, U_INT32 maxEmkcCfgTrafficIndex, INT32 maxEmkcCfgTrafficTableRowStatus);

MAXEMKCCFGTRAFFICTABLE_PUBLIC OID *CreateMaxEmkcCfgTrafficTableInstance(INT32 *instanceLen, U_INT32 maxEmkcCfgTrafficIndex);

MAXEMKCCFGTRAFFICTABLE_PUBLIC CHAR MaxEmkcCfgTrafficTableProcessRequests(INT32 pduVersion,U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex);

MAXEMKCCFGTRAFFICTABLE_PUBLIC U_CHAR *MaxEmkcCfgTrafficTableProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGTRAFFICTABLE_PUBLIC U_CHAR *MaxEmkcCfgTrafficTableProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGTRAFFICTABLE_PUBLIC Vector *GetMaxEmkcCfgTrafficTableInfo(INT32 startIdx, INT32 numOfRows, INT32 *flag);

MAXEMKCCFGTRAFFICTABLE_PUBLIC CHAR UpdateMaxEmkcCfgTrafficTable(U_CHAR command);

MAXEMKCCFGTRAFFICTABLE_PUBLIC void FreeMaxEmkcCfgTrafficTableEntryMemory(Entry *entryPtr);

MAXEMKCCFGTRAFFICTABLE_PUBLIC void FreeMaxEmkcCfgTrafficTableVector();

/* Functions defined in maxemkccfgtraffictableinstru.c */
MAXEMKCCFGTRAFFICTABLE_PUBLIC U_CHAR *GetMaxEmkcCfgTrafficIndex(MaxEmkcCfgTrafficTableEntry *maxEmkcCfgTrafficTableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGTRAFFICTABLE_PUBLIC U_CHAR *SetMaxEmkcCfgTrafficIndex(MaxEmkcCfgTrafficTableEntry *maxEmkcCfgTrafficTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGTRAFFICTABLE_PUBLIC U_CHAR *GetMaxEmkcCfgTrafficTableRowStatus(MaxEmkcCfgTrafficTableEntry *maxEmkcCfgTrafficTableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGTRAFFICTABLE_PUBLIC U_CHAR *SetMaxEmkcCfgTrafficTableRowStatus(MaxEmkcCfgTrafficTableEntry *maxEmkcCfgTrafficTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

/* Functions defined in maxemkccfgtraffictableftov.c */
#ifdef FILE_TO_VECTOR
MAXEMKCCFGTRAFFICTABLE_PUBLIC CHAR ReadFromMaxEmkcCfgTrafficTableFile();
MAXEMKCCFGTRAFFICTABLE_PUBLIC CHAR WriteToMaxEmkcCfgTrafficTableFile();
#endif

#endif  /* __MAXEMKCCFGTRAFFICTABLE_H__ */


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgtraffictable.h
 *****************************************************************************/
