/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File		: maxemkccfgrfc2544tablehdlr.c.
 *
 *  Purpose		: To handle the requests from the manager for the 
 * 				  module maxemkccfgrfc2544table. 
 *
 *				  "Description" 
 *
 *				  "Row Description"
 *
 *  Author		: WebNMS Agent Toolkit C Edition 6
 *
 *  Date		: Fri Jan 26 16:40:34 MSK 2018
 *
 *  See Also	: maxemkccfgrfc2544tableftov.c,
 *				  maxemkccfgrfc2544tableinstru.c,
 *				  maxemkccfgrfc2544table.h,
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
#define MAXEMKCCFGRFC2544TABLE_PUBLIC
#include "maxemkccfgrfc2544table.h" 

/* This tree cell is used to register with agent.*/
TreeCell gv_maxEmkcCfgRfc2544TableCell=
	{
		"MAX-EMKC:MaxEmkcCfgRfc2544Table",
		SNMP_VERSION_2c, gv_maxEmkcCfgRfc2544TableOid,
		MAXEMKCCFGRFC2544TABLE_OID_LEN, TABLE,
		gv_maxEmkcCfgRfc2544TableSubIdList,
		MAXEMKCCFGRFC2544TABLE_SUBID_LEN,
		gv_maxEmkcCfgRfc2544TableSubIdListAccess,
		gv_maxEmkcCfgRfc2544TableSubIdListDataTypes,
		MAXEMKCCFGRFC2544TABLE_MAXEMKCCFGRFC2544TABLEROWSTATUS,
		MaxEmkcCfgRfc2544TableProcessRequests,
		MaxEmkcCfgRfc2544TableProcessReadReq,
		MaxEmkcCfgRfc2544TableProcessWriteReq,
		UpdateMaxEmkcCfgRfc2544Table,
		NULL, NULL
	};

/*****************************************************************************
 *	Function Name	: InitMaxEmkcCfgRfc2544Table()
 *
 *	Args			: Nothing.
 *
 *	Returns			: Nothing.
 *
 *	Task			: It will register the treeCell with agent and initialize
 * 					  all data structures related to the module
 * 					  "maxEmkcCfgRfc2544Table".
 *
 *	See Also		: CreateAndAddNewMaxEmkcCfgRfc2544TableEntry().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
void InitMaxEmkcCfgRfc2544Table(void)
{

	DEBUGMSG1("\n\t@@@@@ Inside InitMaxEmkcCfgRfc2544Table() @@@@@\n");

	/* Register the oid as a listener to the agent. */
	if (RegisterOID(&gv_maxEmkcCfgRfc2544TableCell) == FAILURE)
	{
		DEBUGMSG1("Unable to register for the module maxEmkcCfgRfc2544Table\n");
		return;
	}

	/* Initialize the vector */
	InitVector(&gv_maxEmkcCfgRfc2544TableVector, &gfptr_sortFuncPtr);

#ifdef FILE_TO_VECTOR
	/* Read  all the entries of "maxEmkcCfgRfc2544Table" from the file */
	ReadFromMaxEmkcCfgRfc2544TableFile();
#endif

	if (gv_maxEmkcCfgRfc2544TableVector.size == 0)
	{
		/* Add the created instance to the vector gv_maxEmkcCfgRfc2544TableVector. */
		CreateAndAddNewMaxEmkcCfgRfc2544TableEntry(1, 1);

#ifdef FILE_TO_VECTOR
	/* Write all the entries of "maxEmkcCfgRfc2544Table" into the file */
	WriteToMaxEmkcCfgRfc2544TableFile();
#endif
	}
}

/*****************************************************************************
 *	Function Name	: CreateAndAddNewMaxEmkcCfgRfc2544TableEntry()
 *
 *	Args			: 1. Table column maxEmkcCfgRfc2544TableIndex (IN).
 *					  2. Table column maxEmkcCfgRfc2544TableRowStatus (IN).
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
CHAR CreateAndAddNewMaxEmkcCfgRfc2544TableEntry(U_INT32 maxEmkcCfgRfc2544TableIndex, INT32 maxEmkcCfgRfc2544TableRowStatus)
{
	OID		*inst;
	INT32	instLen;
	CHAR	retVal;

	DEBUGMSG1("\n\t@@@@@ Inside CreateAndAddNewMaxEmkcCfgRfc2544TableEntry() @@@@@\n");

	inst = CreateMaxEmkcCfgRfc2544TableInstance(
									&instLen, maxEmkcCfgRfc2544TableIndex);

	CHECK_NULL_RETURN_ERROR(inst);

	/* Add the created instance to the vector gv_maxEmkcCfgRfc2544TableVector. */
	retVal = CreateAndAddMaxEmkcCfgRfc2544TableEntry(
				inst, instLen, maxEmkcCfgRfc2544TableIndex,
				maxEmkcCfgRfc2544TableRowStatus);

	/* Free the reserved memory */
	__Free(inst);
	return retVal;
}

/*****************************************************************************
 *	Function Name	: CreateAndAddMaxEmkcCfgRfc2544TableEntry()
 *
 *	Args			: 1. Instance Oid (IN).
 *					  2. Instance Oid Length (IN).
 *					  3. Table column maxEmkcCfgRfc2544TableIndex (IN).
 *					  4. Table column maxEmkcCfgRfc2544TableRowStatus (IN).
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
CHAR CreateAndAddMaxEmkcCfgRfc2544TableEntry(OID *instance, INT32 instanceLen, U_INT32 maxEmkcCfgRfc2544TableIndex, INT32 maxEmkcCfgRfc2544TableRowStatus)
{

	/*
	 * Instance			: It has the value. No Need to allocate memory.
	 */

	Node	*nodePtr;
	Entry	*entryPtr;
	MaxEmkcCfgRfc2544TableEntry *maxEmkcCfgRfc2544TableEntryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside CreateAndAddMaxEmkcCfgRfc2544TableEntry() @@@@@\n");

	if (!( (maxEmkcCfgRfc2544TableRowStatus == SNMP_ROW_ACTIVE) || 
		(maxEmkcCfgRfc2544TableRowStatus == SNMP_ROW_NOTINSERVICE) || 
		(maxEmkcCfgRfc2544TableRowStatus == SNMP_ROW_NOTREADY) || 
		(maxEmkcCfgRfc2544TableRowStatus == SNMP_ROW_CREATEANDWAIT) ))
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

	maxEmkcCfgRfc2544TableEntryPtr = (MaxEmkcCfgRfc2544TableEntry *)(__Calloc(1,
											sizeof(MaxEmkcCfgRfc2544TableEntry)));

	if(maxEmkcCfgRfc2544TableEntryPtr == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(entryPtr->instance);
		__Free(entryPtr);
		return MEMORY_ALLOCATION_FAILURE;
	}

	/* Assigning the index column 1  "maxEmkcCfgRfc2544TableIndex"  of type  " U_INT32  " */
	maxEmkcCfgRfc2544TableEntryPtr->maxEmkcCfgRfc2544TableIndex = maxEmkcCfgRfc2544TableIndex;

	/* Assigning the column 2  "maxEmkcCfgRfc2544TableRowStatus"  of type  " INT32  " */
	maxEmkcCfgRfc2544TableEntryPtr->maxEmkcCfgRfc2544TableRowStatus = maxEmkcCfgRfc2544TableRowStatus;


	entryPtr->ptr = maxEmkcCfgRfc2544TableEntryPtr;
	nodePtr = (Node *)(__Calloc(1,sizeof(Node)));

	if(nodePtr == NULL)
	{
		ERRMSG1("Unable to allocate the memory\n");
		__Free(entryPtr->instance);
		FreeMaxEmkcCfgRfc2544TableEntryMemory(entryPtr);
		return MEMORY_ALLOCATION_FAILURE;
	}

	nodePtr->refPtr = entryPtr;

	if (AddElement(&gv_maxEmkcCfgRfc2544TableVector, nodePtr) == FAILURE)
	{
		__Free(entryPtr->instance);
		FreeMaxEmkcCfgRfc2544TableEntryMemory(entryPtr);
		__Free(nodePtr);
	}

	return SUCCESS;

}
/*****************************************************************************
 *	Function Name	: CreateMaxEmkcCfgRfc2544TableInstance()
 *
 *	Args			: 1. Instance Oid Length(IN/OUT).
 *					  2. Table column maxEmkcCfgRfc2544TableIndex (IN).
 *
 *	Returns			: Nothing.
 *
 *	Task			: This method is called from the method
 *					  CreateAndAddNewMaxEmkcCfgRfc2544TableTableEntry().
 *					  It is used to create a oid representation of the instance
 *					  value by taking table index columns value as input.
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
OID *CreateMaxEmkcCfgRfc2544TableInstance(INT32 *instanceLen, U_INT32 maxEmkcCfgRfc2544TableIndex)
{
	OID		*inst;
	INT32	instLen;

	DEBUGMSG1("\n\t@@@@@ Inside CreateMaxEmkcCfgRfc2544TableInstance() @@@@@\n");

	/* The index is an integer */
	instLen = 1;
	inst = (OID *)__Calloc(sizeof(OID), instLen);
	CHECK_NULL_RETURN_NULL(inst);
	inst[0] = maxEmkcCfgRfc2544TableIndex;

	*instanceLen = instLen;
	return inst;
}
/*****************************************************************************
 *	Function Name	: MaxEmkcCfgRfc2544TableProcessRequests()
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
CHAR MaxEmkcCfgRfc2544TableProcessRequests(INT32 pduVersion, U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex)
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

	DEBUGMSG1("\n\t@@@@@ Inside MaxEmkcCfgRfc2544TableProcessRequests() @@@@@\n");

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
								MAXEMKCCFGRFC2544TABLE_OID_LEN+2, inst);

#ifdef DEBUG
		DEBUGMSG1("The received instance is \n");
		PRINTOID(inst,instLen);
#endif

		nodePtr = nodePtr->nextPtr;
	}

	return SUCCESS;
}

/*****************************************************************************
 *	Function Name	: MaxEmkcCfgRfc2544TableProcessReadReq()
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
U_CHAR *MaxEmkcCfgRfc2544TableProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status)
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
	MaxEmkcCfgRfc2544TableEntry *maxEmkcCfgRfc2544TableEntryPtr;


	DEBUGMSG1("\n\t@@@@@ Inside MaxEmkcCfgRfc2544TableProcessReadReq() @@@@@\n");

	retPtr = NULL;
	maxEmkcCfgRfc2544TableEntryPtr = NULL;

	/*
	 * It will retrieve the entry for the given instance 
	 * from the vector :- gv_maxEmkcCfgRfc2544TableVector
	 */

	entryPtr = GetEntry(pduType, reqOid, reqOidLen, gv_maxEmkcCfgRfc2544TableOid,
							MAXEMKCCFGRFC2544TABLE_OID_LEN,
							&gv_maxEmkcCfgRfc2544TableVector,
							gv_maxEmkcCfgRfc2544TableSubIdList,
							MAXEMKCCFGRFC2544TABLE_SUBID_LEN);

	if (entryPtr == NULL)
	{
		/* end of table or group is reached */
		DEBUGMSG1("The given instance is not available in the table\n");
		*status = SNMP_NOSUCHINSTANCE;
		return NULL;
	}

	maxEmkcCfgRfc2544TableEntryPtr = (MaxEmkcCfgRfc2544TableEntry *)(entryPtr->ptr);

	column = reqOid[MAXEMKCCFGRFC2544TABLE_OID_LEN+1];

	DEBUGMSG2("The column value is %ld\n", column);

	*status = SNMP_ERR_NOERROR;

	switch(column)
	{
		case	MAXEMKCCFGRFC2544TABLE_MAXEMKCCFGRFC2544TABLEINDEX:
				*status = SNMP_ERR_NOACCESS;
				retPtr =  NULL;
				break;

		case	MAXEMKCCFGRFC2544TABLE_MAXEMKCCFGRFC2544TABLEROWSTATUS:
				retPtr = GetMaxEmkcCfgRfc2544TableRowStatus(maxEmkcCfgRfc2544TableEntryPtr,
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
 *	Function Name	: MaxEmkcCfgRfc2544TableProcessWriteReq()
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
U_CHAR *MaxEmkcCfgRfc2544TableProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
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
	U_INT32	maxEmkcCfgRfc2544TableIndex_IndVal;
	INT32	maxEmkcCfgRfc2544TableIndex_IndValLen;
	OID	*delInst;
	INT32	delInstLen;
	INT16	instLen;
	U_CHAR	newRowEntryFlag;
	U_CHAR	newRowFlag;
	U_CHAR	*retPtr;
	Entry	*entryPtr;
	Entry	*delEntryPtr;

	MaxEmkcCfgRfc2544TableEntry *maxEmkcCfgRfc2544TableEntryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside MaxEmkcCfgRfc2544TableProcessWriteReq() @@@@@\n");

	retPtr = NULL;
	newRowEntryFlag = UNSET;
	newRowFlag = FALSE;
	maxEmkcCfgRfc2544TableEntryPtr = NULL;

	/* Delete the given instance from the vector */
	if (*status == DELETE_ENTRY)
	{
		instLen = GetInstance(reqOid, reqOidLen,MAXEMKCCFGRFC2544TABLE_OID_LEN+2, inst);
		DEBUGMSG1("Deleting the instance.....   ");
		PRINTOID(inst,instLen);
		entryPtr = DeleteEntryUsingInstance(&gv_maxEmkcCfgRfc2544TableVector, inst,
				instLen);
		/* Deleting an instance from the table */
		if (entryPtr != NULL)
		{
			FreeMaxEmkcCfgRfc2544TableEntryMemory(entryPtr);
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
	 * from the vector :- gv_maxEmkcCfgRfc2544TableVector
	 */

	entryPtr = GetEntry(SNMP_MSG_SET, reqOid, &reqOidLen,
				gv_maxEmkcCfgRfc2544TableOid, MAXEMKCCFGRFC2544TABLE_OID_LEN,
				&gv_maxEmkcCfgRfc2544TableVector, gv_maxEmkcCfgRfc2544TableSubIdList,
				MAXEMKCCFGRFC2544TABLE_SUBID_LEN);

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
		instLen = GetInstance(reqOid, reqOidLen, MAXEMKCCFGRFC2544TABLE_OID_LEN + 2, inst);

		/* Checking the validity of the given instance */
		if(CheckInstances(gv_maxEmkcCfgRfc2544TableIndexDataTypes, NO,
					MAXEMKCCFGRFC2544TABLE_INDEX_LEN, inst, instLen) == FALSE)
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
							&gv_maxEmkcCfgRfc2544TableVector, inst, instLen);

			CHECK_NULL_SET_STATUS(entryPtr);

			entryPtr->ptr = (MaxEmkcCfgRfc2544TableEntry *)__Calloc(1,
								sizeof(MaxEmkcCfgRfc2544TableEntry));

			CHECK_NULL_SET_STATUS_AND_FREE(entryPtr->ptr);

			maxEmkcCfgRfc2544TableEntryPtr = (MaxEmkcCfgRfc2544TableEntry *)(entryPtr->ptr);

			/* This part will assign value for the index columns */ 
			maxEmkcCfgRfc2544TableEntryPtr->maxEmkcCfgRfc2544TableIndex = inst[0];

			/*This part will add default values for the remaining columns */
			maxEmkcCfgRfc2544TableEntryPtr->maxEmkcCfgRfc2544TableRowStatus = 
											SNMP_ROW_NONEXISTENT;

		}
		else
		{
			maxEmkcCfgRfc2544TableIndex_IndVal = inst[0];
			retPtr = (U_CHAR *)ConvertToStringFromUnsignedInteger((U_INT32 *)&maxEmkcCfgRfc2544TableIndex_IndVal,&maxEmkcCfgRfc2544TableIndex_IndValLen);
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
		maxEmkcCfgRfc2544TableEntryPtr = (MaxEmkcCfgRfc2544TableEntry *)(entryPtr->ptr);
	}


	column = reqOid[MAXEMKCCFGRFC2544TABLE_OID_LEN+1];

	DEBUGMSG2("The column value is %ld\n", column);

	switch(column)
	{
		case	MAXEMKCCFGRFC2544TABLE_MAXEMKCCFGRFC2544TABLEINDEX:
				*status = SNMP_ERR_NOACCESS;
				retPtr =  NULL;
				break;

		case	MAXEMKCCFGRFC2544TABLE_MAXEMKCCFGRFC2544TABLEROWSTATUS:
				retPtr = SetMaxEmkcCfgRfc2544TableRowStatus(maxEmkcCfgRfc2544TableEntryPtr,
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

		delInst = CreateMaxEmkcCfgRfc2544TableInstance(
					&delInstLen, maxEmkcCfgRfc2544TableEntryPtr->maxEmkcCfgRfc2544TableIndex);
		delEntryPtr = DeleteEntryUsingInstance(&gv_maxEmkcCfgRfc2544TableVector, delInst, delInstLen);
		/* Deleting an instance from the table */
		if (delEntryPtr != NULL)
		{
			FreeMaxEmkcCfgRfc2544TableEntryMemory(delEntryPtr);
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
 *	Function Name	: GetMaxEmkcCfgRfc2544TableInfo()
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
Vector *GetMaxEmkcCfgRfc2544TableInfo(INT32 startIdx, INT32 numOfRows, INT32 *flag)
{
	INT32 remRows;

	DEBUGMSG1("\n\t@@@@@ Inside *GetMaxEmkcCfgRfc2544TableInfo() @@@@@\n");

	remRows = gv_maxEmkcCfgRfc2544TableVector.size - startIdx - numOfRows;

	/*
	 * This will check for the presence of remaining rows and will set
	 * the flag variable if present.
	 */

	if (remRows > 0)
	{
		TRACEMSG2("The number of rows remaining is %d \n", remRows);
		*flag = TRUE;
	}

	return &gv_maxEmkcCfgRfc2544TableVector;
}

/*****************************************************************************
 *	Function Name	: UpdateMaxEmkcCfgRfc2544Table()
 *
 *	Args			: command type.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: This method will be called from the agent api after
 *					  successful SET/GET/GET-NEXT operation, in order to
 *					  update the original or user application's data
 *					  structrue with the changes made to MaxEmkcCfgRfc2544Table.
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
CHAR UpdateMaxEmkcCfgRfc2544Table(U_CHAR command)
{
	CHAR retVal;

	Node	*nodePtr;
	Entry	*entryPtr;
	Node	*tempNodePtr;
	MaxEmkcCfgRfc2544TableEntry *maxEmkcCfgRfc2544TableEntryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside UpdateMaxEmkcCfgRfc2544Table() @@@@@\n");

	retVal = SUCCESS;

	if(command == SNMP_MSG_SET) 
	{
		if(gv_maxEmkcCfgRfc2544TableVector.size > 0 )
		{
			nodePtr = ElementAt(&gv_maxEmkcCfgRfc2544TableVector, 0);

			while(nodePtr)
			{
				entryPtr = (Entry *)nodePtr->refPtr;

				maxEmkcCfgRfc2544TableEntryPtr =
						(MaxEmkcCfgRfc2544TableEntry *)(entryPtr->ptr);

				/*
				 * If the maxEmkcCfgRfc2544TableRowStatus value is ROW_NONEXISTENT then
				 * delete the row from the vector &gv_maxEmkcCfgRfc2544TableVector.
				 */

				if (maxEmkcCfgRfc2544TableEntryPtr->maxEmkcCfgRfc2544TableRowStatus
											== SNMP_ROW_NONEXISTENT)
				{
					__Free(entryPtr->instance);

					FreeMaxEmkcCfgRfc2544TableEntryMemory(entryPtr);

					tempNodePtr = nodePtr->nextPtr;

					DeleteElement(&gv_maxEmkcCfgRfc2544TableVector, nodePtr);

					nodePtr = tempNodePtr;

					continue;
				}
				nodePtr = nodePtr->nextPtr;
			}
		}

#ifdef FILE_TO_VECTOR
		/* Write all the entries of "maxEmkcCfgRfc2544Table" into the file */
		WriteToMaxEmkcCfgRfc2544TableFile();
#endif
	}

	return retVal;
}

/*****************************************************************************
 *	Function Name	: FreeMaxEmkcCfgRfc2544TableEntryMemory()
 *
 *	Args			: 1. Reference of the table entry (IN).
 *
 *	Returns			: Nothing.
 *
 *	Task			: This method is called from
 *					  FreeMaxEmkcCfgRfc2544TableVector(). This method is used
 *					  to free the reserved memory for an entry while deleting
 *					  an entry from the vector. The user can also call this
 *					  method to free a particular entry in the table vector.
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
void FreeMaxEmkcCfgRfc2544TableEntryMemory(Entry *entryPtr)
{
	/*
	 * The entry memory will be freed here including all the allocated columns.
	 */

	MaxEmkcCfgRfc2544TableEntry *maxEmkcCfgRfc2544TableEntryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside FreeMaxEmkcCfgRfc2544TableEntryMemory() @@@@@\n");

	maxEmkcCfgRfc2544TableEntryPtr = (MaxEmkcCfgRfc2544TableEntry *)entryPtr->ptr;

	/* Free the reserved memory */
	
	__Free(maxEmkcCfgRfc2544TableEntryPtr);
	__Free(entryPtr);
}

/*****************************************************************************
 *	Function Name	: FreeMaxEmkcCfgRfc2544TableVector()
 *
 *	Args			: Nothing.
 *
 *	Returns			: Nothing.
 *
 *	Task			: Free the gv_maxEmkcCfgRfc2544TableVector.
 *
 *	See Also		: FreeMaxEmkcCfgRfc2544TableEntryMemory().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
void FreeMaxEmkcCfgRfc2544TableVector()
{
	Node	*nodePtr;
	entry	*entryPtr;

	DEBUGMSG1("\n\t@@@@@ Inside FreeMaxEmkcCfgRfc2544TableVector() @@@@@\n");

	/*
	 * Each element will be taken from the vector
	 * "gv_maxEmkcCfgRfc2544TableVector" and their instance and column
	 * values will be freed here.
	 */

	if(gv_maxEmkcCfgRfc2544TableVector.size == 0)
	{
		return;
	}

	nodePtr = (Node *)ElementAt(&gv_maxEmkcCfgRfc2544TableVector, 0);

	while (nodePtr)
	{
		entryPtr = (Entry *)nodePtr->refPtr;

		__Free(entryPtr->instance);
		FreeMaxEmkcCfgRfc2544TableEntryMemory(entryPtr);

		nodePtr = nodePtr->nextPtr;

		DeleteElementAt(&gv_maxEmkcCfgRfc2544TableVector, 0);
	}
}




#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgrfc2544tablehdlr.c
 *****************************************************************************/
