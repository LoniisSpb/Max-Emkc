/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgstreamstable.h.
 *
 *  Purpose	: File contains data structures and function prototypes for 
 *			  the module maxemkccfgstreamstable. 
 *
 *			  "Description"
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:47 MSK 2018
 *
 *  Docs	: Yes. 
 ***************************************************************************/

#ifdef  __cplusplus
extern "C" {
#endif /* #ifdef  __cplusplus */

#ifndef  __MAXEMKCCFGSTREAMSTABLE_H__
#define  __MAXEMKCCFGSTREAMSTABLE_H__

/* User code starts here */
/* User code ends here */

/*
 * If the user wants to add their code, then the code has to be
 * added in between the above mentioned comments. Otherwise, on
 * regeneration, the user added code will be overwritten.
 * The above mentioned comments can be used at any place in this file.
 */


/* ---------------------------- Macro Declarations ---------------------------*/

#define	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGSTREAMINDEX	1
#define	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGSTREAMROWSTATUS	2
#define	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGSTREAMSTATE	3
#define	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGY1564STREAMPDULENGTH	4
#define	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGY1564STREAMCIR	5
#define	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGY1564STREAMEIR	6
#define	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGY1564STREAMNONCONFORMTOCIREIRRATE	7
#define	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGY1564STREAMFLRTRESHOLD	8
#define	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGY1564STREAMFTDTRESHOLD	9
#define	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGY1564STREAMFDVTRESHOLD	10
#define	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGY1564STREAMAVAIL	11
#define	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGY1564STREAMMEASNETWORKROW	12

#define MAXEMKCCFGSTREAMSTABLE_OID_LEN	11
#define MAXEMKCCFGSTREAMSTABLE_INDEX_LEN	1
#define MAXEMKCCFGSTREAMSTABLE_SUBID_LEN	12

#ifdef FILE_TO_VECTOR
#if defined (UNIX) || defined (VXWORKS) || defined (NUCLEUS_OS)
#define MAXEMKCCFGSTREAMSTABLE_FILE	"ftov/max-emkc/maxemkccfgstreamstable.txt"
#elif defined (WINDOWS)
#define MAXEMKCCFGSTREAMSTABLE_FILE	"ftov\\max-emkc\\maxemkccfgstreamstable.txt"
#endif
#endif


/* ------------------------- Variable Declarations --------------------------*/

#ifdef MAXEMKCCFGSTREAMSTABLE_PUBLIC

MAXEMKCCFGSTREAMSTABLE_PUBLIC U_CHAR gv_maxEmkcCfgStreamsTableIndexDataTypes[MAXEMKCCFGSTREAMSTABLE_INDEX_LEN] = {ASN_GAUGE};

/* The oid to register */
MAXEMKCCFGSTREAMSTABLE_PUBLIC OID gv_maxEmkcCfgStreamsTableOid[MAXEMKCCFGSTREAMSTABLE_OID_LEN] = {1,3,6,1,4,1,5597,1,2,2,802};

/* The subid list of the registerd oid */
MAXEMKCCFGSTREAMSTABLE_PUBLIC OID gv_maxEmkcCfgStreamsTableSubIdList[MAXEMKCCFGSTREAMSTABLE_SUBID_LEN] = {1,2,3,4,5,6,7,8,9,10,11,12};

/* Access type of each subid of the registered oid */
MAXEMKCCFGSTREAMSTABLE_PUBLIC U_CHAR gv_maxEmkcCfgStreamsTableSubIdListAccess[MAXEMKCCFGSTREAMSTABLE_SUBID_LEN] = {NOACCESS, RCREATE, RWRITE, RWRITE, RWRITE, RWRITE, RWRITE, RWRITE, RWRITE, RWRITE, RWRITE, RWRITE};

/* The data type of each subid of the registered oid */
MAXEMKCCFGSTREAMSTABLE_PUBLIC U_CHAR gv_maxEmkcCfgStreamsTableSubIdListDataTypes[MAXEMKCCFGSTREAMSTABLE_SUBID_LEN] = {ASN_GAUGE, ASN_INTEGER, ASN_INTEGER, ASN_GAUGE, ASN_OCTET_STR, ASN_OCTET_STR, ASN_OCTET_STR, ASN_OCTET_STR, ASN_GAUGE, ASN_GAUGE, ASN_GAUGE, ASN_GAUGE};

#else

#define MAXEMKCCFGSTREAMSTABLE_PUBLIC extern 

/* Variables to be stored in the agent tree */
MAXEMKCCFGSTREAMSTABLE_PUBLIC U_CHAR gv_maxEmkcCfgStreamsTableIndexDataTypes[MAXEMKCCFGSTREAMSTABLE_INDEX_LEN];

/* The oid to register */
MAXEMKCCFGSTREAMSTABLE_PUBLIC OID gv_maxEmkcCfgStreamsTableOid[MAXEMKCCFGSTREAMSTABLE_OID_LEN];

/* The subid list of the registerd oid */
MAXEMKCCFGSTREAMSTABLE_PUBLIC OID gv_maxEmkcCfgStreamsTableSubIdList[MAXEMKCCFGSTREAMSTABLE_SUBID_LEN];

/* Access type of each subid of the registered oid */
MAXEMKCCFGSTREAMSTABLE_PUBLIC U_CHAR gv_maxEmkcCfgStreamsTableSubIdListAccess[MAXEMKCCFGSTREAMSTABLE_SUBID_LEN];

/* The data type of each subid of the registered oid */
MAXEMKCCFGSTREAMSTABLE_PUBLIC U_CHAR gv_maxEmkcCfgStreamsTableSubIdListDataTypes[MAXEMKCCFGSTREAMSTABLE_SUBID_LEN];

#endif /* #ifdef MAXEMKCCFGSTREAMSTABLE_PUBLIC */

/* Vector contains all added instances of the table */
MAXEMKCCFGSTREAMSTABLE_PUBLIC Vector gv_maxEmkcCfgStreamsTableVector;

/* Structure to store entry information of maxEmkcCfgStreamsTable */
typedef struct maxEmkcCfgStreamsTableEntryType
{
	U_INT32 maxEmkcCfgStreamIndex;
	INT32 maxEmkcCfgStreamRowStatus;
	INT32 maxEmkcCfgStreamState;
	U_INT32 maxEmkcCfgY1564StreamPduLength;
	U_CHAR *maxEmkcCfgY1564StreamCir;
	U_CHAR *maxEmkcCfgY1564StreamEir;
	U_CHAR *maxEmkcCfgY1564StreamNonConformToCirEirRate;
	U_CHAR *maxEmkcCfgY1564StreamFlrTreshold;
	U_INT32 maxEmkcCfgY1564StreamFtdTreshold;
	U_INT32 maxEmkcCfgY1564StreamFdvTreshold;
	U_INT32 maxEmkcCfgY1564StreamAvail;
	U_INT32 maxEmkcCfgY1564StreamMeasNetworkRow;
} MaxEmkcCfgStreamsTableEntry;

/* --------------------------- Function Prototypes ---------------------------*/

/* Functions defined in maxemkccfgstreamstablehdlr.c */
MAXEMKCCFGSTREAMSTABLE_PUBLIC void InitMaxEmkcCfgStreamsTable(void);

MAXEMKCCFGSTREAMSTABLE_PUBLIC CHAR CreateAndAddNewMaxEmkcCfgStreamsTableEntry(U_INT32 maxEmkcCfgStreamIndex, INT32 maxEmkcCfgStreamRowStatus, INT32 maxEmkcCfgStreamState, U_INT32 maxEmkcCfgY1564StreamPduLength, U_CHAR *maxEmkcCfgY1564StreamCir, U_CHAR *maxEmkcCfgY1564StreamEir, U_CHAR *maxEmkcCfgY1564StreamNonConformToCirEirRate, U_CHAR *maxEmkcCfgY1564StreamFlrTreshold, U_INT32 maxEmkcCfgY1564StreamFtdTreshold, U_INT32 maxEmkcCfgY1564StreamFdvTreshold, U_INT32 maxEmkcCfgY1564StreamAvail, U_INT32 maxEmkcCfgY1564StreamMeasNetworkRow);

MAXEMKCCFGSTREAMSTABLE_PUBLIC CHAR CreateAndAddMaxEmkcCfgStreamsTableEntry(OID *instance, INT32 instanceLen, U_INT32 maxEmkcCfgStreamIndex, INT32 maxEmkcCfgStreamRowStatus, INT32 maxEmkcCfgStreamState, U_INT32 maxEmkcCfgY1564StreamPduLength, U_CHAR *maxEmkcCfgY1564StreamCir, U_CHAR *maxEmkcCfgY1564StreamEir, U_CHAR *maxEmkcCfgY1564StreamNonConformToCirEirRate, U_CHAR *maxEmkcCfgY1564StreamFlrTreshold, U_INT32 maxEmkcCfgY1564StreamFtdTreshold, U_INT32 maxEmkcCfgY1564StreamFdvTreshold, U_INT32 maxEmkcCfgY1564StreamAvail, U_INT32 maxEmkcCfgY1564StreamMeasNetworkRow);

MAXEMKCCFGSTREAMSTABLE_PUBLIC OID *CreateMaxEmkcCfgStreamsTableInstance(INT32 *instanceLen, U_INT32 maxEmkcCfgStreamIndex);

MAXEMKCCFGSTREAMSTABLE_PUBLIC CHAR MaxEmkcCfgStreamsTableProcessRequests(INT32 pduVersion,U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex);

MAXEMKCCFGSTREAMSTABLE_PUBLIC U_CHAR *MaxEmkcCfgStreamsTableProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSTREAMSTABLE_PUBLIC U_CHAR *MaxEmkcCfgStreamsTableProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSTREAMSTABLE_PUBLIC Vector *GetMaxEmkcCfgStreamsTableInfo(INT32 startIdx, INT32 numOfRows, INT32 *flag);

MAXEMKCCFGSTREAMSTABLE_PUBLIC CHAR UpdateMaxEmkcCfgStreamsTable(U_CHAR command);

MAXEMKCCFGSTREAMSTABLE_PUBLIC void FreeMaxEmkcCfgStreamsTableEntryMemory(Entry *entryPtr);

MAXEMKCCFGSTREAMSTABLE_PUBLIC void FreeMaxEmkcCfgStreamsTableVector();

/* Functions defined in maxemkccfgstreamstableinstru.c */
MAXEMKCCFGSTREAMSTABLE_PUBLIC U_CHAR *GetMaxEmkcCfgStreamIndex(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSTREAMSTABLE_PUBLIC U_CHAR *SetMaxEmkcCfgStreamIndex(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSTREAMSTABLE_PUBLIC U_CHAR *GetMaxEmkcCfgStreamRowStatus(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSTREAMSTABLE_PUBLIC U_CHAR *SetMaxEmkcCfgStreamRowStatus(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSTREAMSTABLE_PUBLIC U_CHAR *GetMaxEmkcCfgStreamState(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSTREAMSTABLE_PUBLIC U_CHAR *SetMaxEmkcCfgStreamState(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSTREAMSTABLE_PUBLIC U_CHAR *GetMaxEmkcCfgY1564StreamPduLength(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSTREAMSTABLE_PUBLIC U_CHAR *SetMaxEmkcCfgY1564StreamPduLength(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSTREAMSTABLE_PUBLIC U_CHAR *GetMaxEmkcCfgY1564StreamCir(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSTREAMSTABLE_PUBLIC U_CHAR *SetMaxEmkcCfgY1564StreamCir(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSTREAMSTABLE_PUBLIC U_CHAR *GetMaxEmkcCfgY1564StreamEir(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSTREAMSTABLE_PUBLIC U_CHAR *SetMaxEmkcCfgY1564StreamEir(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSTREAMSTABLE_PUBLIC U_CHAR *GetMaxEmkcCfgY1564StreamNonConformToCirEirRate(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSTREAMSTABLE_PUBLIC U_CHAR *SetMaxEmkcCfgY1564StreamNonConformToCirEirRate(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSTREAMSTABLE_PUBLIC U_CHAR *GetMaxEmkcCfgY1564StreamFlrTreshold(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSTREAMSTABLE_PUBLIC U_CHAR *SetMaxEmkcCfgY1564StreamFlrTreshold(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSTREAMSTABLE_PUBLIC U_CHAR *GetMaxEmkcCfgY1564StreamFtdTreshold(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSTREAMSTABLE_PUBLIC U_CHAR *SetMaxEmkcCfgY1564StreamFtdTreshold(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSTREAMSTABLE_PUBLIC U_CHAR *GetMaxEmkcCfgY1564StreamFdvTreshold(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSTREAMSTABLE_PUBLIC U_CHAR *SetMaxEmkcCfgY1564StreamFdvTreshold(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSTREAMSTABLE_PUBLIC U_CHAR *GetMaxEmkcCfgY1564StreamAvail(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSTREAMSTABLE_PUBLIC U_CHAR *SetMaxEmkcCfgY1564StreamAvail(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSTREAMSTABLE_PUBLIC U_CHAR *GetMaxEmkcCfgY1564StreamMeasNetworkRow(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGSTREAMSTABLE_PUBLIC U_CHAR *SetMaxEmkcCfgY1564StreamMeasNetworkRow(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

/* Functions defined in maxemkccfgstreamstableftov.c */
#ifdef FILE_TO_VECTOR
MAXEMKCCFGSTREAMSTABLE_PUBLIC CHAR ReadFromMaxEmkcCfgStreamsTableFile();
MAXEMKCCFGSTREAMSTABLE_PUBLIC CHAR WriteToMaxEmkcCfgStreamsTableFile();
#endif

#endif  /* __MAXEMKCCFGSTREAMSTABLE_H__ */


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgstreamstable.h
 *****************************************************************************/
