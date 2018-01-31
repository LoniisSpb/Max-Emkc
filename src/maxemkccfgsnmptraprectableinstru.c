/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgsnmptraprectableinstru.c.
 *
 *  Purpose	: File contains get and set methods for each table column 
 * 			  of the module maxEmkcCfgSnmpTrapRecTable. 
 *
 *			  "Row Description"
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:57 MSK 2018
 *
 *  Docs	: Yes. 
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
#include "genincludes.h"
#include "maxemkccfgsnmptraprectable.h" 

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgSnmpTrapRecRowStatus()
 *
 *	Args			: 1. Pointer of the entry (IN).
 *					  2. Pointer of the variable value length (OUT).
 *					  3. Status which is used to return SNMP Error (OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpTrapRecRowStatus".
 *
 *	Task			: Get method for (table) column maxEmkcCfgSnmpTrapRecRowStatus.
 *
 *					  "Column Description"
 *
 *	See Also		: SetMaxEmkcCfgSnmpTrapRecRowStatus().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgSnmpTrapRecRowStatus(MaxEmkcCfgSnmpTrapRecTableEntry *maxEmkcCfgSnmpTrapRecTableEntryPtr, INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgSnmpTrapRecRowStatus() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgSnmpTrapRecRowStatus" here */

	*varValLen = sizeof(maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpTrapRecRowStatus);
	return (U_CHAR *)&maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpTrapRecRowStatus;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgSnmpTrapRecAddress()
 *
 *	Args			: 1. Pointer of the entry (IN).
 *					  2. Pointer of the variable value length (OUT).
 *					  3. Status which is used to return SNMP Error (OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpTrapRecAddress".
 *
 *	Task			: Get method for (table) column maxEmkcCfgSnmpTrapRecAddress.
 *
 *					  "Column Description"
 *
 *	See Also		: SetMaxEmkcCfgSnmpTrapRecAddress().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgSnmpTrapRecAddress(MaxEmkcCfgSnmpTrapRecTableEntry *maxEmkcCfgSnmpTrapRecTableEntryPtr, INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgSnmpTrapRecAddress() @@@@@\n");

	CHECK_FOR_NULL(maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpTrapRecAddress);

	/* Please provide your code to instrument "maxEmkcCfgSnmpTrapRecAddress" here */

	*varValLen = maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpTrapRecAddressLen;
	return (U_CHAR *)maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpTrapRecAddress;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgSnmpRecCommunity()
 *
 *	Args			: 1. Pointer of the entry (IN).
 *					  2. Pointer of the variable value length (OUT).
 *					  3. Status which is used to return SNMP Error (OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpRecCommunity".
 *
 *	Task			: Get method for (table) column maxEmkcCfgSnmpRecCommunity.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcCfgSnmpRecCommunity().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgSnmpRecCommunity(MaxEmkcCfgSnmpTrapRecTableEntry *maxEmkcCfgSnmpTrapRecTableEntryPtr, INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgSnmpRecCommunity() @@@@@\n");

	CHECK_FOR_NULL(maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpRecCommunity);

	/* Please provide your code to instrument "maxEmkcCfgSnmpRecCommunity" here */

	*varValLen = __Strlen((CHAR *)maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpRecCommunity);
	return (U_CHAR *)maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpRecCommunity;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgSnmpTrapRecVersion()
 *
 *	Args			: 1. Pointer of the entry (IN).
 *					  2. Pointer of the variable value length (OUT).
 *					  3. Status which is used to return SNMP Error (OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpTrapRecVersion".
 *
 *	Task			: Get method for (table) column maxEmkcCfgSnmpTrapRecVersion.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcCfgSnmpTrapRecVersion().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgSnmpTrapRecVersion(MaxEmkcCfgSnmpTrapRecTableEntry *maxEmkcCfgSnmpTrapRecTableEntryPtr, INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgSnmpTrapRecVersion() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgSnmpTrapRecVersion" here */

	*varValLen = sizeof(maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpTrapRecVersion);
	return (U_CHAR *)&maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpTrapRecVersion;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcSnmpTrapRecIndex()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcSnmpTrapRecIndex".
 *
 *	Task			: Set method for (table) column maxEmkcSnmpTrapRecIndex.
 *
 *					  "Column Description"
 *
 *	See Also		: GetMaxEmkcSnmpTrapRecIndex().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcSnmpTrapRecIndex(MaxEmkcCfgSnmpTrapRecTableEntry *maxEmkcCfgSnmpTrapRecTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	U_INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcSnmpTrapRecIndex() @@@@@\n");

	value = (* ((U_INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		if((value < 0) || ( value > 4))
		{
			*status = SNMP_ERR_WRONGLENGTH;
			return NULL;
		}
	}
	else
	{
		maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcSnmpTrapRecIndex = value;
		/* Please provide your code to instrument "maxEmkcSnmpTrapRecIndex" here */
	}


	if (maxEmkcCfgSnmpTrapRecTableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = sizeof(maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcSnmpTrapRecIndex);
	return (U_CHAR *)&maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcSnmpTrapRecIndex;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgSnmpTrapRecRowStatus()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpTrapRecRowStatus".
 *
 *	Task			: Set method for (table) column maxEmkcCfgSnmpTrapRecRowStatus.
 *
 *					  "Column Description"
 *
 *	See Also		: GetMaxEmkcCfgSnmpTrapRecRowStatus().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgSnmpTrapRecRowStatus(MaxEmkcCfgSnmpTrapRecTableEntry *maxEmkcCfgSnmpTrapRecTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	INT32	value;
	CHAR	retVal;
	U_CHAR	presentState;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgSnmpTrapRecRowStatus() @@@@@\n");

	if(maxEmkcCfgSnmpTrapRecTableEntryPtr == NULL)
	{
		presentState = SNMP_ROW_NONEXISTENT;
	}
	else
	{
		presentState = maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpTrapRecRowStatus;
	}

	if(varVal == NULL)

	{

	return NULL;

	}

	value = (* ((INT32*)(varVal)));

	
	retVal = SUCCESS;

	if(*status == VALIDATE)
	{
		retVal = IsValidRowStatus(presentState, (U_CHAR)value, status);
		if(retVal == FAILURE)
		{
			DEBUGMSG1("Wrong value for RowStatus Column !!!\n");
			return NULL;
		}
	}
	else
	{
		retVal = UpdateRowStatus(presentState, (U_CHAR)value, status);
		maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpTrapRecRowStatus = retVal;
		/* Please provide your code to instrument "maxEmkcCfgSnmpTrapRecRowStatus" here */
	}


	if (maxEmkcCfgSnmpTrapRecTableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = sizeof(maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpTrapRecRowStatus);
	return (U_CHAR *)&maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpTrapRecRowStatus;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgSnmpTrapRecAddress()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpTrapRecAddress".
 *
 *	Task			: Set method for (table) column maxEmkcCfgSnmpTrapRecAddress.
 *
 *					  "Column Description"
 *
 *	See Also		: GetMaxEmkcCfgSnmpTrapRecAddress().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgSnmpTrapRecAddress(MaxEmkcCfgSnmpTrapRecTableEntry *maxEmkcCfgSnmpTrapRecTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the column "maxEmkcCfgSnmpTrapRecAddress" will be freed
	 * and reallocated here.
	 */

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgSnmpTrapRecAddress() @@@@@\n");

	if (*status == VALIDATE)
	{
		if( *varValLen <= 0 || *varValLen > 15 )
		{
			*status = SNMP_ERR_WRONGLENGTH;
			return NULL;
		}
		if(IsValidIPAddress(varVal, *varValLen) != TRUE )
		{
			*status = SNMP_ERR_WRONGVALUE;
			return NULL;
		}
	}
	else
	{
		/* Set the maxEmkcCfgSnmpTrapRecAddress column variable */
		ReallocateAndSetString(
					(U_CHAR **)&maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpTrapRecAddress,
					varVal, *varValLen);
		maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpTrapRecAddressLen = *varValLen;

		/* Please provide your code to instrument "maxEmkcCfgSnmpTrapRecAddress" here */
	}

	if (maxEmkcCfgSnmpTrapRecTableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpTrapRecAddressLen;

	return maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpTrapRecAddress;
}
/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgSnmpRecCommunity()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpRecCommunity".
 *
 *	Task			: Set method for (table) column maxEmkcCfgSnmpRecCommunity.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcCfgSnmpRecCommunity().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgSnmpRecCommunity(MaxEmkcCfgSnmpTrapRecTableEntry *maxEmkcCfgSnmpTrapRecTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the column "maxEmkcCfgSnmpRecCommunity" will be freed
	 * and reallocated here.
	 */

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgSnmpRecCommunity() @@@@@\n");

	if (*status == VALIDATE)
	{
		if( *varValLen  > 255)
		{
			*status = SNMP_ERR_WRONGLENGTH;
			return NULL;
		}
	}
	else
	{
		/* Set the maxEmkcCfgSnmpRecCommunity column variable */
		ReallocateAndSetString(
					(U_CHAR **)&maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpRecCommunity,
					varVal, *varValLen);

		/* Please provide your code to instrument "maxEmkcCfgSnmpRecCommunity" here */
	}

	if (maxEmkcCfgSnmpTrapRecTableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = __Strlen((CHAR *)maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpRecCommunity);
	return (U_CHAR *)maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpRecCommunity;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgSnmpTrapRecVersion()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpTrapRecVersion".
 *
 *	Task			: Set method for (table) column maxEmkcCfgSnmpTrapRecVersion.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcCfgSnmpTrapRecVersion().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgSnmpTrapRecVersion(MaxEmkcCfgSnmpTrapRecTableEntry *maxEmkcCfgSnmpTrapRecTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgSnmpTrapRecVersion() @@@@@\n");

	if(varVal == NULL)

	{

	return NULL;

	}

	value = (* ((INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		if(!((value == 1) || (value == 2) || (value == 3)))
		{
			*status = SNMP_ERR_WRONGVALUE;
			return NULL;
		}
	}
	else
	{
		maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpTrapRecVersion = value;
		/* Please provide your code to instrument "maxEmkcCfgSnmpTrapRecVersion" here */
	}


	if (maxEmkcCfgSnmpTrapRecTableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = sizeof(maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpTrapRecVersion);
	return (U_CHAR *)&maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpTrapRecVersion;
}


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgsnmptraprectableinstru.c
 *****************************************************************************/
