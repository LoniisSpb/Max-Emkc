/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File		: maxemkccfgloopertablehdlr.c.
 *
 *  Purpose		: To handle the requests from the manager for the 
 * 				  module maxemkccfgloopertable. 
 *
 *				  "Description" 
 *
 *				  "Row Description"
 *
 *  Author		: WebNMS Agent Toolkit C Edition 6
 *
 *  Date		: Fri Jan 26 16:40:42 MSK 2018
 *
 *  See Also	: maxemkccfgloopertableftov.c,
 *				  maxemkccfgloopertableinstru.c,
 *				  maxemkccfgloopertable.h,
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
#define MAXEMKCCFGLOOPERTABLE_PUBLIC
#include "maxemkccfgloopertable.h" 

/* This tree cell is used to register with agent.*/
TreeCell gv_maxEmkcCfgLooperTableCell=
	{
		"MAX-EMKC:MaxEmkcCfgLooperTable",
		SNMP_VERSION_2c, gv_maxEmkcCfgLooperTableOid,
		MAXEMKCCFGLOOPERTABLE_OID_LEN, TABLE,
		gv_maxEmkcCfgLooperTableSubIdList,
		MAXEMKCCFGLOOPERTABLE_SUBID_LEN,
		gv_maxEmkcCfgLooperTableSubIdListAccess,
		gv_maxEmkcCfgLooperTableSubIdListDataTypes,
		MAXEMKCCFGLOOPERTABLE_MAXEMKCLOOPERROWSTATUS,
		MaxEmkcCfgLooperTableProcessRequests,
		MaxEmkcCfgLooperTableProcessReadReq,
		MaxEmkcCfgLooperTableProcessWriteReq,
		UpdateMaxEmkcCfgLooperTable,
		NULL, NULL
	};

/*****************************************************************************
 *	Function Name	: InitMaxEmkcCfgLooperTable()
 *
 *	Args			: Nothing.
 *
 *	Returns			: Nothing.
 *
 *	Task			: It will register the treeCell with agent and initialize
 * 					  all data structures related to the module
 * 					  "maxEmkcCfgLooperTable".
 *
 *	See Also		: CreateAndAddNewMaxEmkcCfgLooperTableEntry().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
void InitMaxEmkcCfgLooperTable(void)
{

	DEBUGMSG1("\n\t@@@@@ Inside InitMaxEmkcCfgLooperTable() @@@@@\n");

	/* Register the oid as a listener to the agent. */
	if (RegisterOID(&gv_maxEmkcCfgLooperTableCell) == FAILURE)
	{
		DEBUGMSG1("Unable to register for the module maxEmkcCfgLooperTable\n");
		return;
	}

	/* Initialize the vector */
	InitVector(&gv_maxEmkcCfgLooperTableVector, &gfptr_sortFuncPtr);

#ifdef FILE_TO_VECTOR
	/* Read  all the entries of "maxEmkcCfgLooperTable" from the file */
	ReadFromMaxEmkcCfgLooperTableFile();
#endif

	if (gv_maxEmkcCfgLooperTableVector.size == 0)
	{
		/* Add the created instance to the vector gv_maxEmkcCfgLooperTableVector. */
		CreateAndAddNewMaxEmkcCfgLooperTableEntry(1, 1);

#ifdef FILE_TO_VECTOR
	/* Write all the entries of "maxEmkcCfgLooperTable" into the file */
	WriteToMaxEmkcCfgLooperTableFile();
#endif
	}
}

/*****************************************************************************
 *	Function Name	: CreateAndAddNewMaxEmkcCfgLooperTableEntry()
 *
 *	Args			: 1. Table column maxEmkcLooperTableIndex (IN).
 *					  2. Table column maxEmkcLooperRowStatus (IN).
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
CHAR CreateAndAddNewMaxEmkcCfgLooperTableEntry(U_INT32 maxEmkcLooperTableIndex, INT32 maxEmkcLooperRowStatus)
{
	OID		*inst;
	INT32	instLen;
	CHAR	retVal;

	DEBUGMSG1("\n\t@@@@@ Inside CreateAndAddNewMaxEmkcCfgLooperTableEntry() @@@@@\n");

	inst = CreateMaxEmkcCfgLooperTableInstance(
									&instLen, maxEmkcLooperTableIndex);

	CHECK_NULL_RETURN_ERROR(inst);

	/* Add the created instance to the vector gv_maxEmkcCfgLooperTableVector. */
	retVal = CreateAndAddMaxEmkcCfgLooperTableEntry(
				inst, instLen, maxEmkcLooperTableIndex,
				maxEmkcLooperRowStatus);

	/* Free the reserved memory */
	__Free(inst);
	return retVal;
}

/*****************************************************************************
 *	Function Name	: CreateAndAddMaxEmkcCfgLooperTableEntry()
 *
 *	Args			: 1. Instance Oid (IN).
 *					  2. Instance Oid Length (IN).
 *					  3. Table column maxEmkcLooperTableIndex (IN).
 *					  4. Table column maxEmkcLooperRowStatus (IN).
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
CHAR CreateAndAddMaxEmkcCfgLooperTableEntry(OID *instance, INT32 instanceLen, U_INT32 maxEmkcLooperTableIndex, INT32 maxEmkcLooperRowStatus)
{

	/*
	 * Instance			: It has the value. No Need to allocate memory.
	 */

	Node	*nodePtr;
	Entry	*entryPtr;
	MaxEmkcCfgLooperTableEntry *maxEmkcCfgLooperTableEntryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside CreateAndAddMaxEmkcCfgLooperTableEntry() @@@@@\n");

	if (!( (maxEmkcLooperRowStatus == SNMP_ROW_ACTIVE) || 
		(maxEmkcLooperRowStatus == SNMP_ROW_NOTINSERVICE) || 
		(maxEmkcLooperRowStatus == SNMP_ROW_NOTREADY) || 
		(maxEmkcLooperRowStatus == SNMP_ROW_CREATEANDWAIT) ))
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

	maxEmkcCfgLooperTableEntryPtr = (MaxEmkcCfgLooperTableEntry *)(__Calloc(1,
											sizeof(MaxEmkcCfgLooperTableEntry)));

	if(maxEmkcCfgLooperTableEntryPtr == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(entryPtr->instance);
		__Free(entryPtr);
		return MEMORY_ALLOCATION_FAILURE;
	}

	/* Assigning the index column 1  "maxEmkcLooperTableIndex"  of type  " U_INT32  " */
	maxEmkcCfgLooperTableEntryPtr->maxEmkcLooperTableIndex = maxEmkcLooperTableIndex;

	/* Assigning the column 2  "maxEmkcLooperRowStatus"  of type  " INT32  " */
	maxEmkcCfgLooperTableEntryPtr->maxEmkcLooperRowStatus = maxEmkcLooperRowStatus;


	entryPtr->ptr = maxEmkcCfgLooperTableEntryPtr;
	nodePtr = (Node *)(__Calloc(1,sizeof(Node)));

	if(nodePtr == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(entryPtr->instance);
		FreeMaxEmkcCfgLooperTableEntryMemory(entryPtr);
		return MEMORY_ALLOCATION_FAILURE;
	}

	nodePtr->refPtr = entryPtr;

	if (AddElement(&gv_maxEmkcCfgLooperTableVector, nodePtr) == FAILURE)
	{
		__Free(entryPtr->instance);
		FreeMaxEmkcCfgLooperTableEntryMemory(entryPtr);
		__Free(nodePtr);
	}

	return SUCCESS;

}
/*****************************************************************************
 *	Function Name	: CreateMaxEmkcCfgLooperTableInstance()
 *
 *	Args			: 1. Instance Oid Length(IN/OUT).
 *					  2. Table column maxEmkcLooperTableIndex (IN).
 *
 *	Returns			: Nothing.
 *
 *	Task			: This method is called from the method
 *					  CreateAndAddNewMaxEmkcCfgLooperTableTableEntry().
 *					  It is used to create a oid representation of the instance
 *					  value by taking table index columns value as input.
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
OID *CreateMaxEmkcCfgLooperTableInstance(INT32 *instanceLen, U_INT32 maxEmkcLooperTableIndex)
{
	OID		*inst;
	INT32	instLen;

	DEBUGMSG1("\n\t@@@@@ Inside CreateMaxEmkcCfgLooperTableInstance() @@@@@\n");

	/* The index is an integer */
	instLen = 1;
	inst = (OID *)__Calloc(sizeof(OID), instLen);
	CHECK_NULL_RETURN_NULL(inst);
	inst[0] = maxEmkcLooperTableIndex;

	*instanceLen = instLen;
	return inst;
}
/*****************************************************************************
 *	Function Name	: MaxEmkcCfgLooperTableProcessRequests()
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
CHAR MaxEmkcCfgLooperTableProcessRequests(INT32 pduVersion, U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex)
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

	DEBUGMSG1("\n\t@@@@@ Inside MaxEmkcCfgLooperTableProcessRequests() @@@@@\n");

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
								MAXEMKCCFGLOOPERTABLE_OID_LEN+2, inst);

#ifdef DEBUG
		DEBUGMSG1("The received instance is \n");
		PRINTOID(inst,instLen);
#endif

		nodePtr = nodePtr->nextPtr;
	}

	return SUCCESS;
}

/*****************************************************************************
 *	Function Name	: MaxEmkcCfgLooperTableProcessReadReq()
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
U_CHAR *MaxEmkcCfgLooperTableProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status)
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
	MaxEmkcCfgLooperTableEntry *maxEmkcCfgLooperTableEntryPtr;


	DEBUGMSG1("\n\t@@@@@ Inside MaxEmkcCfgLooperTableProcessReadReq() @@@@@\n");

	retPtr = NULL;
	maxEmkcCfgLooperTableEntryPtr = NULL;

	/*
	 * It will retrieve the entry for the given instance 
	 * from the vector :- gv_maxEmkcCfgLooperTableVector
	 */

	entryPtr = GetEntry(pduType, reqOid, reqOidLen, gv_maxEmkcCfgLooperTableOid,
							MAXEMKCCFGLOOPERTABLE_OID_LEN,
							&gv_maxEmkcCfgLooperTableVector,
							gv_maxEmkcCfgLooperTableSubIdList,
							MAXEMKCCFGLOOPERTABLE_SUBID_LEN);

	if (entryPtr == NULL)
	{
		/* end of table or group is reached */
		DEBUGMSG1("The given instance is not available in the table\n");
		*status = SNMP_NOSUCHINSTANCE;
		return NULL;
	}

	maxEmkcCfgLooperTableEntryPtr = (MaxEmkcCfgLooperTableEntry *)(entryPtr->ptr);

	column = reqOid[MAXEMKCCFGLOOPERTABLE_OID_LEN+1];

	DEBUGMSG2("The column value is %ld\n", column);

	*status = SNMP_ERR_NOERROR;

	switch(column)
	{
		case	MAXEMKCCFGLOOPERTABLE_MAXEMKCLOOPERTABLEINDEX:
				*status = SNMP_ERR_NOACCESS;
				retPtr =  NULL;
				break;

		case	MAXEMKCCFGLOOPERTABLE_MAXEMKCLOOPERROWSTATUS:
				retPtr = GetMaxEmkcLooperRowStatus(maxEmkcCfgLooperTableEntryPtr,
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
 *	Function Name	: MaxEmkcCfgLooperTableProcessWriteReq()
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
U_CHAR *MaxEmkcCfgLooperTableProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
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
	U_INT32	maxEmkcLooperTableIndex_IndVal;
	INT32	maxEmkcLooperTableIndex_IndValLen;
	OID	*delInst;
	INT32	delInstLen;
	INT16	instLen;
	U_CHAR	newRowEntryFlag;
	U_CHAR	newRowFlag;
	U_CHAR	*retPtr;
	Entry	*entryPtr;
	Entry	*delEntryPtr;

	MaxEmkcCfgLooperTableEntry *maxEmkcCfgLooperTableEntryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside MaxEmkcCfgLooperTableProcessWriteReq() @@@@@\n");

	retPtr = NULL;
	newRowEntryFlag = UNSET;
	newRowFlag = FALSE;
	maxEmkcCfgLooperTableEntryPtr = NULL;

	/* Delete the given instance from the vector */
	if (*status == DELETE_ENTRY)
	{
		instLen = GetInstance(reqOid, reqOidLen,MAXEMKCCFGLOOPERTABLE_OID_LEN+2, inst);
		DEBUGMSG1("Deleting the instance.....   ");
		PRINTOID(inst,instLen);
		entryPtr = DeleteEntryUsingInstance(&gv_maxEmkcCfgLooperTableVector, inst,
				instLen);
		/* Deleting an instance from the table */
		if (entryPtr != NULL)
		{
			FreeMaxEmkcCfgLooperTableEntryMemory(entryPtr);
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
	 * from the vector :- gv_maxEmkcCfgLooperTableVector
	 */

	entryPtr = GetEntry(SNMP_MSG_SET, reqOid, &reqOidLen,
				gv_maxEmkcCfgLooperTableOid, MAXEMKCCFGLOOPERTABLE_OID_LEN,
				&gv_maxEmkcCfgLooperTableVector, gv_maxEmkcCfgLooperTableSubIdList,
				MAXEMKCCFGLOOPERTABLE_SUBID_LEN);

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
		instLen = GetInstance(reqOid, reqOidLen, MAXEMKCCFGLOOPERTABLE_OID_LEN + 2, inst);

		/* Checking the validity of the given instance */
		if(CheckInstances(gv_maxEmkcCfgLooperTableIndexDataTypes, NO,
					MAXEMKCCFGLOOPERTABLE_INDEX_LEN, inst, instLen) == FALSE)
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
							&gv_maxEmkcCfgLooperTableVector, inst, instLen);

			CHECK_NULL_SET_STATUS(entryPtr);

			entryPtr->ptr = (MaxEmkcCfgLooperTableEntry *)__Calloc(1,
								sizeof(MaxEmkcCfgLooperTableEntry));

			CHECK_NULL_SET_STATUS_AND_FREE(entryPtr->ptr);

			maxEmkcCfgLooperTableEntryPtr = (MaxEmkcCfgLooperTableEntry *)(entryPtr->ptr);

			/* This part will assign value for the index columns */ 
			maxEmkcCfgLooperTableEntryPtr->maxEmkcLooperTableIndex = inst[0];

			/*This part will add default values for the remaining columns */
			maxEmkcCfgLooperTableEntryPtr->maxEmkcLooperRowStatus = 
											SNMP_ROW_NONEXISTENT;

		}
		else
		{
			maxEmkcLooperTableIndex_IndVal = inst[0];
			retPtr = (U_CHAR *)ConvertToStringFromUnsignedInteger((U_INT32 *)&maxEmkcLooperTableIndex_IndVal,&maxEmkcLooperTableIndex_IndValLen);
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
		maxEmkcCfgLooperTableEntryPtr = (MaxEmkcCfgLooperTableEntry *)(entryPtr->ptr);
	}


	column = reqOid[MAXEMKCCFGLOOPERTABLE_OID_LEN+1];

	DEBUGMSG2("The column value is %ld\n", column);

	switch(column)
	{
		case	MAXEMKCCFGLOOPERTABLE_MAXEMKCLOOPERTABLEINDEX:
				*status = SNMP_ERR_NOACCESS;
				retPtr =  NULL;
				break;

		case	MAXEMKCCFGLOOPERTABLE_MAXEMKCLOOPERROWSTATUS:
				retPtr = SetMaxEmkcLooperRowStatus(maxEmkcCfgLooperTableEntryPtr,
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

		delInst = CreateMaxEmkcCfgLooperTableInstance(
					&delInstLen, maxEmkcCfgLooperTableEntryPtr->maxEmkcLooperTableIndex);
		delEntryPtr = DeleteEntryUsingInstance(&gv_maxEmkcCfgLooperTableVector, delInst, delInstLen);
		/* Deleting an instance from the table */
		if (delEntryPtr != NULL)
		{
			FreeMaxEmkcCfgLooperTableEntryMemory(delEntryPtr);
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
 *	Function Name	: GetMaxEmkcCfgLooperTableInfo()
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
Vector *GetMaxEmkcCfgLooperTableInfo(INT32 startIdx, INT32 numOfRows, INT32 *flag)
{
	INT32 remRows;

	DEBUGMSG1("\n\t@@@@@ Inside *GetMaxEmkcCfgLooperTableInfo() @@@@@\n");

	remRows = gv_maxEmkcCfgLooperTableVector.size - startIdx - numOfRows;

	/*
	 * This will check for the presence of remaining rows and will set
	 * the flag variable if present.
	 */

	if (remRows > 0)
	{
		TRACEMSG2("The number of rows remaining is %d \n", remRows);
		*flag = TRUE;
	}

	return &gv_maxEmkcCfgLooperTableVector;
}

/*****************************************************************************
 *	Function Name	: UpdateMaxEmkcCfgLooperTable()
 *
 *	Args			: command type.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: This method will be called from the agent api after
 *					  successful SET/GET/GET-NEXT operation, in order to
 *					  update the original or user application's data
 *					  structrue with the changes made to MaxEmkcCfgLooperTable.
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
CHAR UpdateMaxEmkcCfgLooperTable(U_CHAR command)
{
	CHAR retVal;

	Node	*nodePtr;
	Entry	*entryPtr;
	Node	*tempNodePtr;
	MaxEmkcCfgLooperTableEntry *maxEmkcCfgLooperTableEntryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside UpdateMaxEmkcCfgLooperTable() @@@@@\n");

	retVal = SUCCESS;

	if(command == SNMP_MSG_SET) 
	{
		if(gv_maxEmkcCfgLooperTableVector.size > 0 )
		{
			nodePtr = ElementAt(&gv_maxEmkcCfgLooperTableVector, 0);

			while(nodePtr)
			{
				entryPtr = (Entry *)nodePtr->refPtr;

				maxEmkcCfgLooperTableEntryPtr =
						(MaxEmkcCfgLooperTableEntry *)(entryPtr->ptr);

				/*
				 * If the maxEmkcLooperRowStatus value is ROW_NONEXISTENT then
				 * delete the row from the vector &gv_maxEmkcCfgLooperTableVector.
				 */

				if (maxEmkcCfgLooperTableEntryPtr->maxEmkcLooperRowStatus
											== SNMP_ROW_NONEXISTENT)
				{
					__Free(entryPtr->instance);

					FreeMaxEmkcCfgLooperTableEntryMemory(entryPtr);

					tempNodePtr = nodePtr->nextPtr;

					DeleteElement(&gv_maxEmkcCfgLooperTableVector, nodePtr);

					nodePtr = tempNodePtr;

					continue;
				}
				nodePtr = nodePtr->nextPtr;
			}
		}

#ifdef FILE_TO_VECTOR
		/* Write all the entries of "maxEmkcCfgLooperTable" into the file */
		WriteToMaxEmkcCfgLooperTableFile();
#endif
	}

	return retVal;
}

/*****************************************************************************
 *	Function Name	: FreeMaxEmkcCfgLooperTableEntryMemory()
 *
 *	Args			: 1. Reference of the table entry (IN).
 *
 *	Returns			: Nothing.
 *
 *	Task			: This method is called from
 *					  FreeMaxEmkcCfgLooperTableVector(). This method is used 
 *					  to free the reserved memory for an entry while deleting
 *					  an entry from the vector. The user can also call this
 *					  method to free a particular entry in the table vector.
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
void FreeMaxEmkcCfgLooperTableEntryMemory(Entry *entryPtr)
{
	/*
	 * The entry memory will be freed here including all the allocated columns.
	 */

	MaxEmkcCfgLooperTableEntry *maxEmkcCfgLooperTableEntryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside FreeMaxEmkcCfgLooperTableEntryMemory() @@@@@\n");

	maxEmkcCfgLooperTableEntryPtr = (MaxEmkcCfgLooperTableEntry *)entryPtr->ptr;

	/* Free the reserved memory */
	
	__Free(maxEmkcCfgLooperTableEntryPtr);
	__Free(entryPtr);
}

/*****************************************************************************
 *	Function Name	: FreeMaxEmkcCfgLooperTableVector()
 *
 *	Args			: Nothing.
 *
 *	Returns			: Nothing.
 *
 *	Task			: Free the gv_maxEmkcCfgLooperTableVector.
 *
 *	See Also		: FreeMaxEmkcCfgLooperTableEntryMemory().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
void FreeMaxEmkcCfgLooperTableVector()
{
	Node	*nodePtr;
	entry	*entryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside FreeMaxEmkcCfgLooperTableVector() @@@@@\n");

	/*
	 * Each element will be taken from the vector
	 * "gv_maxEmkcCfgLooperTableVector" and their instance and column
	 * values will be freed here.
	 */

	if(gv_maxEmkcCfgLooperTableVector.size == 0)
	{
		return;
	}

	nodePtr = (Node *)ElementAt(&gv_maxEmkcCfgLooperTableVector, 0);

	while (nodePtr)
	{
		entryPtr = (Entry *)nodePtr->refPtr;

		__Free(entryPtr->instance);
		FreeMaxEmkcCfgLooperTableEntryMemory(entryPtr);

		nodePtr = nodePtr->nextPtr;

		DeleteElementAt(&gv_maxEmkcCfgLooperTableVector, 0);
	}
}




#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgloopertablehdlr.c
 *****************************************************************************/
