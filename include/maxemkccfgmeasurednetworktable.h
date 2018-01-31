/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgmeasurednetworktable.h.
 *
 *  Purpose	: File contains data structures and function prototypes for 
 *			  the module maxemkccfgmeasurednetworktable. 
 *
 *			  "Description"
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:50 MSK 2018
 *
 *  Docs	: Yes. 
 ***************************************************************************/

#ifdef  __cplusplus
extern "C" {
#endif /* #ifdef  __cplusplus */

#ifndef  __MAXEMKCCFGMEASUREDNETWORKTABLE_H__
#define  __MAXEMKCCFGMEASUREDNETWORKTABLE_H__

/* User code starts here */
/* User code ends here */

/*
 * If the user wants to add their code, then the code has to be
 * added in between the above mentioned comments. Otherwise, on
 * regeneration, the user added code will be overwritten.
 * The above mentioned comments can be used at any place in this file.
 */


/* ---------------------------- Macro Declarations ---------------------------*/

#define	MAXEMKCCFGMEASUREDNETWORKTABLE_MAXEMKCCFGMEASNETTABLEINDEX	1
#define	MAXEMKCCFGMEASUREDNETWORKTABLE_MAXEMKCCFGMEASNETTABLEROWSTATUS	2
#define	MAXEMKCCFGMEASUREDNETWORKTABLE_MAXEMKCCFGMEASNETADDRESSINGTYPE	3
#define	MAXEMKCCFGMEASUREDNETWORKTABLE_MAXEMKCCFGMEASNETDESTMAC	4
#define	MAXEMKCCFGMEASUREDNETWORKTABLE_MAXEMKCCFGMEASNETDESTIP	5
#define	MAXEMKCCFGMEASUREDNETWORKTABLE_MAXEMKCCFGMEASNETSOURCEPORT	6
#define	MAXEMKCCFGMEASUREDNETWORKTABLE_MAXEMKCCFGMEASNETDESTPORT	7
#define	MAXEMKCCFGMEASUREDNETWORKTABLE_MAXEMKCCFGMEASNETTOSDSCP	8

#define MAXEMKCCFGMEASUREDNETWORKTABLE_OID_LEN	11
#define MAXEMKCCFGMEASUREDNETWORKTABLE_INDEX_LEN	1
#define MAXEMKCCFGMEASUREDNETWORKTABLE_SUBID_LEN	8

#ifdef FILE_TO_VECTOR
#if defined (UNIX) || defined (VXWORKS) || defined (NUCLEUS_OS)
#define MAXEMKCCFGMEASUREDNETWORKTABLE_FILE	"ftov/max-emkc/maxemkccfgmeasurednetworktable.txt"
#elif defined (WINDOWS)
#define MAXEMKCCFGMEASUREDNETWORKTABLE_FILE	"ftov\\max-emkc\\maxemkccfgmeasurednetworktable.txt"
#endif
#endif


/* ------------------------- Variable Declarations --------------------------*/

#ifdef MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC

MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC U_CHAR gv_maxEmkcCfgMeasuredNetworkTableIndexDataTypes[MAXEMKCCFGMEASUREDNETWORKTABLE_INDEX_LEN] = {ASN_GAUGE};

/* The oid to register */
MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC OID gv_maxEmkcCfgMeasuredNetworkTableOid[MAXEMKCCFGMEASUREDNETWORKTABLE_OID_LEN] = {1,3,6,1,4,1,5597,1,2,2,803};

/* The subid list of the registerd oid */
MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC OID gv_maxEmkcCfgMeasuredNetworkTableSubIdList[MAXEMKCCFGMEASUREDNETWORKTABLE_SUBID_LEN] = {1,2,3,4,5,6,7,8};

/* Access type of each subid of the registered oid */
MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC U_CHAR gv_maxEmkcCfgMeasuredNetworkTableSubIdListAccess[MAXEMKCCFGMEASUREDNETWORKTABLE_SUBID_LEN] = {NOACCESS, RCREATE, RWRITE, RWRITE, RWRITE, RWRITE, RWRITE, RWRITE};

/* The data type of each subid of the registered oid */
MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC U_CHAR gv_maxEmkcCfgMeasuredNetworkTableSubIdListDataTypes[MAXEMKCCFGMEASUREDNETWORKTABLE_SUBID_LEN] = {ASN_GAUGE, ASN_INTEGER, ASN_INTEGER, ASN_OCTET_STR, ASN_IPADDRESS, ASN_GAUGE, ASN_GAUGE, ASN_GAUGE};

#else

#define MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC extern 

/* Variables to be stored in the agent tree */
MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC U_CHAR gv_maxEmkcCfgMeasuredNetworkTableIndexDataTypes[MAXEMKCCFGMEASUREDNETWORKTABLE_INDEX_LEN];

/* The oid to register */
MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC OID gv_maxEmkcCfgMeasuredNetworkTableOid[MAXEMKCCFGMEASUREDNETWORKTABLE_OID_LEN];

/* The subid list of the registerd oid */
MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC OID gv_maxEmkcCfgMeasuredNetworkTableSubIdList[MAXEMKCCFGMEASUREDNETWORKTABLE_SUBID_LEN];

/* Access type of each subid of the registered oid */
MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC U_CHAR gv_maxEmkcCfgMeasuredNetworkTableSubIdListAccess[MAXEMKCCFGMEASUREDNETWORKTABLE_SUBID_LEN];

/* The data type of each subid of the registered oid */
MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC U_CHAR gv_maxEmkcCfgMeasuredNetworkTableSubIdListDataTypes[MAXEMKCCFGMEASUREDNETWORKTABLE_SUBID_LEN];

#endif /* #ifdef MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC */

/* Vector contains all added instances of the table */
MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC Vector gv_maxEmkcCfgMeasuredNetworkTableVector;

/* Structure to store entry information of maxEmkcCfgMeasuredNetworkTable */
typedef struct maxEmkcCfgMeasuredNetworkTableEntryType
{
	U_INT32 maxEmkcCfgMeasNetTableIndex;
	INT32 maxEmkcCfgMeasNetTableRowStatus;
	INT32 maxEmkcCfgMeasNetAddressingType;
	U_CHAR *maxEmkcCfgMeasNetDestMac;
	INT32 maxEmkcCfgMeasNetDestMacLen;
	U_CHAR *maxEmkcCfgMeasNetDestIp;
	INT32 maxEmkcCfgMeasNetDestIpLen;
	U_INT32 maxEmkcCfgMeasNetSourcePort;
	U_INT32 maxEmkcCfgMeasNetDestPort;
	U_INT32 maxEmkcCfgMeasNetTosDscp;
} MaxEmkcCfgMeasuredNetworkTableEntry;

/* --------------------------- Function Prototypes ---------------------------*/

/* Functions defined in maxemkccfgmeasurednetworktablehdlr.c */
MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC void InitMaxEmkcCfgMeasuredNetworkTable(void);

MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC CHAR CreateAndAddNewMaxEmkcCfgMeasuredNetworkTableEntry(U_INT32 maxEmkcCfgMeasNetTableIndex, INT32 maxEmkcCfgMeasNetTableRowStatus, INT32 maxEmkcCfgMeasNetAddressingType, U_CHAR *maxEmkcCfgMeasNetDestMac, INT32 maxEmkcCfgMeasNetDestMacLen , U_CHAR *maxEmkcCfgMeasNetDestIp, INT32 maxEmkcCfgMeasNetDestIpLen , U_INT32 maxEmkcCfgMeasNetSourcePort, U_INT32 maxEmkcCfgMeasNetDestPort, U_INT32 maxEmkcCfgMeasNetTosDscp);

MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC CHAR CreateAndAddMaxEmkcCfgMeasuredNetworkTableEntry(OID *instance, INT32 instanceLen, U_INT32 maxEmkcCfgMeasNetTableIndex, INT32 maxEmkcCfgMeasNetTableRowStatus, INT32 maxEmkcCfgMeasNetAddressingType, U_CHAR *maxEmkcCfgMeasNetDestMac, INT32 maxEmkcCfgMeasNetDestMacLen , U_CHAR *maxEmkcCfgMeasNetDestIp, INT32 maxEmkcCfgMeasNetDestIpLen , U_INT32 maxEmkcCfgMeasNetSourcePort, U_INT32 maxEmkcCfgMeasNetDestPort, U_INT32 maxEmkcCfgMeasNetTosDscp);

MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC OID *CreateMaxEmkcCfgMeasuredNetworkTableInstance(INT32 *instanceLen, U_INT32 maxEmkcCfgMeasNetTableIndex);

MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC CHAR MaxEmkcCfgMeasuredNetworkTableProcessRequests(INT32 pduVersion,U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex);

MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC U_CHAR *MaxEmkcCfgMeasuredNetworkTableProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC U_CHAR *MaxEmkcCfgMeasuredNetworkTableProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC Vector *GetMaxEmkcCfgMeasuredNetworkTableInfo(INT32 startIdx, INT32 numOfRows, INT32 *flag);

MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC CHAR UpdateMaxEmkcCfgMeasuredNetworkTable(U_CHAR command);

MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC void FreeMaxEmkcCfgMeasuredNetworkTableEntryMemory(Entry *entryPtr);

MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC void FreeMaxEmkcCfgMeasuredNetworkTableVector();

/* Functions defined in maxemkccfgmeasurednetworktableinstru.c */
MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC U_CHAR *GetMaxEmkcCfgMeasNetTableIndex(MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC U_CHAR *SetMaxEmkcCfgMeasNetTableIndex(MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC U_CHAR *GetMaxEmkcCfgMeasNetTableRowStatus(MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC U_CHAR *SetMaxEmkcCfgMeasNetTableRowStatus(MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC U_CHAR *GetMaxEmkcCfgMeasNetAddressingType(MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC U_CHAR *SetMaxEmkcCfgMeasNetAddressingType(MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC U_CHAR *GetMaxEmkcCfgMeasNetDestMac(MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC U_CHAR *SetMaxEmkcCfgMeasNetDestMac(MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC U_CHAR *GetMaxEmkcCfgMeasNetDestIp(MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC U_CHAR *SetMaxEmkcCfgMeasNetDestIp(MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC U_CHAR *GetMaxEmkcCfgMeasNetSourcePort(MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC U_CHAR *SetMaxEmkcCfgMeasNetSourcePort(MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC U_CHAR *GetMaxEmkcCfgMeasNetDestPort(MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC U_CHAR *SetMaxEmkcCfgMeasNetDestPort(MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC U_CHAR *GetMaxEmkcCfgMeasNetTosDscp(MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC U_CHAR *SetMaxEmkcCfgMeasNetTosDscp(MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

/* Functions defined in maxemkccfgmeasurednetworktableftov.c */
#ifdef FILE_TO_VECTOR
MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC CHAR ReadFromMaxEmkcCfgMeasuredNetworkTableFile();
MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC CHAR WriteToMaxEmkcCfgMeasuredNetworkTableFile();
#endif

#endif  /* __MAXEMKCCFGMEASUREDNETWORKTABLE_H__ */


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgmeasurednetworktable.h
 *****************************************************************************/
