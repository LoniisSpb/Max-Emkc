/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgmeasurednetworktableinstru.c.
 *
 *  Purpose	: File contains get and set methods for each table column 
 * 			  of the module maxEmkcCfgMeasuredNetworkTable. 
 *
 *			  "Row Description"
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:49 MSK 2018
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
#include "maxemkccfgmeasurednetworktable.h" 

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgMeasNetTableRowStatus()
 *
 *	Args			: 1. Pointer of the entry (IN).
 *					  2. Pointer of the variable value length (OUT).
 *					  3. Status which is used to return SNMP Error (OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgMeasNetTableRowStatus".
 *
 *	Task			: Get method for (table) column maxEmkcCfgMeasNetTableRowStatus.
 *
 *					  "Row Status"
 *
 *	See Also		: SetMaxEmkcCfgMeasNetTableRowStatus().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgMeasNetTableRowStatus(MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr, INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgMeasNetTableRowStatus() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgMeasNetTableRowStatus" here */

	*varValLen = sizeof(maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetTableRowStatus);
	return (U_CHAR *)&maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetTableRowStatus;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgMeasNetAddressingType()
 *
 *	Args			: 1. Pointer of the entry (IN).
 *					  2. Pointer of the variable value length (OUT).
 *					  3. Status which is used to return SNMP Error (OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgMeasNetAddressingType".
 *
 *	Task			: Get method for (table) column maxEmkcCfgMeasNetAddressingType.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcCfgMeasNetAddressingType().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgMeasNetAddressingType(MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr, INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgMeasNetAddressingType() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgMeasNetAddressingType" here */

	*varValLen = sizeof(maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetAddressingType);
	return (U_CHAR *)&maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetAddressingType;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgMeasNetDestMac()
 *
 *	Args			: 1. Pointer of the entry (IN).
 *					  2. Pointer of the variable value length (OUT).
 *					  3. Status which is used to return SNMP Error (OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgMeasNetDestMac".
 *
 *	Task			: Get method for (table) column maxEmkcCfgMeasNetDestMac.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcCfgMeasNetDestMac().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgMeasNetDestMac(MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr, INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgMeasNetDestMac() @@@@@\n");

	CHECK_FOR_NULL(maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestMac);

	/* Please provide your code to instrument "maxEmkcCfgMeasNetDestMac" here */

	*varValLen = maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestMacLen;
	return (U_CHAR *)maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestMac;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgMeasNetDestIp()
 *
 *	Args			: 1. Pointer of the entry (IN).
 *					  2. Pointer of the variable value length (OUT).
 *					  3. Status which is used to return SNMP Error (OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgMeasNetDestIp".
 *
 *	Task			: Get method for (table) column maxEmkcCfgMeasNetDestIp.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcCfgMeasNetDestIp().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgMeasNetDestIp(MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr, INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgMeasNetDestIp() @@@@@\n");

	CHECK_FOR_NULL(maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestIp);

	/* Please provide your code to instrument "maxEmkcCfgMeasNetDestIp" here */

	*varValLen = maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestIpLen;
	return (U_CHAR *)maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestIp;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgMeasNetSourcePort()
 *
 *	Args			: 1. Pointer of the entry (IN).
 *					  2. Pointer of the variable value length (OUT).
 *					  3. Status which is used to return SNMP Error (OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgMeasNetSourcePort".
 *
 *	Task			: Get method for (table) column maxEmkcCfgMeasNetSourcePort.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcCfgMeasNetSourcePort().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgMeasNetSourcePort(MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr, INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgMeasNetSourcePort() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgMeasNetSourcePort" here */

	*varValLen = sizeof(maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetSourcePort);
	return (U_CHAR *)&maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetSourcePort;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgMeasNetDestPort()
 *
 *	Args			: 1. Pointer of the entry (IN).
 *					  2. Pointer of the variable value length (OUT).
 *					  3. Status which is used to return SNMP Error (OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgMeasNetDestPort".
 *
 *	Task			: Get method for (table) column maxEmkcCfgMeasNetDestPort.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcCfgMeasNetDestPort().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgMeasNetDestPort(MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr, INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgMeasNetDestPort() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgMeasNetDestPort" here */

	*varValLen = sizeof(maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestPort);
	return (U_CHAR *)&maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestPort;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgMeasNetTosDscp()
 *
 *	Args			: 1. Pointer of the entry (IN).
 *					  2. Pointer of the variable value length (OUT).
 *					  3. Status which is used to return SNMP Error (OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgMeasNetTosDscp".
 *
 *	Task			: Get method for (table) column maxEmkcCfgMeasNetTosDscp.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcCfgMeasNetTosDscp().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgMeasNetTosDscp(MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr, INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgMeasNetTosDscp() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgMeasNetTosDscp" here */

	*varValLen = sizeof(maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetTosDscp);
	return (U_CHAR *)&maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetTosDscp;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgMeasNetTableIndex()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgMeasNetTableIndex".
 *
 *	Task			: Set method for (table) column maxEmkcCfgMeasNetTableIndex.
 *
 *					  "Column 0 is not saved to agent flash.
 *					  Columns >0 is saved to agent flash."
 *
 *	See Also		: GetMaxEmkcCfgMeasNetTableIndex().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgMeasNetTableIndex(MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	U_INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgMeasNetTableIndex() @@@@@\n");

	value = (* ((U_INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		/* Extra Checkings can be done here */
	}
	else
	{
		maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetTableIndex = value;
		/* Please provide your code to instrument "maxEmkcCfgMeasNetTableIndex" here */
	}


	if (maxEmkcCfgMeasuredNetworkTableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = sizeof(maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetTableIndex);
	return (U_CHAR *)&maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetTableIndex;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgMeasNetTableRowStatus()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgMeasNetTableRowStatus".
 *
 *	Task			: Set method for (table) column maxEmkcCfgMeasNetTableRowStatus.
 *
 *					  "Row Status"
 *
 *	See Also		: GetMaxEmkcCfgMeasNetTableRowStatus().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgMeasNetTableRowStatus(MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	INT32	value;
	CHAR	retVal;
	U_CHAR	presentState;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgMeasNetTableRowStatus() @@@@@\n");

	if(maxEmkcCfgMeasuredNetworkTableEntryPtr == NULL)
	{
		presentState = SNMP_ROW_NONEXISTENT;
	}
	else
	{
		presentState = maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetTableRowStatus;
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
		maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetTableRowStatus = retVal;
		/* Please provide your code to instrument "maxEmkcCfgMeasNetTableRowStatus" here */
	}


	if (maxEmkcCfgMeasuredNetworkTableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = sizeof(maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetTableRowStatus);
	return (U_CHAR *)&maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetTableRowStatus;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgMeasNetAddressingType()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgMeasNetAddressingType".
 *
 *	Task			: Set method for (table) column maxEmkcCfgMeasNetAddressingType.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcCfgMeasNetAddressingType().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgMeasNetAddressingType(MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgMeasNetAddressingType() @@@@@\n");

	if(varVal == NULL)

	{

	return NULL;

	}

	value = (* ((INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		if(!((value == 2) || (value == 3)))
		{
			*status = SNMP_ERR_WRONGVALUE;
			return NULL;
		}
	}
	else
	{
		maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetAddressingType = value;
		/* Please provide your code to instrument "maxEmkcCfgMeasNetAddressingType" here */
	}


	if (maxEmkcCfgMeasuredNetworkTableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = sizeof(maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetAddressingType);
	return (U_CHAR *)&maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetAddressingType;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgMeasNetDestMac()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgMeasNetDestMac".
 *
 *	Task			: Set method for (table) column maxEmkcCfgMeasNetDestMac.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcCfgMeasNetDestMac().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgMeasNetDestMac(MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the column "maxEmkcCfgMeasNetDestMac" will be freed
	 * and reallocated here.
	 */

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgMeasNetDestMac() @@@@@\n");

	if (*status == VALIDATE)
	{
		if( *varValLen  > 6)
		{
			*status = SNMP_ERR_WRONGLENGTH;
			return NULL;
		}
	}
	else
	{
		/* Set the maxEmkcCfgMeasNetDestMac column variable */
		ReallocateAndSetString(
					(U_CHAR **)&maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestMac,
					varVal, *varValLen);
		maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestMacLen = *varValLen;

		/* Please provide your code to instrument "maxEmkcCfgMeasNetDestMac" here */
	}

	if (maxEmkcCfgMeasuredNetworkTableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestMacLen;
	return (U_CHAR *)maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestMac;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgMeasNetDestIp()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgMeasNetDestIp".
 *
 *	Task			: Set method for (table) column maxEmkcCfgMeasNetDestIp.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcCfgMeasNetDestIp().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgMeasNetDestIp(MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the column "maxEmkcCfgMeasNetDestIp" will be freed
	 * and reallocated here.
	 */

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgMeasNetDestIp() @@@@@\n");

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
		/* Set the maxEmkcCfgMeasNetDestIp column variable */
		ReallocateAndSetString(
					(U_CHAR **)&maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestIp,
					varVal, *varValLen);
		maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestIpLen = *varValLen;

		/* Please provide your code to instrument "maxEmkcCfgMeasNetDestIp" here */
	}

	if (maxEmkcCfgMeasuredNetworkTableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestIpLen;

	return maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestIp;
}
/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgMeasNetSourcePort()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgMeasNetSourcePort".
 *
 *	Task			: Set method for (table) column maxEmkcCfgMeasNetSourcePort.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcCfgMeasNetSourcePort().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgMeasNetSourcePort(MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	U_INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgMeasNetSourcePort() @@@@@\n");

	value = (* ((U_INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		if((value < 0) || ( value > 65535))
		{
			*status = SNMP_ERR_WRONGLENGTH;
			return NULL;
		}
	}
	else
	{
		maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetSourcePort = value;
		/* Please provide your code to instrument "maxEmkcCfgMeasNetSourcePort" here */
	}


	if (maxEmkcCfgMeasuredNetworkTableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = sizeof(maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetSourcePort);
	return (U_CHAR *)&maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetSourcePort;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgMeasNetDestPort()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgMeasNetDestPort".
 *
 *	Task			: Set method for (table) column maxEmkcCfgMeasNetDestPort.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcCfgMeasNetDestPort().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgMeasNetDestPort(MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	U_INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgMeasNetDestPort() @@@@@\n");

	value = (* ((U_INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		if((value < 0) || ( value > 65535))
		{
			*status = SNMP_ERR_WRONGLENGTH;
			return NULL;
		}
	}
	else
	{
		maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestPort = value;
		/* Please provide your code to instrument "maxEmkcCfgMeasNetDestPort" here */
	}


	if (maxEmkcCfgMeasuredNetworkTableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = sizeof(maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestPort);
	return (U_CHAR *)&maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetDestPort;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgMeasNetTosDscp()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgMeasNetTosDscp".
 *
 *	Task			: Set method for (table) column maxEmkcCfgMeasNetTosDscp.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcCfgMeasNetTosDscp().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgMeasNetTosDscp(MaxEmkcCfgMeasuredNetworkTableEntry *maxEmkcCfgMeasuredNetworkTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	U_INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgMeasNetTosDscp() @@@@@\n");

	value = (* ((U_INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		if((value < 0) || ( value > 255))
		{
			*status = SNMP_ERR_WRONGLENGTH;
			return NULL;
		}
	}
	else
	{
		maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetTosDscp = value;
		/* Please provide your code to instrument "maxEmkcCfgMeasNetTosDscp" here */
	}


	if (maxEmkcCfgMeasuredNetworkTableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = sizeof(maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetTosDscp);
	return (U_CHAR *)&maxEmkcCfgMeasuredNetworkTableEntryPtr->maxEmkcCfgMeasNetTosDscp;
}


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgmeasurednetworktableinstru.c
 *****************************************************************************/
