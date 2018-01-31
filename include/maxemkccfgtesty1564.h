/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgtesty1564.h.
 *
 *  Purpose	: File contains data structures and function prototypes for 
 *			  the module maxemkccfgtesty1564.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:39 MSK 2018
 *
 *  Docs	: Yes. 
 ***************************************************************************/

#ifdef  __cplusplus
extern "C" {
#endif /* #ifdef  __cplusplus */

#ifndef  __MAXEMKCCFGTESTY1564_H__
#define  __MAXEMKCCFGTESTY1564_H__

/* User code starts here */
/* User code ends here */

/*
 * If the user wants to add their code, then the code has to be
 * added in between the above mentioned comments. Otherwise, on
 * regeneration, the user added code will be overwritten.
 * The above mentioned comments can be used at any place in this file.
 */


/* ---------------------------- Macro Declarations ---------------------------*/

#define	MAXEMKCCFGTESTY1564_MAXEMRC1CFGY1564ENTRYROW	1

#define MAXEMKCCFGTESTY1564_OID_LEN	12
#define MAXEMKCCFGTESTY1564_GROUP1_SUBID_LEN	1

#ifdef FILE_TO_VECTOR
#if defined (UNIX) || defined (VXWORKS) || defined (NUCLEUS_OS)
#define MAXEMKCCFGTESTY1564_FILE	"ftov/max-emkc/maxemkccfgtesty1564.txt"
#elif defined (WINDOWS)
#define MAXEMKCCFGTESTY1564_FILE	"ftov\\max-emkc\\maxemkccfgtesty1564.txt"
#endif
#endif


/* ------------------------- Variable Declarations --------------------------*/

#ifdef MAXEMKCCFGTESTY1564_PUBLIC


/* The oid to register */
MAXEMKCCFGTESTY1564_PUBLIC OID gv_maxEmkcCfgTestY1564Group1Oid[MAXEMKCCFGTESTY1564_OID_LEN] = {1,3,6,1,4,1,5597,1,2,2,7,1};

/* The subid list of the registerd oid */
MAXEMKCCFGTESTY1564_PUBLIC OID gv_maxEmkcCfgTestY1564Group1SubIdList[MAXEMKCCFGTESTY1564_GROUP1_SUBID_LEN] = {1};


/* Access type of each subid of the registered oid */
MAXEMKCCFGTESTY1564_PUBLIC U_CHAR gv_maxEmkcCfgTestY1564Group1SubIdListAccess[MAXEMKCCFGTESTY1564_GROUP1_SUBID_LEN] = {RWRITE};


/* The data type of each subid of the registered oid */
MAXEMKCCFGTESTY1564_PUBLIC U_CHAR gv_maxEmkcCfgTestY1564Group1SubIdListDataTypes[MAXEMKCCFGTESTY1564_GROUP1_SUBID_LEN] = {ASN_GAUGE};


#else

#define MAXEMKCCFGTESTY1564_PUBLIC extern 

/* The oid to register */
MAXEMKCCFGTESTY1564_PUBLIC OID gv_maxEmkcCfgTestY1564Group1Oid[MAXEMKCCFGTESTY1564_OID_LEN];

/* The subid list of the registerd oid */
MAXEMKCCFGTESTY1564_PUBLIC OID gv_maxEmkcCfgTestY1564Group1SubIdList[MAXEMKCCFGTESTY1564_GROUP1_SUBID_LEN];

/* Access type of each subid of the registered oid */
MAXEMKCCFGTESTY1564_PUBLIC U_CHAR gv_maxEmkcCfgTestY1564Group1SubIdListAccess[MAXEMKCCFGTESTY1564_GROUP1_SUBID_LEN];

/* The data type of each subid of the registered oid */
MAXEMKCCFGTESTY1564_PUBLIC U_CHAR gv_maxEmkcCfgTestY1564Group1SubIdListDataTypes[MAXEMKCCFGTESTY1564_GROUP1_SUBID_LEN];

#endif /* #ifdef MAXEMKCCFGTESTY1564_PUBLIC */

MAXEMKCCFGTESTY1564_PUBLIC U_INT32 gv_maxEmrc1CfgY1564EntryRow;

/* --------------------------- Function Prototypes ---------------------------*/

/* Functions defined in maxemkccfgtesty1564hdlr.c */
MAXEMKCCFGTESTY1564_PUBLIC void InitMaxEmkcCfgTestY1564(void);

MAXEMKCCFGTESTY1564_PUBLIC CHAR MaxEmkcCfgTestY1564ProcessRequests(INT32 pduVersion,U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex);

MAXEMKCCFGTESTY1564_PUBLIC U_CHAR *MaxEmkcCfgTestY1564ProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGTESTY1564_PUBLIC U_CHAR *MaxEmkcCfgTestY1564ProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGTESTY1564_PUBLIC CHAR UpdateMaxEmkcCfgTestY1564(U_CHAR command);

/* Functions defined in maxemkccfgtesty1564instru.c */
MAXEMKCCFGTESTY1564_PUBLIC U_CHAR *GetMaxEmrc1CfgY1564EntryRow(INT32 *varValLen, U_CHAR *status);

MAXEMKCCFGTESTY1564_PUBLIC U_CHAR *SetMaxEmrc1CfgY1564EntryRow(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

/* Functions defined in maxemkccfgtesty1564ftov.c */
#ifdef FILE_TO_VECTOR
MAXEMKCCFGTESTY1564_PUBLIC CHAR ReadFromMaxEmkcCfgTestY1564File();
MAXEMKCCFGTESTY1564_PUBLIC CHAR WriteToMaxEmkcCfgTestY1564File();
#endif

#endif  /* __MAXEMKCCFGTESTY1564_H__ */


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgtesty1564.h
 *****************************************************************************/
