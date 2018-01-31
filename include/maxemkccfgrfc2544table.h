/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgrfc2544table.h.
 *
 *  Purpose	: File contains data structures and function prototypes for 
 *			  the module maxemkccfgrfc2544table. 
 *
 *			  "Description"
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:35 MSK 2018
 *
 *  Docs	: Yes. 
 ***************************************************************************/

#ifdef  __cplusplus
extern "C" {
#endif /* #ifdef  __cplusplus */

#ifndef  __MAXEMKCCFGRFC2544TABLE_H__
#define  __MAXEMKCCFGRFC2544TABLE_H__

/* User code starts here */
/* User code ends here */

/*
 * If the user wants to add their code, then the code has to be
 * added in between the above mentioned comments. Otherwise, on
 * regeneration, the user added code will be overwritten.
 * The above mentioned comments can be used at any place in this file.
 */


/* ---------------------------- Macro Declarations ---------------------------*/

#define	MAXEMKCCFGRFC2544TABLE_MAXEMKCCFGRFC2544TABLEINDEX	1
#define	MAXEMKCCFGRFC2544TABLE_MAXEMKCCFGRFC2544TABLEROWSTATUS	2

#define MAXEMKCCFGRFC2544TABLE_OID_LEN	12
#define MAXEMKCCFGRFC2544TABLE_INDEX_LEN	1
#define MAXEMKCCFGRFC2544TABLE_SUBID_LEN	2

#ifdef FILE_TO_VECTOR
#if defined (UNIX) || defined (VXWORKS) || defined (NUCLEUS_OS)
#define MAXEMKCCFGRFC2544TABLE_FILE	"ftov/max-emkc/maxemkccfgrfc2544table.txt"
#elif defined (WINDOWS)
#define MAXEMKCCFGRFC2544TABLE_FILE	"ftov\\max-emkc\\maxemkccfgrfc2544table.txt"
#endif
#endif


/* ------------------------- Variable Declarations --------------------------*/

#ifdef MAXEMKCCFGRFC2544TABLE_PUBLIC

MAXEMKCCFGRFC2544TABLE_PUBLIC U_CHAR gv_maxEmkcCfgRfc2544TableIndexDataTypes[MAXEMKCCFGRFC2544TABLE_INDEX_LEN] = {ASN_GAUGE};

/* The oid to register */
MAXEMKCCFGRFC2544TABLE_PUBLIC OID gv_maxEmkcCfgRfc2544TableOid[MAXEMKCCFGRFC2544TABLE_OID_LEN] = {1,3,6,1,4,1,5597,1,2,2,6,2};

/* The subid list of the registerd oid */
MAXEMKCCFGRFC2544TABLE_PUBLIC OID gv_maxEmkcCfgRfc2544TableSubIdList[MAXEMKCCFGRFC2544TABLE_SUBID_LEN] = {1,2};

/* Access type of each subid of the registered oid */
MAXEMKCCFGRFC2544TABLE_PUBLIC U_CHAR gv_maxEmkcCfgRfc2544TableSubIdListAccess[MAXEMKCCFGRFC2544TABLE_SUBID_LEN] = {NOACCESS, RCREATE};

/* The data type of each subid of the registered oid */
MAXEMKCCFGRFC2544TABLE_PUBLIC U_CHAR gv_maxEmkcCfgRfc2544TableSubIdListDataTypes[MAXEMKCCFGRFC2544TABLE_SUBID_LEN] = {ASN_GAUGE, ASN_INTEGER};

#else

#define MAXEMKCCFGRFC2544TABLE_PUBLIC extern 

/* Variables to be stored in the agent tree */
MAXEMKCCFGRFC2544TABLE_PUBLIC U_CHAR gv_maxEmkcCfgRfc2544TableIndexDataTypes[MAXEMKCCFGRFC2544TABLE_INDEX_LEN];

/* The oid to register */
MAXEMKCCFGRFC2544TABLE_PUBLIC OID gv_maxEmkcCfgRfc2544TableOid[MAXEMKCCFGRFC2544TABLE_OID_LEN];

/* The subid list of the registerd oid */
MAXEMKCCFGRFC2544TABLE_PUBLIC OID gv_maxEmkcCfgRfc2544TableSubIdList[MAXEMKCCFGRFC2544TABLE_SUBID_LEN];

/* Access type of each subid of the registered oid */
MAXEMKCCFGRFC2544TABLE_PUBLIC U_CHAR gv_maxEmkcCfgRfc2544TableSubIdListAccess[MAXEMKCCFGRFC2544TABLE_SUBID_LEN];

/* The data type of each subid of the registered oid */
MAXEMKCCFGRFC2544TABLE_PUBLIC U_CHAR gv_maxEmkcCfgRfc2544TableSubIdListDataTypes[MAXEMKCCFGRFC2544TABLE_SUBID_LEN];

#endif /* #ifdef MAXEMKCCFGRFC2544TABLE_PUBLIC */

/* Vector contains all added instances of the table */
MAXEMKCCFGRFC2544TABLE_PUBLIC Vector gv_maxEmkcCfgRfc2544TableVector;

/* Structure to store entry information of maxEmkcCfgRfc2544Table */
typedef struct maxEmkcCfgRfc2544TableEntryType
{
	U_INT32 maxEmkcCfgRfc2544TableIndex;
	INT32 maxEmkcCfgRfc2544TableRowStatus;
} MaxEmkcCfgRfc2544TableEntry;

/* --------------------------- Function Prototypes ---------------------------*/

/* Functions defined in maxemkccfgrfc2544tablehdlr.c */
MAXEMKCCFGRFC2544TABLE_PUBLIC void InitMaxEmkcCfgRfc2544Table(void);

MAXEMKCCFGRFC2544TABLE_PUBLIC CHAR CreateAndAddNewMaxEmkcCfgRfc2544TableEntry(U_INT32 maxEmkcCfgRfc2544TableIndex, INT32 maxEmkcCfgRfc2544TableRowStatus);

MAXEMKCCFGRFC2544TABLE_PUBLIC CHAR CreateAndAddMaxEmkcCfgRfc2544TableEntry(OID *instance, INT32 instanceLen, U_INT32 maxEmkcCfgRfc2544TableIndex, INT32 maxEmkcCfgRfc2544TableRowStatus);

MAXEMKCCFGRFC2544TABLE_PUBLIC OID *CreateMaxEmkcCfgRfc2544TableInstance(INT32 *instanceLen, U_INT32 maxEmkcCfgRfc2544TableIndex);

MAXEMKCCFGRFC2544TABLE_PUBLIC CHAR MaxEmkcCfgRfc2544TableProcessRequests(INT32 pduVersion,U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex);

MAXEMKCCFGRFC2544TABLE_PUBLIC U_CHAR *MaxEmkcCfgRfc2544TableProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGRFC2544TABLE_PUBLIC U_CHAR *MaxEmkcCfgRfc2544TableProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGRFC2544TABLE_PUBLIC Vector *GetMaxEmkcCfgRfc2544TableInfo(INT32 startIdx, INT32 numOfRows, INT32 *flag);

MAXEMKCCFGRFC2544TABLE_PUBLIC CHAR UpdateMaxEmkcCfgRfc2544Table(U_CHAR command);

MAXEMKCCFGRFC2544TABLE_PUBLIC void FreeMaxEmkcCfgRfc2544TableEntryMemory(Entry *entryPtr);

MAXEMKCCFGRFC2544TABLE_PUBLIC void FreeMaxEmkcCfgRfc2544TableVector();

/* Functions defined in maxemkccfgrfc2544tableinstru.c */
MAXEMKCCFGRFC2544TABLE_PUBLIC U_CHAR *GetMaxEmkcCfgRfc2544TableIndex(MaxEmkcCfgRfc2544TableEntry *maxEmkcCfgRfc2544TableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGRFC2544TABLE_PUBLIC U_CHAR *SetMaxEmkcCfgRfc2544TableIndex(MaxEmkcCfgRfc2544TableEntry *maxEmkcCfgRfc2544TableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGRFC2544TABLE_PUBLIC U_CHAR *GetMaxEmkcCfgRfc2544TableRowStatus(MaxEmkcCfgRfc2544TableEntry *maxEmkcCfgRfc2544TableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGRFC2544TABLE_PUBLIC U_CHAR *SetMaxEmkcCfgRfc2544TableRowStatus(MaxEmkcCfgRfc2544TableEntry *maxEmkcCfgRfc2544TableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

/* Functions defined in maxemkccfgrfc2544tableftov.c */
#ifdef FILE_TO_VECTOR
MAXEMKCCFGRFC2544TABLE_PUBLIC CHAR ReadFromMaxEmkcCfgRfc2544TableFile();
MAXEMKCCFGRFC2544TABLE_PUBLIC CHAR WriteToMaxEmkcCfgRfc2544TableFile();
#endif

#endif  /* __MAXEMKCCFGRFC2544TABLE_H__ */


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgrfc2544table.h
 *****************************************************************************/
