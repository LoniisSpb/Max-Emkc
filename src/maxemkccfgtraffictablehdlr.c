/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File		: maxemkccfgtraffictablehdlr.c.
 *
 *  Purpose		: To handle the requests from the manager for the 
 * 				  module maxemkccfgtraffictable. 
 *
 *				  "Description" 
 *
 *				  "Row Description"
 *
 *  Author		: WebNMS Agent Toolkit C Edition 6
 *
 *  Date		: Fri Jan 26 16:40:40 MSK 2018
 *
 *  See Also	: maxemkccfgtraffictableftov.c,
 *				  maxemkccfgtraffictableinstru.c,
 *				  maxemkccfgtraffictable.h,
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
#define MAXEMKCCFGTRAFFICTABLE_PUBLIC
#include "maxemkccfgtraffictable.h" 

/* This tree cell is used to register with agent.*/
TreeCell gv_maxEmkcCfgTrafficTableCell=
	{
		"MAX-EMKC:MaxEmkcCfgTrafficTable",
		SNMP_VERSION_2c, gv_maxEmkcCfgTrafficTableOid,
		MAXEMKCCFGTRAFFICTABLE_OID_LEN, TABLE,
		gv_maxEmkcCfgTrafficTableSubIdList,
		MAXEMKCCFGTRAFFICTABLE_SUBID_LEN,
		gv_maxEmkcCfgTrafficTableSubIdListAccess,
		gv_maxEmkcCfgTrafficTableSubIdListDataTypes,
		MAXEMKCCFGTRAFFICTABLE_MAXEMKCCFGTRAFFICTABLEROWSTATUS,
		MaxEmkcCfgTrafficTableProcessRequests,
		MaxEmkcCfgTrafficTableProcessReadReq,
		MaxEmkcCfgTrafficTableProcessWriteReq,
		UpdateMaxEmkcCfgTrafficTable,
		NULL, NULL
	};

/*****************************************************************************
 *	Function Name	: InitMaxEmkcCfgTrafficTable()
 *
 *	Args			: Nothing.
 *
 *	Returns			: Nothing.
 *
 *	Task			: It will register the treeCell with agent and initialize
 * 					  all data structures related to the module
 * 					  "maxEmkcCfgTrafficTable".
 *
 *	See Also		: CreateAndAddNewMaxEmkcCfgTrafficTableEntry().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
void InitMaxEmkcCfgTrafficTable(void)
{

	DEBUGMSG1("\n\t@@@@@ Inside InitMaxEmkcCfgTrafficTable() @@@@@\n");

	/* Register the oid as a listener to the agent. */
	if (RegisterOID(&gv_maxEmkcCfgTrafficTableCell) == FAILURE)
	{
		DEBUGMSG1("Unable to register for the module maxEmkcCfgTrafficTable\n");
		return;
	}

	/* Initialize the vector */
	InitVector(&gv_maxEmkcCfgTrafficTableVector, &gfptr_sortFuncPtr);

#ifdef FILE_TO_VECTOR
	/* Read  all the entries of "maxEmkcCfgTrafficTable" from the file */
	ReadFromMaxEmkcCfgTrafficTableFile();
#endif

	if (gv_maxEmkcCfgTrafficTableVector.size == 0)
	{
		/* Add the created instance to the vector gv_maxEmkcCfgTrafficTableVector. */
		CreateAndAddNewMaxEmkcCfgTrafficTableEntry(1, 1);

#ifdef FILE_TO_VECTOR
	/* Write all the entries of "maxEmkcCfgTrafficTable" into the file */
	WriteToMaxEmkcCfgTrafficTableFile();
#endif
	}
}

/*****************************************************************************
 *	Function Name	: CreateAndAddNewMaxEmkcCfgTrafficTableEntry()
 *
 *	Args			: 1. Table column maxEmkcCfgTrafficIndex (IN).
 *					  2. Table column maxEmkcCfgTrafficTableRowStatus (IN).
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
CHAR CreateAndAddNewMaxEmkcCfgTrafficTableEntry(U_INT32 maxEmkcCfgTrafficIndex, INT32 maxEmkcCfgTrafficTableRowStatus)
{
	OID		*inst;
	INT32	instLen;
	CHAR	retVal;

	DEBUGMSG1("\n\t@@@@@ Inside CreateAndAddNewMaxEmkcCfgTrafficTableEntry() @@@@@\n");

	inst = CreateMaxEmkcCfgTrafficTableInstance(
									&instLen, maxEmkcCfgTrafficIndex);

	CHECK_NULL_RETURN_ERROR(inst);

	/* Add the created instance to the vector gv_maxEmkcCfgTrafficTableVector. */
	retVal = CreateAndAddMaxEmkcCfgTrafficTableEntry(
				inst, instLen, maxEmkcCfgTrafficIndex,
				maxEmkcCfgTrafficTableRowStatus);

	/* Free the reserved memory */
	__Free(inst);
	return retVal;
}

/*****************************************************************************
 *	Function Name	: CreateAndAddMaxEmkcCfgTrafficTableEntry()
 *
 *	Args			: 1. Instance Oid (IN).
 *					  2. Instance Oid Length (IN).
 *					  3. Table column maxEmkcCfgTrafficIndex (IN).
 *					  4. Table column maxEmkcCfgTrafficTableRowStatus (IN).
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
CHAR CreateAndAddMaxEmkcCfgTrafficTableEntry(OID *instance, INT32 instanceLen, U_INT32 maxEmkcCfgTrafficIndex, INT32 maxEmkcCfgTrafficTableRowStatus)
{

	/*
	 * Instance			: It has the value. No Need to allocate memory.
	 */

	Node	*nodePtr;
	Entry	*entryPtr;
	MaxEmkcCfgTrafficTableEntry *maxEmkcCfgTrafficTableEntryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside CreateAndAddMaxEmkcCfgTrafficTableEntry() @@@@@\n");

	if (!( (maxEmkcCfgTrafficTableRowStatus == SNMP_ROW_ACTIVE) || 
		(maxEmkcCfgTrafficTableRowStatus == SNMP_ROW_NOTINSERVICE) || 
		(maxEmkcCfgTrafficTableRowStatus == SNMP_ROW_NOTREADY) || 
		(maxEmkcCfgTrafficTableRowStatus == SNMP_ROW_CREATEANDWAIT) ))
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

	maxEmkcCfgTrafficTableEntryPtr = (MaxEmkcCfgTrafficTableEntry *)(__Calloc(1,
											sizeof(MaxEmkcCfgTrafficTableEntry)));

	if(maxEmkcCfgTrafficTableEntryPtr == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(entryPtr->instance);
		__Free(entryPtr);
		return MEMORY_ALLOCATION_FAILURE;
	}

	/* Assigning the index column 1  "maxEmkcCfgTrafficIndex"  of type  " U_INT32  " */
	maxEmkcCfgTrafficTableEntryPtr->maxEmkcCfgTrafficIndex = maxEmkcCfgTrafficIndex;

	/* Assigning the column 2  "maxEmkcCfgTrafficTableRowStatus"  of type  " INT32  " */
	maxEmkcCfgTrafficTableEntryPtr->maxEmkcCfgTrafficTableRowStatus = maxEmkcCfgTrafficTableRowStatus;


	entryPtr->ptr = maxEmkcCfgTrafficTableEntryPtr;
	nodePtr = (Node *)(__Calloc(1,sizeof(Node)));

	if(nodePtr == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(entryPtr->instance);
		FreeMaxEmkcCfgTrafficTableEntryMemory(entryPtr);
		return MEMORY_ALLOCATION_FAILURE;
	}

	nodePtr->refPtr = entryPtr;

	if (AddElement(&gv_maxEmkcCfgTrafficTableVector, nodePtr) == FAILURE)
	{
		__Free(entryPtr->instance);
		FreeMaxEmkcCfgTrafficTableEntryMemory(entryPtr);
		__Free(nodePtr);
	}

	return SUCCESS;

}
/*****************************************************************************
 *	Function Name	: CreateMaxEmkcCfgTrafficTableInstance()
 *
 *	Args			: 1. Instance Oid Length(IN/OUT).
 *					  2. Table column maxEmkcCfgTrafficIndex (IN).
 *
 *	Returns			: Nothing.
 *
 *	Task			: This method is called from the method
 *					  CreateAndAddNewMaxEmkcCfgTrafficTableTableEntry().
 *					  It is used to create a oid representation of the instance
 *					  value by taking table index columns value as input.
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
OID *CreateMaxEmkcCfgTrafficTableInstance(INT32 *instanceLen, U_INT32 maxEmkcCfgTrafficIndex)
{
	OID		*inst;
	INT32	instLen;

	DEBUGMSG1("\n\t@@@@@ Inside CreateMaxEmkcCfgTrafficTableInstance() @@@@@\n");

	/* The index is an integer */
	instLen = 1;
	inst = (OID *)__Calloc(sizeof(OID), instLen);
	CHECK_NULL_RETURN_NULL(inst);
	inst[0] = maxEmkcCfgTrafficIndex;

	*instanceLen = instLen;
	return inst;
}
/*****************************************************************************
 *	Function Name	: MaxEmkcCfgTrafficTableProcessRequests()
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
CHAR MaxEmkcCfgTrafficTableProcessRequests(INT32 pduVersion, U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex)
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

	DEBUGMSG1("\n\t@@@@@ Inside MaxEmkcCfgTrafficTableProcessRequests() @@@@@\n");

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
								MAXEMKCCFGTRAFFICTABLE_OID_LEN+2, inst);

#ifdef DEBUG
		DEBUGMSG1("The received instance is \n");
		PRINTOID(inst,instLen);
#endif

		nodePtr = nodePtr->nextPtr;
	}

	return SUCCESS;
}

/*****************************************************************************
 *	Function Name	: MaxEmkcCfgTrafficTableProcessReadReq()
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
U_CHAR *MaxEmkcCfgTrafficTableProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status)
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
	MaxEmkcCfgTrafficTableEntry *maxEmkcCfgTrafficTableEntryPtr;


	DEBUGMSG1("\n\t@@@@@ Inside MaxEmkcCfgTrafficTableProcessReadReq() @@@@@\n");

	retPtr = NULL;
	maxEmkcCfgTrafficTableEntryPtr = NULL;

	/*
	 * It will retrieve the entry for the given instance 
	 * from the vector :- gv_maxEmkcCfgTrafficTableVector
	 */

	entryPtr = GetEntry(pduType, reqOid, reqOidLen, gv_maxEmkcCfgTrafficTableOid,
							MAXEMKCCFGTRAFFICTABLE_OID_LEN,
							&gv_maxEmkcCfgTrafficTableVector,
							gv_maxEmkcCfgTrafficTableSubIdList,
							MAXEMKCCFGTRAFFICTABLE_SUBID_LEN);

	if (entryPtr == NULL)
	{
		/* end of table or group is reached */
		DEBUGMSG1("The given instance is not available in the table\n");
		*status = SNMP_NOSUCHINSTANCE;
		return NULL;
	}

	maxEmkcCfgTrafficTableEntryPtr = (MaxEmkcCfgTrafficTableEntry *)(entryPtr->ptr);

	column = reqOid[MAXEMKCCFGTRAFFICTABLE_OID_LEN+1];

	DEBUGMSG2("The column value is %ld\n", column);

	*status = SNMP_ERR_NOERROR;

	switch(column)
	{
		case	MAXEMKCCFGTRAFFICTABLE_MAXEMKCCFGTRAFFICINDEX:
				*status = SNMP_ERR_NOACCESS;
				retPtr =  NULL;
				break;

		case	MAXEMKCCFGTRAFFICTABLE_MAXEMKCCFGTRAFFICTABLEROWSTATUS:
				retPtr = GetMaxEmkcCfgTrafficTableRowStatus(maxEmkcCfgTrafficTableEntryPtr,
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
 *	Function Name	: MaxEmkcCfgTrafficTableProcessWriteReq()
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
U_CHAR *MaxEmkcCfgTrafficTableProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
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
	U_INT32	maxEmkcCfgTrafficIndex_IndVal;
	INT32	maxEmkcCfgTrafficIndex_IndValLen;
	OID	*delInst;
	INT32	delInstLen;
	INT16	instLen;
	U_CHAR	newRowEntryFlag;
	U_CHAR	newRowFlag;
	U_CHAR	*retPtr;
	Entry	*entryPtr;
	Entry	*delEntryPtr;

	MaxEmkcCfgTrafficTableEntry *maxEmkcCfgTrafficTableEntryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside MaxEmkcCfgTrafficTableProcessWriteReq() @@@@@\n");

	retPtr = NULL;
	newRowEntryFlag = UNSET;
	newRowFlag = FALSE;
	maxEmkcCfgTrafficTableEntryPtr = NULL;

	/* Delete the given instance from the vector */
	if (*status == DELETE_ENTRY)
	{
		instLen = GetInstance(reqOid, reqOidLen,MAXEMKCCFGTRAFFICTABLE_OID_LEN+2, inst);
		DEBUGMSG1("Deleting the instance.....   ");
		PRINTOID(inst,instLen);
		entryPtr = DeleteEntryUsingInstance(&gv_maxEmkcCfgTrafficTableVector, inst,
				instLen);
		/* Deleting an instance from the table */
		if (entryPtr != NULL)
		{
			FreeMaxEmkcCfgTrafficTableEntryMemory(entryPtr);
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
	 * from the vector :- gv_maxEmkcCfgTrafficTableVector
	 */

	entryPtr = GetEntry(SNMP_MSG_SET, reqOid, &reqOidLen,
				gv_maxEmkcCfgTrafficTableOid, MAXEMKCCFGTRAFFICTABLE_OID_LEN,
				&gv_maxEmkcCfgTrafficTableVector, gv_maxEmkcCfgTrafficTableSubIdList,
				MAXEMKCCFGTRAFFICTABLE_SUBID_LEN);

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
		instLen = GetInstance(reqOid, reqOidLen, MAXEMKCCFGTRAFFICTABLE_OID_LEN + 2, inst);

		/* Checking the validity of the given instance */
		if(CheckInstances(gv_maxEmkcCfgTrafficTableIndexDataTypes, NO,
					MAXEMKCCFGTRAFFICTABLE_INDEX_LEN, inst, instLen) == FALSE)
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
							&gv_maxEmkcCfgTrafficTableVector, inst, instLen);

			CHECK_NULL_SET_STATUS(entryPtr);

			entryPtr->ptr = (MaxEmkcCfgTrafficTableEntry *)__Calloc(1,
								sizeof(MaxEmkcCfgTrafficTableEntry));

			CHECK_NULL_SET_STATUS_AND_FREE(entryPtr->ptr);

			maxEmkcCfgTrafficTableEntryPtr = (MaxEmkcCfgTrafficTableEntry *)(entryPtr->ptr);

			/* This part will assign value for the index columns */ 
			maxEmkcCfgTrafficTableEntryPtr->maxEmkcCfgTrafficIndex = inst[0];

			/*This part will add default values for the remaining columns */
			maxEmkcCfgTrafficTableEntryPtr->maxEmkcCfgTrafficTableRowStatus = 
											SNMP_ROW_NONEXISTENT;

		}
		else
		{
			maxEmkcCfgTrafficIndex_IndVal = inst[0];
			retPtr = (U_CHAR *)ConvertToStringFromUnsignedInteger((U_INT32 *)&maxEmkcCfgTrafficIndex_IndVal,&maxEmkcCfgTrafficIndex_IndValLen);
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
		maxEmkcCfgTrafficTableEntryPtr = (MaxEmkcCfgTrafficTableEntry *)(entryPtr->ptr);
	}


	column = reqOid[MAXEMKCCFGTRAFFICTABLE_OID_LEN+1];

	DEBUGMSG2("The column value is %ld\n", column);

	switch(column)
	{
		case	MAXEMKCCFGTRAFFICTABLE_MAXEMKCCFGTRAFFICINDEX:
				*status = SNMP_ERR_NOACCESS;
				retPtr =  NULL;
				break;

		case	MAXEMKCCFGTRAFFICTABLE_MAXEMKCCFGTRAFFICTABLEROWSTATUS:
				retPtr = SetMaxEmkcCfgTrafficTableRowStatus(maxEmkcCfgTrafficTableEntryPtr,
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

		delInst = CreateMaxEmkcCfgTrafficTableInstance(
					&delInstLen, maxEmkcCfgTrafficTableEntryPtr->maxEmkcCfgTrafficIndex);
		delEntryPtr = DeleteEntryUsingInstance(&gv_maxEmkcCfgTrafficTableVector, delInst, delInstLen);
		/* Deleting an instance from the table */
		if (delEntryPtr != NULL)
		{
			FreeMaxEmkcCfgTrafficTableEntryMemory(delEntryPtr);
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
 *	Function Name	: GetMaxEmkcCfgTrafficTableInfo()
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
Vector *GetMaxEmkcCfgTrafficTableInfo(INT32 startIdx, INT32 numOfRows, INT32 *flag)
{
	INT32 remRows;

	DEBUGMSG1("\n\t@@@@@ Inside *GetMaxEmkcCfgTrafficTableInfo() @@@@@\n");

	remRows = gv_maxEmkcCfgTrafficTableVector.size - startIdx - numOfRows;

	/*
	 * This will check for the presence of remaining rows and will set
	 * the flag variable if present.
	 */

	if (remRows > 0)
	{
		TRACEMSG2("The number of rows remaining is %d \n", remRows);
		*flag = TRUE;
	}

	return &gv_maxEmkcCfgTrafficTableVector;
}

/*****************************************************************************
 *	Function Name	: UpdateMaxEmkcCfgTrafficTable()
 *
 *	Args			: command type.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: This method will be called from the agent api after
 *					  successful SET/GET/GET-NEXT operation, in order to
 *					  update the original or user application's data
 *					  structrue with the changes made to MaxEmkcCfgTrafficTable.
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
CHAR UpdateMaxEmkcCfgTrafficTable(U_CHAR command)
{
	CHAR retVal;

	Node	*nodePtr;
	Entry	*entryPtr;
	Node	*tempNodePtr;
	MaxEmkcCfgTrafficTableEntry *maxEmkcCfgTrafficTableEntryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside UpdateMaxEmkcCfgTrafficTable() @@@@@\n");

	retVal = SUCCESS;

	if(command == SNMP_MSG_SET) 
	{
		if(gv_maxEmkcCfgTrafficTableVector.size > 0 )
		{
			nodePtr = ElementAt(&gv_maxEmkcCfgTrafficTableVector, 0);

			while(nodePtr)
			{
				entryPtr = (Entry *)nodePtr->refPtr;

				maxEmkcCfgTrafficTableEntryPtr =
						(MaxEmkcCfgTrafficTableEntry *)(entryPtr->ptr);

				/*
				 * If the maxEmkcCfgTrafficTableRowStatus value is ROW_NONEXISTENT then
				 * delete the row from the vector &gv_maxEmkcCfgTrafficTableVector.
				 */

				if (maxEmkcCfgTrafficTableEntryPtr->maxEmkcCfgTrafficTableRowStatus
											== SNMP_ROW_NONEXISTENT)
				{
					__Free(entryPtr->instance);

					FreeMaxEmkcCfgTrafficTableEntryMemory(entryPtr);

					tempNodePtr = nodePtr->nextPtr;

					DeleteElement(&gv_maxEmkcCfgTrafficTableVector, nodePtr);

					nodePtr = tempNodePtr;

					continue;
				}
				nodePtr = nodePtr->nextPtr;
			}
		}

#ifdef FILE_TO_VECTOR
		/* Write all the entries of "maxEmkcCfgTrafficTable" into the file */
		WriteToMaxEmkcCfgTrafficTableFile();
#endif
	}

	return retVal;
}

/*****************************************************************************
 *	Function Name	: FreeMaxEmkcCfgTrafficTableEntryMemory()
 *
 *	Args			: 1. Reference of the table entry (IN).
 *
 *	Returns			: Nothing.
 *
 *	Task			: This method is called from
 *					  FreeMaxEmkcCfgTrafficTableVector(). This method is used
 *					  to free the reserved memory for an entry while deleting
 *					  an entry from the vector. The user can also call this
 *					  method to free a particular entry in the table vector.
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
void FreeMaxEmkcCfgTrafficTableEntryMemory(Entry *entryPtr)
{
	/*
	 * The entry memory will be freed here including all the allocated columns.
	 */

	MaxEmkcCfgTrafficTableEntry *maxEmkcCfgTrafficTableEntryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside FreeMaxEmkcCfgTrafficTableEntryMemory() @@@@@\n");

	maxEmkcCfgTrafficTableEntryPtr = (MaxEmkcCfgTrafficTableEntry *)entryPtr->ptr;

	/* Free the reserved memory */
	
	__Free(maxEmkcCfgTrafficTableEntryPtr);
	__Free(entryPtr);
}

/*****************************************************************************
 *	Function Name	: FreeMaxEmkcCfgTrafficTableVector()
 *
 *	Args			: Nothing.
 *
 *	Returns			: Nothing.
 *
 *	Task			: Free the gv_maxEmkcCfgTrafficTableVector.
 *
 *	See Also		: FreeMaxEmkcCfgTrafficTableEntryMemory().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
void FreeMaxEmkcCfgTrafficTableVector()
{
	Node	*nodePtr;
	entry	*entryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside FreeMaxEmkcCfgTrafficTableVector() @@@@@\n");

	/*
	 * Each element will be taken from the vector
	 * "gv_maxEmkcCfgTrafficTableVector" and their instance and column
	 * values will be freed here.
	 */

	if(gv_maxEmkcCfgTrafficTableVector.size == 0)
	{
		return;
	}

	nodePtr = (Node *)ElementAt(&gv_maxEmkcCfgTrafficTableVector, 0);

	while (nodePtr)
	{
		entryPtr = (Entry *)nodePtr->refPtr;

		__Free(entryPtr->instance);
		FreeMaxEmkcCfgTrafficTableEntryMemory(entryPtr);

		nodePtr = nodePtr->nextPtr;

		DeleteElementAt(&gv_maxEmkcCfgTrafficTableVector, 0);
	}
}




#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgtraffictablehdlr.c
 *****************************************************************************/
