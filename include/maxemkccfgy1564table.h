/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgy1564table.h.
 *
 *  Purpose	: File contains data structures and function prototypes for 
 *			  the module maxemkccfgy1564table. 
 *
 *			  "Description"
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:38 MSK 2018
 *
 *  Docs	: Yes. 
 ***************************************************************************/

#ifdef  __cplusplus
extern "C" {
#endif /* #ifdef  __cplusplus */

#ifndef  __MAXEMKCCFGY1564TABLE_H__
#define  __MAXEMKCCFGY1564TABLE_H__

/* User code starts here */
/* User code ends here */

/*
 * If the user wants to add their code, then the code has to be
 * added in between the above mentioned comments. Otherwise, on
 * regeneration, the user added code will be overwritten.
 * The above mentioned comments can be used at any place in this file.
 */


/* ---------------------------- Macro Declarations ---------------------------*/

#define	MAXEMKCCFGY1564TABLE_MAXEMKCCFGY1564TABLEINDEX	1
#define	MAXEMKCCFGY1564TABLE_MAXEMKCCFGY1564TABLEROWSTATUS	2
#define	MAXEMKCCFGY1564TABLE_MAXEMKCCFGY1564OPTIONS	3
#define	MAXEMKCCFGY1564TABLE_MAXEMKCCFGY1564THROUGHPUTTESTDURATION	4
#define	MAXEMKCCFGY1564TABLE_MAXEMKCCFGY1564TESTCONFIGSTEPDURATION	5
#define	MAXEMKCCFGY1564TABLE_MAXEMKCCFGY1564LEARNINGTIME	6
#define	MAXEMKCCFGY1564TABLE_MAXEMKCCFGY1564STREAM1TABLEROW	7
#define	MAXEMKCCFGY1564TABLE_MAXEMKCCFGY1564STREAM2TABLEROW	8
#define	MAXEMKCCFGY1564TABLE_MAXEMKCCFGY1564STREAM3TABLEROW	9
#define	MAXEMKCCFGY1564TABLE_MAXEMKCCFGY1564STREAM4TABLEROW	10

#define MAXEMKCCFGY1564TABLE_OID_LEN	12
#define MAXEMKCCFGY1564TABLE_INDEX_LEN	1
#define MAXEMKCCFGY1564TABLE_SUBID_LEN	10

#ifdef FILE_TO_VECTOR
#if defined (UNIX) || defined (VXWORKS) || defined (NUCLEUS_OS)
#define MAXEMKCCFGY1564TABLE_FILE	"ftov/max-emkc/maxemkccfgy1564table.txt"
#elif defined (WINDOWS)
#define MAXEMKCCFGY1564TABLE_FILE	"ftov\\max-emkc\\maxemkccfgy1564table.txt"
#endif
#endif


/* ------------------------- Variable Declarations --------------------------*/

#ifdef MAXEMKCCFGY1564TABLE_PUBLIC

MAXEMKCCFGY1564TABLE_PUBLIC U_CHAR gv_maxEmkcCfgY1564TableIndexDataTypes[MAXEMKCCFGY1564TABLE_INDEX_LEN] = {ASN_GAUGE};

/* The oid to register */
MAXEMKCCFGY1564TABLE_PUBLIC OID gv_maxEmkcCfgY1564TableOid[MAXEMKCCFGY1564TABLE_OID_LEN] = {1,3,6,1,4,1,5597,1,2,2,7,2};

/* The subid list of the registerd oid */
MAXEMKCCFGY1564TABLE_PUBLIC OID gv_maxEmkcCfgY1564TableSubIdList[MAXEMKCCFGY1564TABLE_SUBID_LEN] = {1,2,3,4,5,6,7,8,9,10};

/* Access type of each subid of the registered oid */
MAXEMKCCFGY1564TABLE_PUBLIC U_CHAR gv_maxEmkcCfgY1564TableSubIdListAccess[MAXEMKCCFGY1564TABLE_SUBID_LEN] = {NOACCESS, RCREATE, RWRITE, RWRITE, RWRITE, RWRITE, RWRITE, RWRITE, RWRITE, RWRITE};

/* The data type of each subid of the registered oid */
MAXEMKCCFGY1564TABLE_PUBLIC U_CHAR gv_maxEmkcCfgY1564TableSubIdListDataTypes[MAXEMKCCFGY1564TABLE_SUBID_LEN] = {ASN_GAUGE, ASN_INTEGER, ASN_OCTET_STR, ASN_GAUGE, ASN_GAUGE, ASN_GAUGE, ASN_GAUGE, ASN_GAUGE, ASN_GAUGE, ASN_GAUGE};

#else

#define MAXEMKCCFGY1564TABLE_PUBLIC extern 

/* Variables to be stored in the agent tree */
MAXEMKCCFGY1564TABLE_PUBLIC U_CHAR gv_maxEmkcCfgY1564TableIndexDataTypes[MAXEMKCCFGY1564TABLE_INDEX_LEN];

/* The oid to register */
MAXEMKCCFGY1564TABLE_PUBLIC OID gv_maxEmkcCfgY1564TableOid[MAXEMKCCFGY1564TABLE_OID_LEN];

/* The subid list of the registerd oid */
MAXEMKCCFGY1564TABLE_PUBLIC OID gv_maxEmkcCfgY1564TableSubIdList[MAXEMKCCFGY1564TABLE_SUBID_LEN];

/* Access type of each subid of the registered oid */
MAXEMKCCFGY1564TABLE_PUBLIC U_CHAR gv_maxEmkcCfgY1564TableSubIdListAccess[MAXEMKCCFGY1564TABLE_SUBID_LEN];

/* The data type of each subid of the registered oid */
MAXEMKCCFGY1564TABLE_PUBLIC U_CHAR gv_maxEmkcCfgY1564TableSubIdListDataTypes[MAXEMKCCFGY1564TABLE_SUBID_LEN];

#endif /* #ifdef MAXEMKCCFGY1564TABLE_PUBLIC */

/* Vector contains all added instances of the table */
MAXEMKCCFGY1564TABLE_PUBLIC Vector gv_maxEmkcCfgY1564TableVector;

/* Structure to store entry information of maxEmkcCfgY1564Table */
typedef struct maxEmkcCfgY1564TableEntryType
{
	U_INT32 maxEmkcCfgY1564TableIndex;
	INT32 maxEmkcCfgY1564TableRowStatus;
	U_CHAR *maxEmkcCfgY1564Options;
	INT32 maxEmkcCfgY1564OptionsLen;
	U_INT32 maxEmkcCfgY1564ThroughputTestDuration;
	U_INT32 maxEmkcCfgY1564TestConfigStepDuration;
	U_INT32 maxEmkcCfgY1564LearningTime;
	U_INT32 maxEmkcCfgY1564Stream1TableRow;
	U_INT32 maxEmkcCfgY1564Stream2TableRow;
	U_INT32 maxEmkcCfgY1564Stream3TableRow;
	U_INT32 maxEmkcCfgY1564Stream4TableRow;
} MaxEmkcCfgY1564TableEntry;

/* --------------------------- Function Prototypes ---------------------------*/

/* Functions defined in maxemkccfgy1564tablehdlr.c */
MAXEMKCCFGY1564TABLE_PUBLIC void InitMaxEmkcCfgY1564Table(void);

MAXEMKCCFGY1564TABLE_PUBLIC CHAR CreateAndAddNewMaxEmkcCfgY1564TableEntry(U_INT32 maxEmkcCfgY1564TableIndex, INT32 maxEmkcCfgY1564TableRowStatus, U_CHAR *maxEmkcCfgY1564Options, INT32 maxEmkcCfgY1564OptionsLen , U_INT32 maxEmkcCfgY1564ThroughputTestDuration, U_INT32 maxEmkcCfgY1564TestConfigStepDuration, U_INT32 maxEmkcCfgY1564LearningTime, U_INT32 maxEmkcCfgY1564Stream1TableRow, U_INT32 maxEmkcCfgY1564Stream2TableRow, U_INT32 maxEmkcCfgY1564Stream3TableRow, U_INT32 maxEmkcCfgY1564Stream4TableRow);

MAXEMKCCFGY1564TABLE_PUBLIC CHAR CreateAndAddMaxEmkcCfgY1564TableEntry(OID *instance, INT32 instanceLen, U_INT32 maxEmkcCfgY1564TableIndex, INT32 maxEmkcCfgY1564TableRowStatus, U_CHAR *maxEmkcCfgY1564Options, INT32 maxEmkcCfgY1564OptionsLen , U_INT32 maxEmkcCfgY1564ThroughputTestDuration, U_INT32 maxEmkcCfgY1564TestConfigStepDuration, U_INT32 maxEmkcCfgY1564LearningTime, U_INT32 maxEmkcCfgY1564Stream1TableRow, U_INT32 maxEmkcCfgY1564Stream2TableRow, U_INT32 maxEmkcCfgY1564Stream3TableRow, U_INT32 maxEmkcCfgY1564Stream4TableRow);

MAXEMKCCFGY1564TABLE_PUBLIC OID *CreateMaxEmkcCfgY1564TableInstance(INT32 *instanceLen, U_INT32 maxEmkcCfgY1564TableIndex);

MAXEMKCCFGY1564TABLE_PUBLIC CHAR MaxEmkcCfgY1564TableProcessRequests(INT32 pduVersion,U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex);

MAXEMKCCFGY1564TABLE_PUBLIC U_CHAR *MaxEmkcCfgY1564TableProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGY1564TABLE_PUBLIC U_CHAR *MaxEmkcCfgY1564TableProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGY1564TABLE_PUBLIC Vector *GetMaxEmkcCfgY1564TableInfo(INT32 startIdx, INT32 numOfRows, INT32 *flag);

MAXEMKCCFGY1564TABLE_PUBLIC CHAR UpdateMaxEmkcCfgY1564Table(U_CHAR command);

MAXEMKCCFGY1564TABLE_PUBLIC void FreeMaxEmkcCfgY1564TableEntryMemory(Entry *entryPtr);

MAXEMKCCFGY1564TABLE_PUBLIC void FreeMaxEmkcCfgY1564TableVector();

/* Functions defined in maxemkccfgy1564tableinstru.c */
MAXEMKCCFGY1564TABLE_PUBLIC U_CHAR *GetMaxEmkcCfgY1564TableIndex(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGY1564TABLE_PUBLIC U_CHAR *SetMaxEmkcCfgY1564TableIndex(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGY1564TABLE_PUBLIC U_CHAR *GetMaxEmkcCfgY1564TableRowStatus(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGY1564TABLE_PUBLIC U_CHAR *SetMaxEmkcCfgY1564TableRowStatus(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGY1564TABLE_PUBLIC U_CHAR *GetMaxEmkcCfgY1564Options(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGY1564TABLE_PUBLIC U_CHAR *SetMaxEmkcCfgY1564Options(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGY1564TABLE_PUBLIC U_CHAR *GetMaxEmkcCfgY1564ThroughputTestDuration(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGY1564TABLE_PUBLIC U_CHAR *SetMaxEmkcCfgY1564ThroughputTestDuration(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGY1564TABLE_PUBLIC U_CHAR *GetMaxEmkcCfgY1564TestConfigStepDuration(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGY1564TABLE_PUBLIC U_CHAR *SetMaxEmkcCfgY1564TestConfigStepDuration(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGY1564TABLE_PUBLIC U_CHAR *GetMaxEmkcCfgY1564LearningTime(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGY1564TABLE_PUBLIC U_CHAR *SetMaxEmkcCfgY1564LearningTime(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGY1564TABLE_PUBLIC U_CHAR *GetMaxEmkcCfgY1564Stream1TableRow(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGY1564TABLE_PUBLIC U_CHAR *SetMaxEmkcCfgY1564Stream1TableRow(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGY1564TABLE_PUBLIC U_CHAR *GetMaxEmkcCfgY1564Stream2TableRow(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGY1564TABLE_PUBLIC U_CHAR *SetMaxEmkcCfgY1564Stream2TableRow(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGY1564TABLE_PUBLIC U_CHAR *GetMaxEmkcCfgY1564Stream3TableRow(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGY1564TABLE_PUBLIC U_CHAR *SetMaxEmkcCfgY1564Stream3TableRow(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGY1564TABLE_PUBLIC U_CHAR *GetMaxEmkcCfgY1564Stream4TableRow(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGY1564TABLE_PUBLIC U_CHAR *SetMaxEmkcCfgY1564Stream4TableRow(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

/* Functions defined in maxemkccfgy1564tableftov.c */
#ifdef FILE_TO_VECTOR
MAXEMKCCFGY1564TABLE_PUBLIC CHAR ReadFromMaxEmkcCfgY1564TableFile();
MAXEMKCCFGY1564TABLE_PUBLIC CHAR WriteToMaxEmkcCfgY1564TableFile();
#endif

#endif  /* __MAXEMKCCFGY1564TABLE_H__ */


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgy1564table.h
 *****************************************************************************/
