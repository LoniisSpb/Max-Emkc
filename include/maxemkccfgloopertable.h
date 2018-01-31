/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgloopertable.h.
 *
 *  Purpose	: File contains data structures and function prototypes for 
 *			  the module maxemkccfgloopertable. 
 *
 *			  "Description"
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:43 MSK 2018
 *
 *  Docs	: Yes. 
 ***************************************************************************/

#ifdef  __cplusplus
extern "C" {
#endif /* #ifdef  __cplusplus */

#ifndef  __MAXEMKCCFGLOOPERTABLE_H__
#define  __MAXEMKCCFGLOOPERTABLE_H__

/* User code starts here */
/* User code ends here */

/*
 * If the user wants to add their code, then the code has to be
 * added in between the above mentioned comments. Otherwise, on
 * regeneration, the user added code will be overwritten.
 * The above mentioned comments can be used at any place in this file.
 */


/* ---------------------------- Macro Declarations ---------------------------*/

#define	MAXEMKCCFGLOOPERTABLE_MAXEMKCLOOPERTABLEINDEX	1
#define	MAXEMKCCFGLOOPERTABLE_MAXEMKCLOOPERROWSTATUS	2

#define MAXEMKCCFGLOOPERTABLE_OID_LEN	12
#define MAXEMKCCFGLOOPERTABLE_INDEX_LEN	1
#define MAXEMKCCFGLOOPERTABLE_SUBID_LEN	2

#ifdef FILE_TO_VECTOR
#if defined (UNIX) || defined (VXWORKS) || defined (NUCLEUS_OS)
#define MAXEMKCCFGLOOPERTABLE_FILE	"ftov/max-emkc/maxemkccfgloopertable.txt"
#elif defined (WINDOWS)
#define MAXEMKCCFGLOOPERTABLE_FILE	"ftov\\max-emkc\\maxemkccfgloopertable.txt"
#endif
#endif


/* ------------------------- Variable Declarations --------------------------*/

#ifdef MAXEMKCCFGLOOPERTABLE_PUBLIC

MAXEMKCCFGLOOPERTABLE_PUBLIC U_CHAR gv_maxEmkcCfgLooperTableIndexDataTypes[MAXEMKCCFGLOOPERTABLE_INDEX_LEN] = {ASN_GAUGE};

/* The oid to register */
MAXEMKCCFGLOOPERTABLE_PUBLIC OID gv_maxEmkcCfgLooperTableOid[MAXEMKCCFGLOOPERTABLE_OID_LEN] = {1,3,6,1,4,1,5597,1,2,2,800,2};

/* The subid list of the registerd oid */
MAXEMKCCFGLOOPERTABLE_PUBLIC OID gv_maxEmkcCfgLooperTableSubIdList[MAXEMKCCFGLOOPERTABLE_SUBID_LEN] = {1,2};

/* Access type of each subid of the registered oid */
MAXEMKCCFGLOOPERTABLE_PUBLIC U_CHAR gv_maxEmkcCfgLooperTableSubIdListAccess[MAXEMKCCFGLOOPERTABLE_SUBID_LEN] = {NOACCESS, RCREATE};

/* The data type of each subid of the registered oid */
MAXEMKCCFGLOOPERTABLE_PUBLIC U_CHAR gv_maxEmkcCfgLooperTableSubIdListDataTypes[MAXEMKCCFGLOOPERTABLE_SUBID_LEN] = {ASN_GAUGE, ASN_INTEGER};

#else

#define MAXEMKCCFGLOOPERTABLE_PUBLIC extern 

/* Variables to be stored in the agent tree */
MAXEMKCCFGLOOPERTABLE_PUBLIC U_CHAR gv_maxEmkcCfgLooperTableIndexDataTypes[MAXEMKCCFGLOOPERTABLE_INDEX_LEN];

/* The oid to register */
MAXEMKCCFGLOOPERTABLE_PUBLIC OID gv_maxEmkcCfgLooperTableOid[MAXEMKCCFGLOOPERTABLE_OID_LEN];

/* The subid list of the registerd oid */
MAXEMKCCFGLOOPERTABLE_PUBLIC OID gv_maxEmkcCfgLooperTableSubIdList[MAXEMKCCFGLOOPERTABLE_SUBID_LEN];

/* Access type of each subid of the registered oid */
MAXEMKCCFGLOOPERTABLE_PUBLIC U_CHAR gv_maxEmkcCfgLooperTableSubIdListAccess[MAXEMKCCFGLOOPERTABLE_SUBID_LEN];

/* The data type of each subid of the registered oid */
MAXEMKCCFGLOOPERTABLE_PUBLIC U_CHAR gv_maxEmkcCfgLooperTableSubIdListDataTypes[MAXEMKCCFGLOOPERTABLE_SUBID_LEN];

#endif /* #ifdef MAXEMKCCFGLOOPERTABLE_PUBLIC */

/* Vector contains all added instances of the table */
MAXEMKCCFGLOOPERTABLE_PUBLIC Vector gv_maxEmkcCfgLooperTableVector;

/* Structure to store entry information of maxEmkcCfgLooperTable */
typedef struct maxEmkcCfgLooperTableEntryType
{
	U_INT32 maxEmkcLooperTableIndex;
	INT32 maxEmkcLooperRowStatus;
} MaxEmkcCfgLooperTableEntry;

/* --------------------------- Function Prototypes ---------------------------*/

/* Functions defined in maxemkccfgloopertablehdlr.c */
MAXEMKCCFGLOOPERTABLE_PUBLIC void InitMaxEmkcCfgLooperTable(void);

MAXEMKCCFGLOOPERTABLE_PUBLIC CHAR CreateAndAddNewMaxEmkcCfgLooperTableEntry(U_INT32 maxEmkcLooperTableIndex, INT32 maxEmkcLooperRowStatus);

MAXEMKCCFGLOOPERTABLE_PUBLIC CHAR CreateAndAddMaxEmkcCfgLooperTableEntry(OID *instance, INT32 instanceLen, U_INT32 maxEmkcLooperTableIndex, INT32 maxEmkcLooperRowStatus);

MAXEMKCCFGLOOPERTABLE_PUBLIC OID *CreateMaxEmkcCfgLooperTableInstance(INT32 *instanceLen, U_INT32 maxEmkcLooperTableIndex);

MAXEMKCCFGLOOPERTABLE_PUBLIC CHAR MaxEmkcCfgLooperTableProcessRequests(INT32 pduVersion,U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex);

MAXEMKCCFGLOOPERTABLE_PUBLIC U_CHAR *MaxEmkcCfgLooperTableProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGLOOPERTABLE_PUBLIC U_CHAR *MaxEmkcCfgLooperTableProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGLOOPERTABLE_PUBLIC Vector *GetMaxEmkcCfgLooperTableInfo(INT32 startIdx, INT32 numOfRows, INT32 *flag);

MAXEMKCCFGLOOPERTABLE_PUBLIC CHAR UpdateMaxEmkcCfgLooperTable(U_CHAR command);

MAXEMKCCFGLOOPERTABLE_PUBLIC void FreeMaxEmkcCfgLooperTableEntryMemory(Entry *entryPtr);

MAXEMKCCFGLOOPERTABLE_PUBLIC void FreeMaxEmkcCfgLooperTableVector();

/* Functions defined in maxemkccfgloopertableinstru.c */
MAXEMKCCFGLOOPERTABLE_PUBLIC U_CHAR *GetMaxEmkcLooperTableIndex(MaxEmkcCfgLooperTableEntry *maxEmkcCfgLooperTableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGLOOPERTABLE_PUBLIC U_CHAR *SetMaxEmkcLooperTableIndex(MaxEmkcCfgLooperTableEntry *maxEmkcCfgLooperTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGLOOPERTABLE_PUBLIC U_CHAR *GetMaxEmkcLooperRowStatus(MaxEmkcCfgLooperTableEntry *maxEmkcCfgLooperTableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGLOOPERTABLE_PUBLIC U_CHAR *SetMaxEmkcLooperRowStatus(MaxEmkcCfgLooperTableEntry *maxEmkcCfgLooperTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

/* Functions defined in maxemkccfgloopertableftov.c */
#ifdef FILE_TO_VECTOR
MAXEMKCCFGLOOPERTABLE_PUBLIC CHAR ReadFromMaxEmkcCfgLooperTableFile();
MAXEMKCCFGLOOPERTABLE_PUBLIC CHAR WriteToMaxEmkcCfgLooperTableFile();
#endif

#endif  /* __MAXEMKCCFGLOOPERTABLE_H__ */


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgloopertable.h
 *****************************************************************************/
