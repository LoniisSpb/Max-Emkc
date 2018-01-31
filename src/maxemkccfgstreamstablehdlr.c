/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File		: maxemkccfgstreamstablehdlr.c.
 *
 *  Purpose		: To handle the requests from the manager for the 
 * 				  module maxemkccfgstreamstable. 
 *
 *				  "Description" 
 *
 *				  "Row Description"
 *
 *  Author		: WebNMS Agent Toolkit C Edition 6
 *
 *  Date		: Fri Jan 26 16:40:45 MSK 2018
 *
 *  See Also	: maxemkccfgstreamstableftov.c,
 *				  maxemkccfgstreamstableinstru.c,
 *				  maxemkccfgstreamstable.h,
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
#define MAXEMKCCFGSTREAMSTABLE_PUBLIC
#include "maxemkccfgstreamstable.h" 

/* This tree cell is used to register with agent.*/
TreeCell gv_maxEmkcCfgStreamsTableCell=
	{
		"MAX-EMKC:MaxEmkcCfgStreamsTable",
		SNMP_VERSION_2c, gv_maxEmkcCfgStreamsTableOid,
		MAXEMKCCFGSTREAMSTABLE_OID_LEN, TABLE,
		gv_maxEmkcCfgStreamsTableSubIdList,
		MAXEMKCCFGSTREAMSTABLE_SUBID_LEN,
		gv_maxEmkcCfgStreamsTableSubIdListAccess,
		gv_maxEmkcCfgStreamsTableSubIdListDataTypes,
		MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGSTREAMROWSTATUS,
		MaxEmkcCfgStreamsTableProcessRequests,
		MaxEmkcCfgStreamsTableProcessReadReq,
		MaxEmkcCfgStreamsTableProcessWriteReq,
		UpdateMaxEmkcCfgStreamsTable,
		NULL, NULL
	};

/*****************************************************************************
 *	Function Name	: InitMaxEmkcCfgStreamsTable()
 *
 *	Args			: Nothing.
 *
 *	Returns			: Nothing.
 *
 *	Task			: It will register the treeCell with agent and initialize
 * 					  all data structures related to the module
 * 					  "maxEmkcCfgStreamsTable".
 *
 *	See Also		: CreateAndAddNewMaxEmkcCfgStreamsTableEntry().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
void InitMaxEmkcCfgStreamsTable(void)
{

	DEBUGMSG1("\n\t@@@@@ Inside InitMaxEmkcCfgStreamsTable() @@@@@\n");

	/* Register the oid as a listener to the agent. */
	if (RegisterOID(&gv_maxEmkcCfgStreamsTableCell) == FAILURE)
	{
		DEBUGMSG1("Unable to register for the module maxEmkcCfgStreamsTable\n");
		return;
	}

	/* Initialize the vector */
	InitVector(&gv_maxEmkcCfgStreamsTableVector, &gfptr_sortFuncPtr);

#ifdef FILE_TO_VECTOR
	/* Read  all the entries of "maxEmkcCfgStreamsTable" from the file */
	ReadFromMaxEmkcCfgStreamsTableFile();
#endif

	if (gv_maxEmkcCfgStreamsTableVector.size == 0)
	{
		/* Add the created instance to the vector gv_maxEmkcCfgStreamsTableVector. */
		CreateAndAddNewMaxEmkcCfgStreamsTableEntry(1, 1, 1, 9600, 
						(U_CHAR *)"",
						(U_CHAR *)"",
						(U_CHAR *)"",
						(U_CHAR *)"",100000, 100000, 50, 1);

#ifdef FILE_TO_VECTOR
	/* Write all the entries of "maxEmkcCfgStreamsTable" into the file */
	WriteToMaxEmkcCfgStreamsTableFile();
#endif
	}
}

/*****************************************************************************
 *	Function Name	: CreateAndAddNewMaxEmkcCfgStreamsTableEntry()
 *
 *	Args			: 1. Table column maxEmkcCfgStreamIndex (IN).
 *					  2. Table column maxEmkcCfgStreamRowStatus (IN).
 *					  3. Table column maxEmkcCfgStreamState (IN).
 *					  4. Table column maxEmkcCfgY1564StreamPduLength (IN).
 *					  5. Table column maxEmkcCfgY1564StreamCir (IN).
 *					  6. Table column maxEmkcCfgY1564StreamEir (IN).
 *					  7. Table column maxEmkcCfgY1564StreamNonConformToCirEirRate (IN).
 *					  8. Table column maxEmkcCfgY1564StreamFlrTreshold (IN).
 *					  9. Table column maxEmkcCfgY1564StreamFtdTreshold (IN).
 *					  10. Table column maxEmkcCfgY1564StreamFdvTreshold (IN).
 *					  11. Table column maxEmkcCfgY1564StreamAvail (IN).
 *					  12. Table column maxEmkcCfgY1564StreamMeasNetworkRow (IN).
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
CHAR CreateAndAddNewMaxEmkcCfgStreamsTableEntry(U_INT32 maxEmkcCfgStreamIndex, INT32 maxEmkcCfgStreamRowStatus, INT32 maxEmkcCfgStreamState, U_INT32 maxEmkcCfgY1564StreamPduLength, U_CHAR *maxEmkcCfgY1564StreamCir, U_CHAR *maxEmkcCfgY1564StreamEir, U_CHAR *maxEmkcCfgY1564StreamNonConformToCirEirRate, U_CHAR *maxEmkcCfgY1564StreamFlrTreshold, U_INT32 maxEmkcCfgY1564StreamFtdTreshold, U_INT32 maxEmkcCfgY1564StreamFdvTreshold, U_INT32 maxEmkcCfgY1564StreamAvail, U_INT32 maxEmkcCfgY1564StreamMeasNetworkRow)
{
	OID		*inst;
	INT32	instLen;
	CHAR	retVal;

	DEBUGMSG1("\n\t@@@@@ Inside CreateAndAddNewMaxEmkcCfgStreamsTableEntry() @@@@@\n");

	inst = CreateMaxEmkcCfgStreamsTableInstance(
									&instLen, maxEmkcCfgStreamIndex);

	CHECK_NULL_RETURN_ERROR(inst);

	/* Add the created instance to the vector gv_maxEmkcCfgStreamsTableVector. */
	retVal = CreateAndAddMaxEmkcCfgStreamsTableEntry(
				inst, instLen, maxEmkcCfgStreamIndex,
				maxEmkcCfgStreamRowStatus, maxEmkcCfgStreamState,
				maxEmkcCfgY1564StreamPduLength, maxEmkcCfgY1564StreamCir,
				maxEmkcCfgY1564StreamEir,
				maxEmkcCfgY1564StreamNonConformToCirEirRate,
				maxEmkcCfgY1564StreamFlrTreshold,
				maxEmkcCfgY1564StreamFtdTreshold,
				maxEmkcCfgY1564StreamFdvTreshold,
				maxEmkcCfgY1564StreamAvail,
				maxEmkcCfgY1564StreamMeasNetworkRow);

	/* Free the reserved memory */
	__Free(inst);
	return retVal;
}

/*****************************************************************************
 *	Function Name	: CreateAndAddMaxEmkcCfgStreamsTableEntry()
 *
 *	Args			: 1. Instance Oid (IN).
 *					  2. Instance Oid Length (IN).
 *					  3. Table column maxEmkcCfgStreamIndex (IN).
 *					  4. Table column maxEmkcCfgStreamRowStatus (IN).
 *					  5. Table column maxEmkcCfgStreamState (IN).
 *					  6. Table column maxEmkcCfgY1564StreamPduLength (IN).
 *					  7. Table column maxEmkcCfgY1564StreamCir (IN).
 *					  8. Table column maxEmkcCfgY1564StreamEir (IN).
 *					  9. Table column maxEmkcCfgY1564StreamNonConformToCirEirRate (IN).
 *					  10. Table column maxEmkcCfgY1564StreamFlrTreshold (IN).
 *					  11. Table column maxEmkcCfgY1564StreamFtdTreshold (IN).
 *					  12. Table column maxEmkcCfgY1564StreamFdvTreshold (IN).
 *					  13. Table column maxEmkcCfgY1564StreamAvail (IN).
 *					  14. Table column maxEmkcCfgY1564StreamMeasNetworkRow (IN).
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
CHAR CreateAndAddMaxEmkcCfgStreamsTableEntry(OID *instance, INT32 instanceLen, U_INT32 maxEmkcCfgStreamIndex, INT32 maxEmkcCfgStreamRowStatus, INT32 maxEmkcCfgStreamState, U_INT32 maxEmkcCfgY1564StreamPduLength, U_CHAR *maxEmkcCfgY1564StreamCir, U_CHAR *maxEmkcCfgY1564StreamEir, U_CHAR *maxEmkcCfgY1564StreamNonConformToCirEirRate, U_CHAR *maxEmkcCfgY1564StreamFlrTreshold, U_INT32 maxEmkcCfgY1564StreamFtdTreshold, U_INT32 maxEmkcCfgY1564StreamFdvTreshold, U_INT32 maxEmkcCfgY1564StreamAvail, U_INT32 maxEmkcCfgY1564StreamMeasNetworkRow)
{

	/*
	 * Instance			: It has the value. No Need to allocate memory.
	 */

	Node	*nodePtr;
	Entry	*entryPtr;
	MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside CreateAndAddMaxEmkcCfgStreamsTableEntry() @@@@@\n");

	/*
	 * Memory for "maxEmkcCfgY1564StreamCir",
	 * "maxEmkcCfgY1564StreamEir",
	 * "maxEmkcCfgY1564StreamNonConformToCirEirRate",
	 * "maxEmkcCfgY1564StreamFlrTreshold" in the parameter list for a new row
	 * will be allocated and the value will be copied. It will not be freed
	 * here. If the user invokes this function, then the memory allocated for
	 * the above variables should be freed where it is invoked explicitly.
	 */

	if (!( (maxEmkcCfgStreamRowStatus == SNMP_ROW_ACTIVE) || 
		(maxEmkcCfgStreamRowStatus == SNMP_ROW_NOTINSERVICE) || 
		(maxEmkcCfgStreamRowStatus == SNMP_ROW_NOTREADY) || 
		(maxEmkcCfgStreamRowStatus == SNMP_ROW_CREATEANDWAIT) ))
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

	maxEmkcCfgStreamsTableEntryPtr = (MaxEmkcCfgStreamsTableEntry *)(__Calloc(1,
											sizeof(MaxEmkcCfgStreamsTableEntry)));

	if(maxEmkcCfgStreamsTableEntryPtr == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(entryPtr->instance);
		__Free(entryPtr);
		return MEMORY_ALLOCATION_FAILURE;
	}

	/* Assigning the index column 1  "maxEmkcCfgStreamIndex"  of type  " U_INT32  " */
	maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgStreamIndex = maxEmkcCfgStreamIndex;

	/* Assigning the column 2  "maxEmkcCfgStreamRowStatus"  of type  " INT32  " */
	maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgStreamRowStatus = maxEmkcCfgStreamRowStatus;

	/* Assigning the column 3  "maxEmkcCfgStreamState"  of type  " INT32  " */
	maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgStreamState = maxEmkcCfgStreamState;

	/* Assigning the column 4  "maxEmkcCfgY1564StreamPduLength"  of type  " U_INT32  " */
	maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamPduLength = maxEmkcCfgY1564StreamPduLength;

	/* Assigning the column 5  "maxEmkcCfgY1564StreamCir"  of type  " U_CHAR * " */
	AllocateAndDoStrcpy(
				(CHAR **)&maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamCir,
				(CHAR *)maxEmkcCfgY1564StreamCir);

	/* Assigning the column 6  "maxEmkcCfgY1564StreamEir"  of type  " U_CHAR * " */
	AllocateAndDoStrcpy(
				(CHAR **)&maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamEir,
				(CHAR *)maxEmkcCfgY1564StreamEir);

	/* Assigning the column 7  "maxEmkcCfgY1564StreamNonConformToCirEirRate"  of type  " U_CHAR * " */
	AllocateAndDoStrcpy(
				(CHAR **)&maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamNonConformToCirEirRate,
				(CHAR *)maxEmkcCfgY1564StreamNonConformToCirEirRate);

	/* Assigning the column 8  "maxEmkcCfgY1564StreamFlrTreshold"  of type  " U_CHAR * " */
	AllocateAndDoStrcpy(
				(CHAR **)&maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamFlrTreshold,
				(CHAR *)maxEmkcCfgY1564StreamFlrTreshold);

	/* Assigning the column 9  "maxEmkcCfgY1564StreamFtdTreshold"  of type  " U_INT32  " */
	maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamFtdTreshold = maxEmkcCfgY1564StreamFtdTreshold;

	/* Assigning the column 10  "maxEmkcCfgY1564StreamFdvTreshold"  of type  " U_INT32  " */
	maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamFdvTreshold = maxEmkcCfgY1564StreamFdvTreshold;

	/* Assigning the column 11  "maxEmkcCfgY1564StreamAvail"  of type  " U_INT32  " */
	maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamAvail = maxEmkcCfgY1564StreamAvail;

	/* Assigning the column 12  "maxEmkcCfgY1564StreamMeasNetworkRow"  of type  " U_INT32  " */
	maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamMeasNetworkRow = maxEmkcCfgY1564StreamMeasNetworkRow;


	entryPtr->ptr = maxEmkcCfgStreamsTableEntryPtr;
	nodePtr = (Node *)(__Calloc(1,sizeof(Node)));

	if(nodePtr == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(entryPtr->instance);
		FreeMaxEmkcCfgStreamsTableEntryMemory(entryPtr);
		return MEMORY_ALLOCATION_FAILURE;
	}

	nodePtr->refPtr = entryPtr;

	if (AddElement(&gv_maxEmkcCfgStreamsTableVector, nodePtr) == FAILURE)
	{
		__Free(entryPtr->instance);
		FreeMaxEmkcCfgStreamsTableEntryMemory(entryPtr);
		__Free(nodePtr);
	}

	return SUCCESS;

}
/*****************************************************************************
 *	Function Name	: CreateMaxEmkcCfgStreamsTableInstance()
 *
 *	Args			: 1. Instance Oid Length(IN/OUT).
 *					  2. Table column maxEmkcCfgStreamIndex (IN).
 *
 *	Returns			: Nothing.
 *
 *	Task			: This method is called from the method
 *					  CreateAndAddNewMaxEmkcCfgStreamsTableTableEntry().
 *					  It is used to create a oid representation of the instance
 *					  value by taking table index columns value as input.
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
OID *CreateMaxEmkcCfgStreamsTableInstance(INT32 *instanceLen, U_INT32 maxEmkcCfgStreamIndex)
{
	OID		*inst;
	INT32	instLen;

	DEBUGMSG1("\n\t@@@@@ Inside CreateMaxEmkcCfgStreamsTableInstance() @@@@@\n");

	/* The index is an integer */
	instLen = 1;
	inst = (OID *)__Calloc(sizeof(OID), instLen);
	CHECK_NULL_RETURN_NULL(inst);
	inst[0] = maxEmkcCfgStreamIndex;

	*instanceLen = instLen;
	return inst;
}
/*****************************************************************************
 *	Function Name	: MaxEmkcCfgStreamsTableProcessRequests()
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
CHAR MaxEmkcCfgStreamsTableProcessRequests(INT32 pduVersion, U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex)
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

	DEBUGMSG1("\n\t@@@@@ Inside MaxEmkcCfgStreamsTableProcessRequests() @@@@@\n");

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
								MAXEMKCCFGSTREAMSTABLE_OID_LEN+2, inst);

#ifdef DEBUG
		DEBUGMSG1("The received instance is \n");
		PRINTOID(inst,instLen);
#endif

		nodePtr = nodePtr->nextPtr;
	}

	return SUCCESS;
}

/*****************************************************************************
 *	Function Name	: MaxEmkcCfgStreamsTableProcessReadReq()
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
U_CHAR *MaxEmkcCfgStreamsTableProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status)
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
	MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr;


	DEBUGMSG1("\n\t@@@@@ Inside MaxEmkcCfgStreamsTableProcessReadReq() @@@@@\n");

	retPtr = NULL;
	maxEmkcCfgStreamsTableEntryPtr = NULL;

	/*
	 * It will retrieve the entry for the given instance 
	 * from the vector :- gv_maxEmkcCfgStreamsTableVector
	 */

	entryPtr = GetEntry(pduType, reqOid, reqOidLen, gv_maxEmkcCfgStreamsTableOid,
							MAXEMKCCFGSTREAMSTABLE_OID_LEN,
							&gv_maxEmkcCfgStreamsTableVector,
							gv_maxEmkcCfgStreamsTableSubIdList,
							MAXEMKCCFGSTREAMSTABLE_SUBID_LEN);

	if (entryPtr == NULL)
	{
		/* end of table or group is reached */
		DEBUGMSG1("The given instance is not available in the table\n");
		*status = SNMP_NOSUCHINSTANCE;
		return NULL;
	}

	maxEmkcCfgStreamsTableEntryPtr = (MaxEmkcCfgStreamsTableEntry *)(entryPtr->ptr);

	column = reqOid[MAXEMKCCFGSTREAMSTABLE_OID_LEN+1];

	DEBUGMSG2("The column value is %ld\n", column);

	*status = SNMP_ERR_NOERROR;

	switch(column)
	{
		case	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGSTREAMINDEX:
				*status = SNMP_ERR_NOACCESS;
				retPtr =  NULL;
				break;

		case	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGSTREAMROWSTATUS:
				retPtr = GetMaxEmkcCfgStreamRowStatus(maxEmkcCfgStreamsTableEntryPtr,
													 varValLen, status);
				break;

		case	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGSTREAMSTATE:
				retPtr = GetMaxEmkcCfgStreamState(maxEmkcCfgStreamsTableEntryPtr,
													 varValLen, status);
				break;

		case	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGY1564STREAMPDULENGTH:
				retPtr = GetMaxEmkcCfgY1564StreamPduLength(maxEmkcCfgStreamsTableEntryPtr,
													 varValLen, status);
				break;

		case	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGY1564STREAMCIR:
				retPtr = GetMaxEmkcCfgY1564StreamCir(maxEmkcCfgStreamsTableEntryPtr,
													 varValLen, status);
				break;

		case	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGY1564STREAMEIR:
				retPtr = GetMaxEmkcCfgY1564StreamEir(maxEmkcCfgStreamsTableEntryPtr,
													 varValLen, status);
				break;

		case	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGY1564STREAMNONCONFORMTOCIREIRRATE:
				retPtr = GetMaxEmkcCfgY1564StreamNonConformToCirEirRate(maxEmkcCfgStreamsTableEntryPtr,
													 varValLen, status);
				break;

		case	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGY1564STREAMFLRTRESHOLD:
				retPtr = GetMaxEmkcCfgY1564StreamFlrTreshold(maxEmkcCfgStreamsTableEntryPtr,
													 varValLen, status);
				break;

		case	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGY1564STREAMFTDTRESHOLD:
				retPtr = GetMaxEmkcCfgY1564StreamFtdTreshold(maxEmkcCfgStreamsTableEntryPtr,
													 varValLen, status);
				break;

		case	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGY1564STREAMFDVTRESHOLD:
				retPtr = GetMaxEmkcCfgY1564StreamFdvTreshold(maxEmkcCfgStreamsTableEntryPtr,
													 varValLen, status);
				break;

		case	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGY1564STREAMAVAIL:
				retPtr = GetMaxEmkcCfgY1564StreamAvail(maxEmkcCfgStreamsTableEntryPtr,
													 varValLen, status);
				break;

		case	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGY1564STREAMMEASNETWORKROW:
				retPtr = GetMaxEmkcCfgY1564StreamMeasNetworkRow(maxEmkcCfgStreamsTableEntryPtr,
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
 *	Function Name	: MaxEmkcCfgStreamsTableProcessWriteReq()
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
U_CHAR *MaxEmkcCfgStreamsTableProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
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
	U_INT32	maxEmkcCfgStreamIndex_IndVal;
	INT32	maxEmkcCfgStreamIndex_IndValLen;
	OID	*delInst;
	INT32	delInstLen;
	INT16	instLen;
	U_CHAR	newRowEntryFlag;
	U_CHAR	newRowFlag;
	U_CHAR	*retPtr;
	Entry	*entryPtr;
	Entry	*delEntryPtr;

	MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside MaxEmkcCfgStreamsTableProcessWriteReq() @@@@@\n");

	retPtr = NULL;
	newRowEntryFlag = UNSET;
	newRowFlag = FALSE;
	maxEmkcCfgStreamsTableEntryPtr = NULL;

	/* Delete the given instance from the vector */
	if (*status == DELETE_ENTRY)
	{
		instLen = GetInstance(reqOid, reqOidLen,MAXEMKCCFGSTREAMSTABLE_OID_LEN+2, inst);
		DEBUGMSG1("Deleting the instance.....   ");
		PRINTOID(inst,instLen);
		entryPtr = DeleteEntryUsingInstance(&gv_maxEmkcCfgStreamsTableVector, inst,
				instLen);
		/* Deleting an instance from the table */
		if (entryPtr != NULL)
		{
			FreeMaxEmkcCfgStreamsTableEntryMemory(entryPtr);
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
	 * from the vector :- gv_maxEmkcCfgStreamsTableVector
	 */

	entryPtr = GetEntry(SNMP_MSG_SET, reqOid, &reqOidLen,
				gv_maxEmkcCfgStreamsTableOid, MAXEMKCCFGSTREAMSTABLE_OID_LEN,
				&gv_maxEmkcCfgStreamsTableVector, gv_maxEmkcCfgStreamsTableSubIdList,
				MAXEMKCCFGSTREAMSTABLE_SUBID_LEN);

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
		instLen = GetInstance(reqOid, reqOidLen, MAXEMKCCFGSTREAMSTABLE_OID_LEN + 2, inst);

		/* Checking the validity of the given instance */
		if(CheckInstances(gv_maxEmkcCfgStreamsTableIndexDataTypes, NO,
					MAXEMKCCFGSTREAMSTABLE_INDEX_LEN, inst, instLen) == FALSE)
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
							&gv_maxEmkcCfgStreamsTableVector, inst, instLen);

			CHECK_NULL_SET_STATUS(entryPtr);

			entryPtr->ptr = (MaxEmkcCfgStreamsTableEntry *)__Calloc(1,
								sizeof(MaxEmkcCfgStreamsTableEntry));

			CHECK_NULL_SET_STATUS_AND_FREE(entryPtr->ptr);

			maxEmkcCfgStreamsTableEntryPtr = (MaxEmkcCfgStreamsTableEntry *)(entryPtr->ptr);

			/* This part will assign value for the index columns */ 
			maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgStreamIndex = inst[0];

			/*This part will add default values for the remaining columns */
			maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgStreamRowStatus = 
											SNMP_ROW_NONEXISTENT;

			maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgStreamState = 1;

			maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamPduLength = 9600;

			AllocateAndDoStrcpy(
				(CHAR **)&maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamCir,
				"");

			AllocateAndDoStrcpy(
				(CHAR **)&maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamEir,
				"");

			AllocateAndDoStrcpy(
				(CHAR **)&maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamNonConformToCirEirRate,
				"");

			AllocateAndDoStrcpy(
				(CHAR **)&maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamFlrTreshold,
				"");

			maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamFtdTreshold = 100000;

			maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamFdvTreshold = 100000;

			maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamAvail = 50;

			maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamMeasNetworkRow = 1;

		}
		else
		{
			maxEmkcCfgStreamIndex_IndVal = inst[0];
			retPtr = (U_CHAR *)ConvertToStringFromUnsignedInteger((U_INT32 *)&maxEmkcCfgStreamIndex_IndVal,&maxEmkcCfgStreamIndex_IndValLen);
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
		maxEmkcCfgStreamsTableEntryPtr = (MaxEmkcCfgStreamsTableEntry *)(entryPtr->ptr);
	}


	column = reqOid[MAXEMKCCFGSTREAMSTABLE_OID_LEN+1];

	DEBUGMSG2("The column value is %ld\n", column);

	switch(column)
	{
		case	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGSTREAMINDEX:
				*status = SNMP_ERR_NOACCESS;
				retPtr =  NULL;
				break;

		case	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGSTREAMROWSTATUS:
				retPtr = SetMaxEmkcCfgStreamRowStatus(maxEmkcCfgStreamsTableEntryPtr,
										 varVal, varValLen, status);
				break;

		case	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGSTREAMSTATE:
				retPtr = SetMaxEmkcCfgStreamState(maxEmkcCfgStreamsTableEntryPtr,
										 varVal, varValLen, status);
				break;

		case	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGY1564STREAMPDULENGTH:
				retPtr = SetMaxEmkcCfgY1564StreamPduLength(maxEmkcCfgStreamsTableEntryPtr,
										 varVal, varValLen, status);
				break;

		case	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGY1564STREAMCIR:
				retPtr = SetMaxEmkcCfgY1564StreamCir(maxEmkcCfgStreamsTableEntryPtr,
										 varVal, varValLen, status);
				break;

		case	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGY1564STREAMEIR:
				retPtr = SetMaxEmkcCfgY1564StreamEir(maxEmkcCfgStreamsTableEntryPtr,
										 varVal, varValLen, status);
				break;

		case	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGY1564STREAMNONCONFORMTOCIREIRRATE:
				retPtr = SetMaxEmkcCfgY1564StreamNonConformToCirEirRate(maxEmkcCfgStreamsTableEntryPtr,
										 varVal, varValLen, status);
				break;

		case	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGY1564STREAMFLRTRESHOLD:
				retPtr = SetMaxEmkcCfgY1564StreamFlrTreshold(maxEmkcCfgStreamsTableEntryPtr,
										 varVal, varValLen, status);
				break;

		case	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGY1564STREAMFTDTRESHOLD:
				retPtr = SetMaxEmkcCfgY1564StreamFtdTreshold(maxEmkcCfgStreamsTableEntryPtr,
										 varVal, varValLen, status);
				break;

		case	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGY1564STREAMFDVTRESHOLD:
				retPtr = SetMaxEmkcCfgY1564StreamFdvTreshold(maxEmkcCfgStreamsTableEntryPtr,
										 varVal, varValLen, status);
				break;

		case	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGY1564STREAMAVAIL:
				retPtr = SetMaxEmkcCfgY1564StreamAvail(maxEmkcCfgStreamsTableEntryPtr,
										 varVal, varValLen, status);
				break;

		case	MAXEMKCCFGSTREAMSTABLE_MAXEMKCCFGY1564STREAMMEASNETWORKROW:
				retPtr = SetMaxEmkcCfgY1564StreamMeasNetworkRow(maxEmkcCfgStreamsTableEntryPtr,
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

		delInst = CreateMaxEmkcCfgStreamsTableInstance(
					&delInstLen, maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgStreamIndex);
		delEntryPtr = DeleteEntryUsingInstance(&gv_maxEmkcCfgStreamsTableVector, delInst, delInstLen);
		/* Deleting an instance from the table */
		if (delEntryPtr != NULL)
		{
			FreeMaxEmkcCfgStreamsTableEntryMemory(delEntryPtr);
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
 *	Function Name	: GetMaxEmkcCfgStreamsTableInfo()
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
Vector *GetMaxEmkcCfgStreamsTableInfo(INT32 startIdx, INT32 numOfRows, INT32 *flag)
{
	INT32 remRows;

	DEBUGMSG1("\n\t@@@@@ Inside *GetMaxEmkcCfgStreamsTableInfo() @@@@@\n");

	remRows = gv_maxEmkcCfgStreamsTableVector.size - startIdx - numOfRows;

	/*
	 * This will check for the presence of remaining rows and will set
	 * the flag variable if present.
	 */

	if (remRows > 0)
	{
		TRACEMSG2("The number of rows remaining is %d \n", remRows);
		*flag = TRUE;
	}

	return &gv_maxEmkcCfgStreamsTableVector;
}

/*****************************************************************************
 *	Function Name	: UpdateMaxEmkcCfgStreamsTable()
 *
 *	Args			: command type.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: This method will be called from the agent api after
 *					  successful SET/GET/GET-NEXT operation, in order to
 *					  update the original or user application's data
 *					  structrue with the changes made to MaxEmkcCfgStreamsTable.
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
CHAR UpdateMaxEmkcCfgStreamsTable(U_CHAR command)
{
	CHAR retVal;

	Node	*nodePtr;
	Entry	*entryPtr;
	Node	*tempNodePtr;
	MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside UpdateMaxEmkcCfgStreamsTable() @@@@@\n");

	retVal = SUCCESS;

	if(command == SNMP_MSG_SET) 
	{
		if(gv_maxEmkcCfgStreamsTableVector.size > 0 )
		{
			nodePtr = ElementAt(&gv_maxEmkcCfgStreamsTableVector, 0);

			while(nodePtr)
			{
				entryPtr = (Entry *)nodePtr->refPtr;

				maxEmkcCfgStreamsTableEntryPtr =
						(MaxEmkcCfgStreamsTableEntry *)(entryPtr->ptr);

				/*
				 * If the maxEmkcCfgStreamRowStatus value is ROW_NONEXISTENT then
				 * delete the row from the vector &gv_maxEmkcCfgStreamsTableVector.
				 */

				if (maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgStreamRowStatus
											== SNMP_ROW_NONEXISTENT)
				{
					__Free(entryPtr->instance);

					FreeMaxEmkcCfgStreamsTableEntryMemory(entryPtr);

					tempNodePtr = nodePtr->nextPtr;

					DeleteElement(&gv_maxEmkcCfgStreamsTableVector, nodePtr);

					nodePtr = tempNodePtr;

					continue;
				}
				nodePtr = nodePtr->nextPtr;
			}
		}

#ifdef FILE_TO_VECTOR
		/* Write all the entries of "maxEmkcCfgStreamsTable" into the file */
		WriteToMaxEmkcCfgStreamsTableFile();
#endif
	}

	return retVal;
}

/*****************************************************************************
 *	Function Name	: FreeMaxEmkcCfgStreamsTableEntryMemory()
 *
 *	Args			: 1. Reference of the table entry (IN).
 *
 *	Returns			: Nothing.
 *
 *	Task			: This method is called from
 *					  FreeMaxEmkcCfgStreamsTableVector(). This method is used
 *					  to free the reserved memory for an entry while deleting
 *					  an entry from the vector. The user can also call this
 *					  method to free a particular entry in the table vector.
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
void FreeMaxEmkcCfgStreamsTableEntryMemory(Entry *entryPtr)
{
	/*
	 * The entry memory will be freed here including all the allocated columns.
	 */

	MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside FreeMaxEmkcCfgStreamsTableEntryMemory() @@@@@\n");

	maxEmkcCfgStreamsTableEntryPtr = (MaxEmkcCfgStreamsTableEntry *)entryPtr->ptr;

	/* Free the reserved memory */
	if (maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamCir != NULL)
		__Free(maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamCir);
	if (maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamEir != NULL)
		__Free(maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamEir);
	if (maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamNonConformToCirEirRate != NULL)
		__Free(maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamNonConformToCirEirRate);
	if (maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamFlrTreshold != NULL)
		__Free(maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamFlrTreshold);
	
	__Free(maxEmkcCfgStreamsTableEntryPtr);
	__Free(entryPtr);
}

/*****************************************************************************
 *	Function Name	: FreeMaxEmkcCfgStreamsTableVector()
 *
 *	Args			: Nothing.
 *
 *	Returns			: Nothing.
 *
 *	Task			: Free the gv_maxEmkcCfgStreamsTableVector.
 *
 *	See Also		: FreeMaxEmkcCfgStreamsTableEntryMemory().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
void FreeMaxEmkcCfgStreamsTableVector()
{
	Node	*nodePtr;
	entry	*entryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside FreeMaxEmkcCfgStreamsTableVector() @@@@@\n");

	/*
	 * Each element will be taken from the vector
	 * "gv_maxEmkcCfgStreamsTableVector" and their instance and column
	 * values will be freed here.
	 */

	if(gv_maxEmkcCfgStreamsTableVector.size == 0)
	{
		return;
	}

	nodePtr = (Node *)ElementAt(&gv_maxEmkcCfgStreamsTableVector, 0);

	while (nodePtr)
	{
		entryPtr = (Entry *)nodePtr->refPtr;

		__Free(entryPtr->instance);
		FreeMaxEmkcCfgStreamsTableEntryMemory(entryPtr);

		nodePtr = nodePtr->nextPtr;

		DeleteElementAt(&gv_maxEmkcCfgStreamsTableVector, 0);
	}
}




#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgstreamstablehdlr.c
 *****************************************************************************/
