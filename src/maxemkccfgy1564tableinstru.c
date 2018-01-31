/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgy1564tableinstru.c.
 *
 *  Purpose	: File contains get and set methods for each table column 
 * 			  of the module maxEmkcCfgY1564Table. 
 *
 *			  "Row Description"
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:37 MSK 2018
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
#include "maxemkccfgy1564table.h" 

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgY1564TableRowStatus()
 *
 *	Args			: 1. Pointer of the entry (IN).
 *					  2. Pointer of the variable value length (OUT).
 *					  3. Status which is used to return SNMP Error (OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564TableRowStatus".
 *
 *	Task			: Get method for (table) column maxEmkcCfgY1564TableRowStatus.
 *
 *					  "Column Description"
 *
 *	See Also		: SetMaxEmkcCfgY1564TableRowStatus().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgY1564TableRowStatus(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgY1564TableRowStatus() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgY1564TableRowStatus" here */

	*varValLen = sizeof(maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564TableRowStatus);
	return (U_CHAR *)&maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564TableRowStatus;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgY1564Options()
 *
 *	Args			: 1. Pointer of the entry (IN).
 *					  2. Pointer of the variable value length (OUT).
 *					  3. Status which is used to return SNMP Error (OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564Options".
 *
 *	Task			: Get method for (table) column maxEmkcCfgY1564Options.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcCfgY1564Options().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgY1564Options(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgY1564Options() @@@@@\n");

	CHECK_FOR_NULL(maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Options);

	/* Please provide your code to instrument "maxEmkcCfgY1564Options" here */

	*varValLen = maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564OptionsLen;
	return (U_CHAR *)maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Options;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgY1564ThroughputTestDuration()
 *
 *	Args			: 1. Pointer of the entry (IN).
 *					  2. Pointer of the variable value length (OUT).
 *					  3. Status which is used to return SNMP Error (OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564ThroughputTestDuration".
 *
 *	Task			: Get method for (table) column maxEmkcCfgY1564ThroughputTestDuration.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcCfgY1564ThroughputTestDuration().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgY1564ThroughputTestDuration(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgY1564ThroughputTestDuration() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgY1564ThroughputTestDuration" here */

	*varValLen = sizeof(maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564ThroughputTestDuration);
	return (U_CHAR *)&maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564ThroughputTestDuration;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgY1564TestConfigStepDuration()
 *
 *	Args			: 1. Pointer of the entry (IN).
 *					  2. Pointer of the variable value length (OUT).
 *					  3. Status which is used to return SNMP Error (OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564TestConfigStepDuration".
 *
 *	Task			: Get method for (table) column maxEmkcCfgY1564TestConfigStepDuration.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcCfgY1564TestConfigStepDuration().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgY1564TestConfigStepDuration(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgY1564TestConfigStepDuration() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgY1564TestConfigStepDuration" here */

	*varValLen = sizeof(maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564TestConfigStepDuration);
	return (U_CHAR *)&maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564TestConfigStepDuration;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgY1564LearningTime()
 *
 *	Args			: 1. Pointer of the entry (IN).
 *					  2. Pointer of the variable value length (OUT).
 *					  3. Status which is used to return SNMP Error (OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564LearningTime".
 *
 *	Task			: Get method for (table) column maxEmkcCfgY1564LearningTime.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcCfgY1564LearningTime().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgY1564LearningTime(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgY1564LearningTime() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgY1564LearningTime" here */

	*varValLen = sizeof(maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564LearningTime);
	return (U_CHAR *)&maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564LearningTime;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgY1564Stream1TableRow()
 *
 *	Args			: 1. Pointer of the entry (IN).
 *					  2. Pointer of the variable value length (OUT).
 *					  3. Status which is used to return SNMP Error (OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564Stream1TableRow".
 *
 *	Task			: Get method for (table) column maxEmkcCfgY1564Stream1TableRow.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcCfgY1564Stream1TableRow().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgY1564Stream1TableRow(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgY1564Stream1TableRow() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgY1564Stream1TableRow" here */

	*varValLen = sizeof(maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Stream1TableRow);
	return (U_CHAR *)&maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Stream1TableRow;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgY1564Stream2TableRow()
 *
 *	Args			: 1. Pointer of the entry (IN).
 *					  2. Pointer of the variable value length (OUT).
 *					  3. Status which is used to return SNMP Error (OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564Stream2TableRow".
 *
 *	Task			: Get method for (table) column maxEmkcCfgY1564Stream2TableRow.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcCfgY1564Stream2TableRow().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgY1564Stream2TableRow(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgY1564Stream2TableRow() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgY1564Stream2TableRow" here */

	*varValLen = sizeof(maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Stream2TableRow);
	return (U_CHAR *)&maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Stream2TableRow;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgY1564Stream3TableRow()
 *
 *	Args			: 1. Pointer of the entry (IN).
 *					  2. Pointer of the variable value length (OUT).
 *					  3. Status which is used to return SNMP Error (OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564Stream3TableRow".
 *
 *	Task			: Get method for (table) column maxEmkcCfgY1564Stream3TableRow.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcCfgY1564Stream3TableRow().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgY1564Stream3TableRow(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgY1564Stream3TableRow() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgY1564Stream3TableRow" here */

	*varValLen = sizeof(maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Stream3TableRow);
	return (U_CHAR *)&maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Stream3TableRow;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgY1564Stream4TableRow()
 *
 *	Args			: 1. Pointer of the entry (IN).
 *					  2. Pointer of the variable value length (OUT).
 *					  3. Status which is used to return SNMP Error (OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564Stream4TableRow".
 *
 *	Task			: Get method for (table) column maxEmkcCfgY1564Stream4TableRow.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcCfgY1564Stream4TableRow().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgY1564Stream4TableRow(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgY1564Stream4TableRow() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgY1564Stream4TableRow" here */

	*varValLen = sizeof(maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Stream4TableRow);
	return (U_CHAR *)&maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Stream4TableRow;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgY1564TableIndex()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564TableIndex".
 *
 *	Task			: Set method for (table) column maxEmkcCfgY1564TableIndex.
 *
 *					  "Column 0 is not saved to agent flash.
 *					  Columns >0 is saved to agent flash."
 *
 *	See Also		: GetMaxEmkcCfgY1564TableIndex().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgY1564TableIndex(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	U_INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgY1564TableIndex() @@@@@\n");

	value = (* ((U_INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		/* Extra Checkings can be done here */
	}
	else
	{
		maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564TableIndex = value;
		/* Please provide your code to instrument "maxEmkcCfgY1564TableIndex" here */
	}


	if (maxEmkcCfgY1564TableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = sizeof(maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564TableIndex);
	return (U_CHAR *)&maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564TableIndex;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgY1564TableRowStatus()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564TableRowStatus".
 *
 *	Task			: Set method for (table) column maxEmkcCfgY1564TableRowStatus.
 *
 *					  "Column Description"
 *
 *	See Also		: GetMaxEmkcCfgY1564TableRowStatus().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgY1564TableRowStatus(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	INT32	value;
	CHAR	retVal;
	U_CHAR	presentState;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgY1564TableRowStatus() @@@@@\n");

	if(maxEmkcCfgY1564TableEntryPtr == NULL)
	{
		presentState = SNMP_ROW_NONEXISTENT;
	}
	else
	{
		presentState = maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564TableRowStatus;
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
		maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564TableRowStatus = retVal;
		/* Please provide your code to instrument "maxEmkcCfgY1564TableRowStatus" here */
	}


	if (maxEmkcCfgY1564TableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = sizeof(maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564TableRowStatus);
	return (U_CHAR *)&maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564TableRowStatus;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgY1564Options()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564Options".
 *
 *	Task			: Set method for (table) column maxEmkcCfgY1564Options.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcCfgY1564Options().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgY1564Options(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the column "maxEmkcCfgY1564Options" will be freed
	 * and reallocated here.
	 */

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgY1564Options() @@@@@\n");

	if (*status == VALIDATE)
	{
		/* Extra Checkings can be done here */
	}
	else
	{
		/* Set the maxEmkcCfgY1564Options column variable */
		ReallocateAndSetString(
					(U_CHAR **)&maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Options,
					varVal, *varValLen);
		maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564OptionsLen = *varValLen;

		/* Please provide your code to instrument "maxEmkcCfgY1564Options" here */
	}

	if (maxEmkcCfgY1564TableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564OptionsLen;
	return (U_CHAR *)maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Options;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgY1564ThroughputTestDuration()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564ThroughputTestDuration".
 *
 *	Task			: Set method for (table) column maxEmkcCfgY1564ThroughputTestDuration.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcCfgY1564ThroughputTestDuration().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgY1564ThroughputTestDuration(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	U_INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgY1564ThroughputTestDuration() @@@@@\n");

	value = (* ((U_INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		/* Extra Checkings can be done here */
	}
	else
	{
		maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564ThroughputTestDuration = value;
		/* Please provide your code to instrument "maxEmkcCfgY1564ThroughputTestDuration" here */
	}


	if (maxEmkcCfgY1564TableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = sizeof(maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564ThroughputTestDuration);
	return (U_CHAR *)&maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564ThroughputTestDuration;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgY1564TestConfigStepDuration()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564TestConfigStepDuration".
 *
 *	Task			: Set method for (table) column maxEmkcCfgY1564TestConfigStepDuration.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcCfgY1564TestConfigStepDuration().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgY1564TestConfigStepDuration(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	U_INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgY1564TestConfigStepDuration() @@@@@\n");

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
		maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564TestConfigStepDuration = value;
		/* Please provide your code to instrument "maxEmkcCfgY1564TestConfigStepDuration" here */
	}


	if (maxEmkcCfgY1564TableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = sizeof(maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564TestConfigStepDuration);
	return (U_CHAR *)&maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564TestConfigStepDuration;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgY1564LearningTime()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564LearningTime".
 *
 *	Task			: Set method for (table) column maxEmkcCfgY1564LearningTime.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcCfgY1564LearningTime().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgY1564LearningTime(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	U_INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgY1564LearningTime() @@@@@\n");

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
		maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564LearningTime = value;
		/* Please provide your code to instrument "maxEmkcCfgY1564LearningTime" here */
	}


	if (maxEmkcCfgY1564TableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = sizeof(maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564LearningTime);
	return (U_CHAR *)&maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564LearningTime;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgY1564Stream1TableRow()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564Stream1TableRow".
 *
 *	Task			: Set method for (table) column maxEmkcCfgY1564Stream1TableRow.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcCfgY1564Stream1TableRow().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgY1564Stream1TableRow(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	U_INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgY1564Stream1TableRow() @@@@@\n");

	value = (* ((U_INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		/* Extra Checkings can be done here */
	}
	else
	{
		maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Stream1TableRow = value;
		/* Please provide your code to instrument "maxEmkcCfgY1564Stream1TableRow" here */
	}


	if (maxEmkcCfgY1564TableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = sizeof(maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Stream1TableRow);
	return (U_CHAR *)&maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Stream1TableRow;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgY1564Stream2TableRow()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564Stream2TableRow".
 *
 *	Task			: Set method for (table) column maxEmkcCfgY1564Stream2TableRow.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcCfgY1564Stream2TableRow().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgY1564Stream2TableRow(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	U_INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgY1564Stream2TableRow() @@@@@\n");

	value = (* ((U_INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		/* Extra Checkings can be done here */
	}
	else
	{
		maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Stream2TableRow = value;
		/* Please provide your code to instrument "maxEmkcCfgY1564Stream2TableRow" here */
	}


	if (maxEmkcCfgY1564TableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = sizeof(maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Stream2TableRow);
	return (U_CHAR *)&maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Stream2TableRow;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgY1564Stream3TableRow()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564Stream3TableRow".
 *
 *	Task			: Set method for (table) column maxEmkcCfgY1564Stream3TableRow.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcCfgY1564Stream3TableRow().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgY1564Stream3TableRow(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	U_INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgY1564Stream3TableRow() @@@@@\n");

	value = (* ((U_INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		/* Extra Checkings can be done here */
	}
	else
	{
		maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Stream3TableRow = value;
		/* Please provide your code to instrument "maxEmkcCfgY1564Stream3TableRow" here */
	}


	if (maxEmkcCfgY1564TableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = sizeof(maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Stream3TableRow);
	return (U_CHAR *)&maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Stream3TableRow;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgY1564Stream4TableRow()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564Stream4TableRow".
 *
 *	Task			: Set method for (table) column maxEmkcCfgY1564Stream4TableRow.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcCfgY1564Stream4TableRow().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgY1564Stream4TableRow(MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	U_INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgY1564Stream4TableRow() @@@@@\n");

	value = (* ((U_INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		/* Extra Checkings can be done here */
	}
	else
	{
		maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Stream4TableRow = value;
		/* Please provide your code to instrument "maxEmkcCfgY1564Stream4TableRow" here */
	}


	if (maxEmkcCfgY1564TableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = sizeof(maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Stream4TableRow);
	return (U_CHAR *)&maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Stream4TableRow;
}


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgy1564tableinstru.c
 *****************************************************************************/
