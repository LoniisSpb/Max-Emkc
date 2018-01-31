/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File		: maxemkccfgmeasurednetworktablehdlr.c.
 *
 *  Purpose		: To handle the requests from the manager for the 
 * 				  module maxemkccfgmeasurednetworktable. 
 *
 *				  "Description" 
 *
 *				  "Row Description"
 *
 *  Author		: WebNMS Agent Toolkit C Edition 6
 *
 *  Date		: Fri Jan 26 16:40:48 MSK 2018
 *
 *  See Also	: maxemkccfgmeasurednetworktableftov.c,
 *				  maxemkccfgmeasurednetworktableinstru.c,
 *				  maxemkccfgmeasurednetworktable.h,
 *				  maxemkctraps.c.
 *
 *  Docs		: Yes. 
 ***************************************************************************/

#ifdef  __cplusplus
extern "C" {
#endif /* #ifdef  __cplusplus */

/* User code starts here */
/* User code ends here */

/*
 * If the user wants to add their code, then the code has to be
 * added in between the above mentioned comments. Otherwise, on
 * regeneration, the user added code will be overwritten.
 * The above mentioned comments can be used at any place in this file.
 */

#include "config.h"
#include "snmpincludes.h"
#define MAXEMKCCFGMEASUREDNETWORKTABLE_PUBLIC
#include "maxemkccfgmeasurednetworktable.h" 

/* This tree cell is used to register with agent.*/
TreeCell gv_maxEmkcCfgMeasuredNetworkTableCell=
	{
		"MAX-EMKC:MaxEmkcCfgMeasuredNetworkTable",
		SNMP_VERSION_2c, gv_maxEmkcCfgMeasuredNetworkTableOid,
		MAXEMKCCFGMEASUREDNETWORKTABLE_OID_LEN, TABLE,
		gv_maxEmkcCfgMeasuredNetworkTableSubIdList,
		MAXEMKCCFGMEASUREDNETWORKTABLE_SUBID_LEN,
		gv_maxEmkcCfgMeasuredNetworkTableSubIdListAccess,
		gv_maxEmkcCfgMeasuredNetworkTableSubIdListDataTypes,
		MAXEMKCCFGMEASUREDNETWORKTABLE_MAXEMKCCFGMEASNETTABLEROWSTATUS,
		MaxEmkcCfgMeasuredNetworkTableProcessRequests,
		MaxEmkcCfgMeasuredNetworkTableProcessReadReq,
		MaxEmkcCfgMeasuredNetworkTableProcessWriteReq,
		UpdateMaxEmkcCfgMeasuredNetworkTable,
		NULL, NULL
	};

/*****************************************************************************
 *	Function Name	: InitMaxEmkcCfgMeasuredNetworkTable()
 *
 *	Args			: Nothing.
 *
 *	Returns			: Nothing.
 *
 *	Task			: It will register the treeCell with agent and initialize
 * 					  all data structures related to the module
 * 					  "maxEmkcCfgMeasuredNetworkTable".
 *
 *	See Also		: CreateAndAddNewMaxEmkcCfgMeasuredNetworkTableEntry().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
void InitMaxEmkcCfgMeasuredNetworkTable(void)
{

	DEBUGMSG1("\n\t@@@@@ Inside InitMaxEmkcCfgMeasuredNetworkTable() @@@@@\n");

	/* Register the oid as a listener to the agent. */
	if (RegisterOID(&gv_maxEmkcCfgMeasuredNetworkTableCell) == FAILURE)
	{
		DEBUGMSG1("Unable to register for the module maxEmkcCfgMeasuredNetworkTable\n");
		return;
	}

	/* Initialize the vector */
	InitVector(&gv_maxEmkcCfgMeasuredNetworkTableVector, &gfptr_sortFuncPtr);

#ifdef FILE_TO_VECTOR
	/* Read  all the entries of "maxEmkcCfgMeasuredNetworkTable" from the file */
	ReadFromMaxEmkcCfgMeasuredNetworkTableFile();
#endif

	if (gv_maxEmkcCfgMeasuredNetworkTableVector.size == 0)
	{
		/* Add the created instance to the vector gv_maxEmkcCfgMeasuredNetworkTableVector. */
		CreateAndAddNewMaxEmkcCfgMeasuredNetworkTableEntry(1, 1, 3, 
						(U_CHAR *)"",0, 
						(U_CHAR *)"255.255.255.0",13, 0, 0, 128);

#ifdef FILE_TO_VECTOR
	/* Write all the entries of "maxEmkcCfgMeasuredNetworkTable" into the file */
	WriteToMaxEmkcCfgMeasuredNetworkTableFile();
#endif
	}
}

/*****************************************************************************
 *	Function Name	: CreateAndAddNewMaxEmkcCfgMeasuredNetworkTableEntry()
 *
 *	Args			: 1. Table column maxEmkcCfgMeasNetTableIndex (IN).
 *					  2. Table column maxEmkcCfgMeasNetTableRowStatus (IN).
 *					  3. Table column maxEmkcCfgMeasNetAddressingType (IN).
 *					  4. Table column maxEmkcCfgMeasNetDestMac (IN).
 *					  5. Table column maxEmkcCfgMeasNetDestIp (IN).
 *					  6. Table column maxEmkcCfgMeasNetSourcePort (IN).
 *					  7. Table column maxEmkcCfgMeasNetDestPort (IN).
 *					  8. Table column maxEmkcCfgMeasNetTosDscp (IN).
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will take all columns value as input and create an
 *					  instance then add it to the vector.
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR CreateAndAddNewMaxEmkcCfgMeasuredNetworkTableEntry(U_INT32 maxEmkcCfgMeasNetTableIndex, INT32 maxEmkcCfgMeasNetTableRowStatus, INT32 maxEmkcCfgMeasNetAddressingType, U_CHAR *maxEmkcCfgMeasNetDestMac, INT32 maxEmkcCfgMeasNetDestMacLen , U_CHAR *maxEmkcCfgMeasNetDestIp, INT32 maxEmkcCfgMeasNetDestIpLen , U_INT32 maxEmkcCfgMeasNetSourcePort, U_INT32 maxEmkcCfgMeasNetDestPort, U_INT32 maxEmkcCfgMeasNetTosDscp)
{
	OID		*inst;
	INT32	instLen;
	CHAR	retVal;

	DEBUGMSG1("\n\t@@@@@ Inside CreateAndAddNewMaxEmkcCfgMeasuredNetworkTableEntry() @@@@@\n");

	inst = CreateMaxEmkcCfgMeasuredNetworkTableInstance(
									&instLen, maxEmkcCfgMeasNetTableIndex);

	CHECK_NULL_RETURN_ERROR(inst);

	/* Add the created instance to the vector gv_maxEmkcCfgMeasuredNetworkTableVector. */
	retVal = CreateAndAddMaxEmkcCfgMeasuredNetworkTableEntry(
				inst, instLen, maxEmkcCfgMeasNetTableIndex,
				maxEmkcCfgMeasNetTableRowStatus,
				maxEmkcCfgMeasNetAddressingType, maxEmkcCfgMeasNetDestMac,
				maxEmkcCfgMeasNetDestMacLen, maxEmkcCfgMeasNetDestIp,
				maxEmkcCfgMeasNetDestIpLen, maxEmkcCfgMeasNetSourcePort,
				maxEmkcCfgMeasNetDestPort, maxEmkcCfgMeasNetTosDscp);

	/* Free the reserved memory */
	__Free(inst);
	return retVal;
}

/*****************************************************************************
 *	Function Name	: CreateAndAddMaxEmkcCfgMeasuredNetworkTableEntry()
 *
 *	Args			: 1. Instance Oid (IN).
 *					  2. Instance Oid Length (IN).
 *					  3. Table column maxEmkcCfgMeasNetTableIndex (IN).
 *					  4. Table column maxEmkcCfgMeasNetTableRowStatus (IN).
 *					  5. Table column maxEmkcCfgMeasNetAddressingType (IN).
 *					  6. Table column maxEmkcCfgMeasNetDestMac (IN).
 *					  7. Table column maxEmkcCfgMeasNetDestIp (IN).
 *					  8. Table column maxEmkcCfgMeasNetSourcePort (IN).
 *					  9. Table column maxEmkcCfgMeasNetDestPort (IN).
 *					  10. Table column maxEmkcCfgMeasNetTosDscp (IN).
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will take all columns value and its instance value
 *					  as input and add create an entry then add it to the
 *					  vector.
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR CreateAndAddMaxEmkcCfgMeasuredNetworkTableEntry(OID *instance, INT32 instanceLen, U_INT32 maxEmkcCfgMeasNetTableIndex, INT32 maxEmkcCfgMeasNetTableRowStatus, INT32 maxEmkcCfgMeasNetAddressingType, U_CHAR *maxEmkcCfgMeasNetDestMac, INT32 maxEmkcCfgMeasNetDestMacLen , U_CHAR *maxEmkcCfgMeasNetDestIp, INT32 maxEmkcCfgMeasNetDestIpLen , U_INT32 maxEmkcCfgMeasNetSourcePort, U_INT32 maxEmkcCfgMeasNetDestPort, U_INT32 maxEmkcCfgMeasNetTosDscp)
{

	/*
	 * Instance			: It has the value. No Need to allocate memory.
	 */

	Node	*nodePtr;
	Entry	*entryPtr;
	MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside CreateAndAddMaxEmkcCfgMeasuredNetworkTableEntry() @@@@@\n");

	/*
	 * Memory for "maxEmkcCfgMeasNetDestMac",
	 * "maxEmkcCfgMeasNetDestIp" in the parameter list for a new row will be 
	 * allocated and the value will be copied. It will not be freed here. If 
	 * the user invokes this function, then the memory allocated for the
	 * above variables should be freed where it is invoked explicitly.
	 */

	if (!( (maxEmkcCfgMeasNetTableRowStatus == SNMP_ROW_ACTIVE) || 
		(maxEmkcCfgMeasNetTableRowStatus == SNMP_ROW_NOTINSERVICE) || 
		(maxEmkcCfgMeasNetTableRowStatus == SNMP_ROW_NOTREADY) || 
		(maxEmkcCfgMeasNetTableRowStatus == SNMP_ROW_CREATEANDWAIT) ))
	{
		DEBUGMSG1("Wrong Value for RowStatus Column!!!\n");
		return FAILURE;
	}

	entryPtr = (Entry *)(__Calloc(1, sizeof(Entry)));

	CHECK_NULL_RETURN_ERROR(entryPtr);

	entryPtr->instance = (OID *)(__Calloc(instanceLen, sizeof(OID)));

	if(entryPtr->instance == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(entryPtr);
		return MEMORY_ALLOCATION_FAILURE;
	}
	CopyOid(entryPtr->instance, instance, instanceLen);
	entryPtr->instanceLen = instanceLen;

	maxEmkcCfgMeasuredNetworkTableEntryPtr = (MaxEmkcCfgMeasuredNetworkTableEntry *)(__Calloc(1,
											sizeof(MaxEmkcCfgMeasuredNetworkTableEntry)));

	if(maxEmkcCfgMeasuredNetworkTableEntryPtr == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(entryPtr->instance);
		__Free(entryPtr);
		return MEMORY_ALLOCATION_FAILURE;
	}

	/* Assigning the index column 1  "maxEmkcCfgMeasNetTableIndex"  of type  " U_INT32  " */
	maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetTableIndex = maxEmkcCfgMeasNetTableIndex;

	/* Assigning the column 2  "maxEmkcCfgMeasNetTableRowStatus"  of type  " INT32  " */
	maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetTableRowStatus = maxEmkcCfgMeasNetTableRowStatus;

	/* Assigning the column 3  "maxEmkcCfgMeasNetAddressingType"  of type  " INT32  " */
	maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetAddressingType = maxEmkcCfgMeasNetAddressingType;

	/* Assigning the column 4  "maxEmkcCfgMeasNetDestMac"  of type  " U_CHAR * " */
	maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestMacLen = maxEmkcCfgMeasNetDestMacLen;
	AllocateAndDoMemcpy(
				&maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestMac,
				(U_CHAR *)maxEmkcCfgMeasNetDestMac,
				maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestMacLen);

	/* Assigning the column 5  "maxEmkcCfgMeasNetDestIp"  of type  " U_CHAR * " */
	maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestIpLen = maxEmkcCfgMeasNetDestIpLen;
	AllocateAndDoMemcpy(
				&maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestIp,
				maxEmkcCfgMeasNetDestIp, maxEmkcCfgMeasNetDestIpLen);

	/* Assigning the column 6  "maxEmkcCfgMeasNetSourcePort"  of type  " U_INT32  " */
	maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetSourcePort = maxEmkcCfgMeasNetSourcePort;

	/* Assigning the column 7  "maxEmkcCfgMeasNetDestPort"  of type  " U_INT32  " */
	maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestPort = maxEmkcCfgMeasNetDestPort;

	/* Assigning the column 8  "maxEmkcCfgMeasNetTosDscp"  of type  " U_INT32  " */
	maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetTosDscp = maxEmkcCfgMeasNetTosDscp;


	entryPtr->ptr = maxEmkcCfgMeasuredNetworkTableEntryPtr;
	nodePtr = (Node *)(__Calloc(1,sizeof(Node)));

	if(nodePtr == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(entryPtr->instance);
		FreeMaxEmkcCfgMeasuredNetworkTableEntryMemory(entryPtr);
		return MEMORY_ALLOCATION_FAILURE;
	}

	nodePtr->refPtr = entryPtr;

	if (AddElement(&gv_maxEmkcCfgMeasuredNetworkTableVector, nodePtr) == FAILURE)
	{
		__Free(entryPtr->instance);
		FreeMaxEmkcCfgMeasuredNetworkTableEntryMemory(entryPtr);
		__Free(nodePtr);
	}

	return SUCCESS;

}
/*****************************************************************************
 *	Function Name	: CreateMaxEmkcCfgMeasuredNetworkTableInstance()
 *
 *	Args			: 1. Instance Oid Length(IN/OUT).
 *					  2. Table column maxEmkcCfgMeasNetTableIndex (IN).
 *
 *	Returns			: Nothing.
 *
 *	Task			: This method is called from the method
 *					  CreateAndAddNewMaxEmkcCfgMeasuredNetworkTableTableEntry().
 *					  It is used to create a oid representation of the instance
 *					  value by taking table index columns value as input.
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
OID *CreateMaxEmkcCfgMeasuredNetworkTableInstance(INT32 *instanceLen, U_INT32 maxEmkcCfgMeasNetTableIndex)
{
	OID		*inst;
	INT32	instLen;

	DEBUGMSG1("\n\t@@@@@ Inside CreateMaxEmkcCfgMeasuredNetworkTableInstance() @@@@@\n");

	/* The index is an integer */
	instLen = 1;
	inst = (OID *)__Calloc(sizeof(OID), instLen);
	CHECK_NULL_RETURN_NULL(inst);
	inst[0] = maxEmkcCfgMeasNetTableIndex;

	*instanceLen = instLen;
	return inst;
}
/*****************************************************************************
 *	Function Name	: MaxEmkcCfgMeasuredNetworkTableProcessRequests()
 *
 *	Args			: 1. PduType (GET/GET-NEXT) (IN/OUT).
 *					  2. VarBinds vector (IN/OUT).
 *					  3. Future Use.
 *					  4. Future Use.
 *
 *	Returns			: SUCCESS or FAILURE. 
 *
 *	Task			: This method will be called from the agent api for
 *					  all the requests (GET/GET-NEXT/SET) with received
 *					  pduType and  varBind vector before processing the
 *					  received varbinds. The purpose of this method call
 *					  is, the user can know the set of varBinds (OIDs')
 *					  received for a listener. Using these inputs user
 *					  may do some validation or call his application
 *					  method and update the local data structure. User
 *					  has to specify the error status and error index.
 *
 *	Docs			: Yes.
 *
 *	Bugs			: Return value of method is not handled in AgentAPI.
 *****************************************************************************/
CHAR MaxEmkcCfgMeasuredNetworkTableProcessRequests(INT32 pduVersion, U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex)
{
	/*
	 * Varbinds			: Varbinds have all the received varbinds(oid and
	 *					  value)from the manager.
	 *
	 * Errstatus		: Single "Long" storage pointer variable.
	 * 					  User can update this incase of any error.
	 * 					  No nead to allocate. Memory should not be freed.
	 *
	 * ErrIndex			: Single "Long" storage pointer variable.
	 * 					  User can update this incase of any error.
	 * 					  No nead to allocate. Memory should not be freed.
	 */

	INT16	i;
	Node	*nodePtr;
	VarBind	*varBindPtr;
	INT16	instLen;
	OID		inst[MAX_INST_LEN];

	DEBUGMSG1("\n\t@@@@@ Inside MaxEmkcCfgMeasuredNetworkTableProcessRequests() @@@@@\n");

	/*
	 * The varBind vector have a set of varBinds requested
	 * for this listener. User can do the validation or extra
	 * processing over the received varBinds.
	 */


	for(i=0; i<varBinds->size; i++)
	{
		nodePtr = (Node *)ElementAt(varBinds, i);
		varBindPtr = (VarBind *)nodePtr->refPtr;

#ifdef DEBUG
		DEBUGMSG2("The varBind index is %d\n", i+1);
		DEBUGMSG1("The received oid is \n");
		PRINTOID(varBindPtr->oid, varBindPtr->oidLen);
#endif

		instLen = GetInstance(varBindPtr->oid, varBindPtr->oidLen,
								MAXEMKCCFGMEASUREDNETWORKTABLE_OID_LEN+2, inst);

#ifdef DEBUG
		DEBUGMSG1("The received instance is \n");
		PRINTOID(inst,instLen);
#endif

		nodePtr = nodePtr->nextPtr;
	}

	return SUCCESS;
}

/*****************************************************************************
 *	Function Name	: MaxEmkcCfgMeasuredNetworkTableProcessReadReq()
 *
 *	Args			: 1. PduType (GET/GET-NEXT) (IN).
 *					  2. Requested Oid (IN).
 *					  3. Requested Oid Length (IN).
 *					  4. Variable value length (IN).
 *					  5. It is used to return snmp error or exception(IN/OUT).
 *
 *	Returns			: Pointer to the return variable value.
 *
 *	Task			: This method is called from agent api (pdureqhdlr.c) when a 
 *					  get/get-next request is made from the manager. This method 
 *					  will identify the exact scalar/table column for which the 
 *					  request is made and call the corresponding get method which 
 *					  is available  in the instrument file. output from this 
 *					  function will be the value of the requested variable, 
 *					  length of the variable,  the error status if any.
 *
  *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *MaxEmkcCfgMeasuredNetworkTableProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status)
{

	/*
	 * reqOid			: Requested OID, User can neither change the value,
	 *					  free the memory, reallocate memory.
	 *
	 * reqOidLen		: length of reqOid. User can neither change the value,
	 *					  free the memory, reallocate memory.
	 *
	 * varValLen		: Updated inside the method. No nead to allocate the
	 *					  memory.
	 *
	 * Status			: Updated incase of error. No nead to allocate the
	 *					  memory.
	 */

	OID		column;
	U_CHAR	*retPtr;
	Entry	*entryPtr;
	MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr;


	DEBUGMSG1("\n\t@@@@@ Inside MaxEmkcCfgMeasuredNetworkTableProcessReadReq() @@@@@\n");

	retPtr = NULL;
	maxEmkcCfgMeasuredNetworkTableEntryPtr = NULL;

	/*
	 * It will retrieve the entry for the given instance 
	 * from the vector :- gv_maxEmkcCfgMeasuredNetworkTableVector
	 */

	entryPtr = GetEntry(pduType, reqOid, reqOidLen, gv_maxEmkcCfgMeasuredNetworkTableOid,
							MAXEMKCCFGMEASUREDNETWORKTABLE_OID_LEN,
							&gv_maxEmkcCfgMeasuredNetworkTableVector,
							gv_maxEmkcCfgMeasuredNetworkTableSubIdList,
							MAXEMKCCFGMEASUREDNETWORKTABLE_SUBID_LEN);

	if (entryPtr == NULL)
	{
		/* end of table or group is reached */
		DEBUGMSG1("The given instance is not available in the table\n");
		*status = SNMP_NOSUCHINSTANCE;
		return NULL;
	}

	maxEmkcCfgMeasuredNetworkTableEntryPtr = (MaxEmkcCfgMeasuredNetworkTableEntry *)(entryPtr->ptr);

	column = reqOid[MAXEMKCCFGMEASUREDNETWORKTABLE_OID_LEN+1];

	DEBUGMSG2("The column value is %ld\n", column);

	*status = SNMP_ERR_NOERROR;

	switch(column)
	{
		case	MAXEMKCCFGMEASUREDNETWORKTABLE_MAXEMKCCFGMEASNETTABLEINDEX:
				*status = SNMP_ERR_NOACCESS;
				retPtr =  NULL;
				break;

		case	MAXEMKCCFGMEASUREDNETWORKTABLE_MAXEMKCCFGMEASNETTABLEROWSTATUS:
				retPtr = GetMaxEmkcCfgMeasNetTableRowStatus(maxEmkcCfgMeasuredNetworkTableEntryPtr,
													 varValLen, status);
				break;

		case	MAXEMKCCFGMEASUREDNETWORKTABLE_MAXEMKCCFGMEASNETADDRESSINGTYPE:
				retPtr = GetMaxEmkcCfgMeasNetAddressingType(maxEmkcCfgMeasuredNetworkTableEntryPtr,
													 varValLen, status);
				break;

		case	MAXEMKCCFGMEASUREDNETWORKTABLE_MAXEMKCCFGMEASNETDESTMAC:
				retPtr = GetMaxEmkcCfgMeasNetDestMac(maxEmkcCfgMeasuredNetworkTableEntryPtr,
													 varValLen, status);
				break;

		case	MAXEMKCCFGMEASUREDNETWORKTABLE_MAXEMKCCFGMEASNETDESTIP:
				retPtr = GetMaxEmkcCfgMeasNetDestIp(maxEmkcCfgMeasuredNetworkTableEntryPtr,
													 varValLen, status);
				break;

		case	MAXEMKCCFGMEASUREDNETWORKTABLE_MAXEMKCCFGMEASNETSOURCEPORT:
				retPtr = GetMaxEmkcCfgMeasNetSourcePort(maxEmkcCfgMeasuredNetworkTableEntryPtr,
													 varValLen, status);
				break;

		case	MAXEMKCCFGMEASUREDNETWORKTABLE_MAXEMKCCFGMEASNETDESTPORT:
				retPtr = GetMaxEmkcCfgMeasNetDestPort(maxEmkcCfgMeasuredNetworkTableEntryPtr,
													 varValLen, status);
				break;

		case	MAXEMKCCFGMEASUREDNETWORKTABLE_MAXEMKCCFGMEASNETTOSDSCP:
				retPtr = GetMaxEmkcCfgMeasNetTosDscp(maxEmkcCfgMeasuredNetworkTableEntryPtr,
													 varValLen, status);
				break;

		default:
				/* Invalid column number */
				*status = SNMP_NOSUCHOBJECT;
				retPtr = NULL;
	}
	return retPtr;
}

/*****************************************************************************
 *	Function Name	: MaxEmkcCfgMeasuredNetworkTableProcessWriteReq()
 *
 *	Args			: 1. Requested Oid (IN).
 *					  2. Requested Oid Length (IN).
 *					  3. Variable value (IN).
 *					  4. Variable value length (IN).
 *					  5. It is used for atomic set implementation and
 * 						 to return snmp error or exception(IN/OUT).
 *
 *	Returns			: Pointer to the return variable value.
 *
 *	Task			: This method is called from the agent api (pdureqhdlr.c) 
 *					  when a set  request is made from the manager. This method 
 *					  will identify the exact scalar/table column for which 
 *					  the request is made and call the corresponding  set method 
 *					  which is available in the instrument file.
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *MaxEmkcCfgMeasuredNetworkTableProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{

	/*
	 * reqOid			: Requested OID, User can neither change the value,
	 *					  free the memory, reallocate memory.
	 *
	 * reqOidLen		: length of reqOid. User can neither change the value,
	 *					  free the memory, reallocate memory.
	 *
	 * varVal			: It has the value. No nead to allocate the memory.
	 *
	 * varValLen		: It has the value and updated inside the method.
	 *					  No nead to allocate the memory.
	 *
	 * Status			: It has the value and updated incase of error.
	 *					  No nead to allocate the memory.
	 */

	OID		column;
	OID		inst[MAX_INST_LEN];
	U_INT32	maxEmkcCfgMeasNetTableIndex_IndVal;
	INT32	maxEmkcCfgMeasNetTableIndex_IndValLen;
	OID	*delInst;
	INT32	delInstLen;
	INT16	instLen;
	U_CHAR	newRowEntryFlag;
	U_CHAR	newRowFlag;
	U_CHAR	*retPtr;
	Entry	*entryPtr;
	Entry	*delEntryPtr;

	MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside MaxEmkcCfgMeasuredNetworkTableProcessWriteReq() @@@@@\n");

	retPtr = NULL;
	newRowEntryFlag = UNSET;
	newRowFlag = FALSE;
	maxEmkcCfgMeasuredNetworkTableEntryPtr = NULL;

	/* Delete the given instance from the vector */
	if (*status == DELETE_ENTRY)
	{
		instLen = GetInstance(reqOid, reqOidLen,MAXEMKCCFGMEASUREDNETWORKTABLE_OID_LEN+2, inst);
		DEBUGMSG1("Deleting the instance.....   ");
		PRINTOID(inst,instLen);
		entryPtr = DeleteEntryUsingInstance(&gv_maxEmkcCfgMeasuredNetworkTableVector, inst,
				instLen);
		/* Deleting an instance from the table */
		if (entryPtr != NULL)
		{
			FreeMaxEmkcCfgMeasuredNetworkTableEntryMemory(entryPtr);
		}
		else
		{
			/* It should not be invoked at any cost */
			*status = SNMP_ERR_UNDOFAILED;
		}
		return NULL;
	}
	/*
	 * It will retrieve the entry for the given instance 
	 * from the vector :- gv_maxEmkcCfgMeasuredNetworkTableVector
	 */

	entryPtr = GetEntry(SNMP_MSG_SET, reqOid, &reqOidLen,
				gv_maxEmkcCfgMeasuredNetworkTableOid, MAXEMKCCFGMEASUREDNETWORKTABLE_OID_LEN,
				&gv_maxEmkcCfgMeasuredNetworkTableVector, gv_maxEmkcCfgMeasuredNetworkTableSubIdList,
				MAXEMKCCFGMEASUREDNETWORKTABLE_SUBID_LEN);

	/* 
	 * Given instance is not available in the table, 
	 * create a new instance.
	 */

	if (entryPtr == NULL)
	{
		if (*status == MODIFY_ENTRY)
		{
			/* It should not be invoked at any cost */
			*status = SNMP_ERR_UNDOFAILED;
			return NULL;
		}

		/* Get the instance from the received oid */
		instLen = GetInstance(reqOid, reqOidLen, MAXEMKCCFGMEASUREDNETWORKTABLE_OID_LEN + 2, inst);

		/* Checking the validity of the given instance */
		if(CheckInstances(gv_maxEmkcCfgMeasuredNetworkTableIndexDataTypes, NO,
					MAXEMKCCFGMEASUREDNETWORKTABLE_INDEX_LEN, inst, instLen) == FALSE)
		{
			DEBUGMSG1("1.Instance is not proper\n");
					if(pduVersion == 0)
		{
			*status = SNMP_ERR_NOSUCHNAME;
					}
			else		{
			*status = SNMP_NOSUCHOBJECT;
					}
			return NULL;
		}


		if(*status != VALIDATE)
		{
			newRowFlag = TRUE;

			/* Create a new entry add it to the vector */
			entryPtr = CreateEntryAndSetInstance(
							&gv_maxEmkcCfgMeasuredNetworkTableVector, inst, instLen);

			CHECK_NULL_SET_STATUS(entryPtr);

			entryPtr->ptr = (MaxEmkcCfgMeasuredNetworkTableEntry *)__Calloc(1,
								sizeof(MaxEmkcCfgMeasuredNetworkTableEntry));

			CHECK_NULL_SET_STATUS_AND_FREE(entryPtr->ptr);

			maxEmkcCfgMeasuredNetworkTableEntryPtr = (MaxEmkcCfgMeasuredNetworkTableEntry *)(entryPtr->ptr);

			/* This part will assign value for the index columns */ 
			maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetTableIndex = inst[0];

			/*This part will add default values for the remaining columns */
			maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetTableRowStatus = 
											SNMP_ROW_NONEXISTENT;

			maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetAddressingType = 3;

			maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestMacLen = 0;
			AllocateAndDoMemcpy(
				&maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestMac,
				(U_CHAR *)"",
				maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestMacLen);

			maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestIpLen = 13;
			AllocateAndDoMemcpy(
				&maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestIp,(U_CHAR *)
				"255.255.255.0", 13);

			maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetSourcePort = 0;

			maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestPort = 0;

			maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetTosDscp = 128;

		}
		else
		{
			maxEmkcCfgMeasNetTableIndex_IndVal = inst[0];
			retPtr = (U_CHAR *)ConvertToStringFromUnsignedInteger((U_INT32 *)&maxEmkcCfgMeasNetTableIndex_IndVal,&maxEmkcCfgMeasNetTableIndex_IndValLen);
			if(retPtr != NULL)
			{
				__Free(retPtr);
				retPtr = NULL;
			}
			newRowEntryFlag = SET;
		}
	}
	else
	{
		maxEmkcCfgMeasuredNetworkTableEntryPtr = (MaxEmkcCfgMeasuredNetworkTableEntry *)(entryPtr->ptr);
	}


	column = reqOid[MAXEMKCCFGMEASUREDNETWORKTABLE_OID_LEN+1];

	DEBUGMSG2("The column value is %ld\n", column);

	switch(column)
	{
		case	MAXEMKCCFGMEASUREDNETWORKTABLE_MAXEMKCCFGMEASNETTABLEINDEX:
				*status = SNMP_ERR_NOACCESS;
				retPtr =  NULL;
				break;

		case	MAXEMKCCFGMEASUREDNETWORKTABLE_MAXEMKCCFGMEASNETTABLEROWSTATUS:
				retPtr = SetMaxEmkcCfgMeasNetTableRowStatus(maxEmkcCfgMeasuredNetworkTableEntryPtr,
										 varVal, varValLen, status);
				break;

		case	MAXEMKCCFGMEASUREDNETWORKTABLE_MAXEMKCCFGMEASNETADDRESSINGTYPE:
				retPtr = SetMaxEmkcCfgMeasNetAddressingType(maxEmkcCfgMeasuredNetworkTableEntryPtr,
										 varVal, varValLen, status);
				break;

		case	MAXEMKCCFGMEASUREDNETWORKTABLE_MAXEMKCCFGMEASNETDESTMAC:
				retPtr = SetMaxEmkcCfgMeasNetDestMac(maxEmkcCfgMeasuredNetworkTableEntryPtr,
										 varVal, varValLen, status);
				break;

		case	MAXEMKCCFGMEASUREDNETWORKTABLE_MAXEMKCCFGMEASNETDESTIP:
				retPtr = SetMaxEmkcCfgMeasNetDestIp(maxEmkcCfgMeasuredNetworkTableEntryPtr,
										 varVal, varValLen, status);
				break;

		case	MAXEMKCCFGMEASUREDNETWORKTABLE_MAXEMKCCFGMEASNETSOURCEPORT:
				retPtr = SetMaxEmkcCfgMeasNetSourcePort(maxEmkcCfgMeasuredNetworkTableEntryPtr,
										 varVal, varValLen, status);
				break;

		case	MAXEMKCCFGMEASUREDNETWORKTABLE_MAXEMKCCFGMEASNETDESTPORT:
				retPtr = SetMaxEmkcCfgMeasNetDestPort(maxEmkcCfgMeasuredNetworkTableEntryPtr,
										 varVal, varValLen, status);
				break;

		case	MAXEMKCCFGMEASUREDNETWORKTABLE_MAXEMKCCFGMEASNETTOSDSCP:
				retPtr = SetMaxEmkcCfgMeasNetTosDscp(maxEmkcCfgMeasuredNetworkTableEntryPtr,
										 varVal, varValLen, status);
				break;

		default:
				/* Invalid column number */
				*status = SNMP_NOSUCHOBJECT;
				retPtr = NULL;
	}

	/* Deleting the given instance from the vector, if the new row fails to add */
	if (*status != VALIDATE && retPtr == NULL && newRowFlag)
	{

		delInst = CreateMaxEmkcCfgMeasuredNetworkTableInstance(
					&delInstLen, maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetTableIndex);
		delEntryPtr = DeleteEntryUsingInstance(&gv_maxEmkcCfgMeasuredNetworkTableVector, delInst, delInstLen);
		/* Deleting an instance from the table */
		if (delEntryPtr != NULL)
		{
			FreeMaxEmkcCfgMeasuredNetworkTableEntryMemory(delEntryPtr);
		}
		__Free(delInst);
		*status = SNMP_ERR_INCONSISTENTVALUE;
	}

	if(newRowEntryFlag == SET)
	{
		return NULL;
	}

	return retPtr;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgMeasuredNetworkTableInfo()
 *
 *	Args			: 1. Starting Row index (IN).
 *					  2. Number of rows (IN).
 *					  3. Flag about remaining number of rows (OUT).
 *
 *	Returns			: Nothing.
 *
 *	Task			: It will return the table vector reference,
 *					  before that it will verify the total size of
 *					  the table and set flag value.
 *
 *	Docs			: Yes.
 *
 *	Bugs			:
 *****************************************************************************/
Vector *GetMaxEmkcCfgMeasuredNetworkTableInfo(INT32 startIdx, INT32 numOfRows, INT32 *flag)
{
	INT32 remRows;

	DEBUGMSG1("\n\t@@@@@ Inside *GetMaxEmkcCfgMeasuredNetworkTableInfo() @@@@@\n");

	remRows = gv_maxEmkcCfgMeasuredNetworkTableVector.size - startIdx - numOfRows;

	/*
	 * This will check for the presence of remaining rows and will set
	 * the flag variable if present.
	 */

	if (remRows > 0)
	{
		TRACEMSG2("The number of rows remaining is %d \n", remRows);
		*flag = TRUE;
	}

	return &gv_maxEmkcCfgMeasuredNetworkTableVector;
}

/*****************************************************************************
 *	Function Name	: UpdateMaxEmkcCfgMeasuredNetworkTable()
 *
 *	Args			: command type.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: This method will be called from the agent api after
 *					  successful SET/GET/GET-NEXT operation, in order to
 *					  update the original or user application's data
 *					  structrue with the changes made to MaxEmkcCfgMeasuredNetworkTable.
 *					  If FILE_TO_VECTOR is enabled then the corresponding
 *					  text file will be updated here. If the storagetype
 *					  is NoStorage then the user should call this method
 *					  to update the changes done by the management.The
 *					  user can also free the resources in this function
 *					  if required.
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR UpdateMaxEmkcCfgMeasuredNetworkTable(U_CHAR command)
{
	CHAR retVal;

	Node	*nodePtr;
	Entry	*entryPtr;
	Node	*tempNodePtr;
	MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside UpdateMaxEmkcCfgMeasuredNetworkTable() @@@@@\n");

	retVal = SUCCESS;

	if(command == SNMP_MSG_SET) 
	{
		if(gv_maxEmkcCfgMeasuredNetworkTableVector.size > 0 )
		{
			nodePtr = ElementAt(&gv_maxEmkcCfgMeasuredNetworkTableVector, 0);

			while(nodePtr)
			{
				entryPtr = (Entry *)nodePtr->refPtr;

				maxEmkcCfgMeasuredNetworkTableEntryPtr =
						(MaxEmkcCfgMeasuredNetworkTableEntry *)(entryPtr->ptr);

				/*
				 * If the maxEmkcCfgMeasNetTableRowStatus value is ROW_NONEXISTENT then
				 * delete the row from the vector &gv_maxEmkcCfgMeasuredNetworkTableVector.
				 */

				if (maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetTableRowStatus
											== SNMP_ROW_NONEXISTENT)
				{
					__Free(entryPtr->instance);

					FreeMaxEmkcCfgMeasuredNetworkTableEntryMemory(entryPtr);

					tempNodePtr = nodePtr->nextPtr;

					DeleteElement(&gv_maxEmkcCfgMeasuredNetworkTableVector, nodePtr);

					nodePtr = tempNodePtr;

					continue;
				}
				nodePtr = nodePtr->nextPtr;
			}
		}

#ifdef FILE_TO_VECTOR
		/* Write all the entries of "maxEmkcCfgMeasuredNetworkTable" into the file */
		WriteToMaxEmkcCfgMeasuredNetworkTableFile();
#endif
	}

	return retVal;
}

/*****************************************************************************
 *	Function Name	: FreeMaxEmkcCfgMeasuredNetworkTableEntryMemory()
 *
 *	Args			: 1. Reference of the table entry (IN).
 *
 *	Returns			: Nothing.
 *
 *	Task			: This method is called from
 *					  FreeMaxEmkcCfgMeasuredNetworkTableVector(). This method
 *					  is used to free the reserved memory for an entry while 
 *					  deleting an entry from the vector. The user can also
 *					  call this method to free a particular entry in the
 *					  table vector.
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
void FreeMaxEmkcCfgMeasuredNetworkTableEntryMemory(Entry *entryPtr)
{
	/*
	 * The entry memory will be freed here including all the allocated columns.
	 */

	MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside FreeMaxEmkcCfgMeasuredNetworkTableEntryMemory() @@@@@\n");

	maxEmkcCfgMeasuredNetworkTableEntryPtr = (MaxEmkcCfgMeasuredNetworkTableEntry *)entryPtr->ptr;

	/* Free the reserved memory */
	if (maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestMac != NULL)
		__Free(maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestMac);
	if (maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestIp != NULL)
		__Free(maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestIp);
	
	__Free(maxEmkcCfgMeasuredNetworkTableEntryPtr);
	__Free(entryPtr);
}

/*****************************************************************************
 *	Function Name	: FreeMaxEmkcCfgMeasuredNetworkTableVector()
 *
 *	Args			: Nothing.
 *
 *	Returns			: Nothing.
 *
 *	Task			: Free the gv_maxEmkcCfgMeasuredNetworkTableVector.
 *
 *	See Also		: FreeMaxEmkcCfgMeasuredNetworkTableEntryMemory().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
void FreeMaxEmkcCfgMeasuredNetworkTableVector()
{
	Node	*nodePtr;
	entry	*entryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside FreeMaxEmkcCfgMeasuredNetworkTableVector() @@@@@\n");

	/*
	 * Each element will be taken from the vector
	 * "gv_maxEmkcCfgMeasuredNetworkTableVector" and their instance and 
	 * column values will be freed here.
	 */

	if(gv_maxEmkcCfgMeasuredNetworkTableVector.size == 0)
	{
		return;
	}

	nodePtr = (Node *)ElementAt(&gv_maxEmkcCfgMeasuredNetworkTableVector, 0);

	while (nodePtr)
	{
		entryPtr = (Entry *)nodePtr->refPtr;

		__Free(entryPtr->instance);
		FreeMaxEmkcCfgMeasuredNetworkTableEntryMemory(entryPtr);

		nodePtr = nodePtr->nextPtr;

		DeleteElementAt(&gv_maxEmkcCfgMeasuredNetworkTableVector, 0);
	}
}




#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgmeasurednetworktablehdlr.c
 *****************************************************************************/
