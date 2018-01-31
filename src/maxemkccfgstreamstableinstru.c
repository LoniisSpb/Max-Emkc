/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgstreamstableinstru.c.
 *
 *  Purpose	: File contains get and set methods for each table column 
 * 			  of the module maxEmkcCfgStreamsTable. 
 *
 *			  "Row Description"
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:46 MSK 2018
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
#include "maxemkccfgstreamstable.h" 

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgStreamRowStatus()
 *
 *	Args			: 1. Pointer of the entry (IN).
 *					  2. Pointer of the variable value length (OUT).
 *					  3. Status which is used to return SNMP Error (OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgStreamRowStatus".
 *
 *	Task			: Get method for (table) column maxEmkcCfgStreamRowStatus.
 *
 *					  "Column Description"
 *
 *	See Also		: SetMaxEmkcCfgStreamRowStatus().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgStreamRowStatus(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgStreamRowStatus() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgStreamRowStatus" here */

	*varValLen = sizeof(maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgStreamRowStatus);
	return (U_CHAR *)&maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgStreamRowStatus;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgStreamState()
 *
 *	Args			: 1. Pointer of the entry (IN).
 *					  2. Pointer of the variable value length (OUT).
 *					  3. Status which is used to return SNMP Error (OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgStreamState".
 *
 *	Task			: Get method for (table) column maxEmkcCfgStreamState.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcCfgStreamState().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgStreamState(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgStreamState() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgStreamState" here */

	*varValLen = sizeof(maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgStreamState);
	return (U_CHAR *)&maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgStreamState;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgY1564StreamPduLength()
 *
 *	Args			: 1. Pointer of the entry (IN).
 *					  2. Pointer of the variable value length (OUT).
 *					  3. Status which is used to return SNMP Error (OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564StreamPduLength".
 *
 *	Task			: Get method for (table) column maxEmkcCfgY1564StreamPduLength.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcCfgY1564StreamPduLength().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgY1564StreamPduLength(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgY1564StreamPduLength() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgY1564StreamPduLength" here */

	*varValLen = sizeof(maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamPduLength);
	return (U_CHAR *)&maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamPduLength;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgY1564StreamCir()
 *
 *	Args			: 1. Pointer of the entry (IN).
 *					  2. Pointer of the variable value length (OUT).
 *					  3. Status which is used to return SNMP Error (OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564StreamCir".
 *
 *	Task			: Get method for (table) column maxEmkcCfgY1564StreamCir.
 *
 *					  "Committed Information Rate (CIR)
 *					  Rec. ITU-T Y.1564 clause 6.2.1 Figure 3 Green Frames
 *					  in float32 format, 6 digits after point, bits per second.
 *					  Examples:
 *					  1.000000e+9 = 1 gigabit per second
 *					  1.000000e+8 = 100 megabits per second
 *					  1.000000e+7 = 10 megabits per second
 *					  1.000000e+3 = 1 kilobit per second
 *					  7.654321e+3 = 7.654321 kilobits per second"
 *
 *	See Also		: SetMaxEmkcCfgY1564StreamCir().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgY1564StreamCir(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgY1564StreamCir() @@@@@\n");

	CHECK_FOR_NULL(maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamCir);

	/* Please provide your code to instrument "maxEmkcCfgY1564StreamCir" here */

	*varValLen = __Strlen((CHAR *)maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamCir);
	return (U_CHAR *)maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamCir;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgY1564StreamEir()
 *
 *	Args			: 1. Pointer of the entry (IN).
 *					  2. Pointer of the variable value length (OUT).
 *					  3. Status which is used to return SNMP Error (OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564StreamEir".
 *
 *	Task			: Get method for (table) column maxEmkcCfgY1564StreamEir.
 *
 *					  "Excess Information Rate (EIR)
 *					  Rec. ITU-T Y.1564 clause 6.2.1 Figure 3 Yellow Frames
 *					  in float32 format, 6 digits after point, bits per second.
 *					  Examples:
 *					  1.000000e+9 = 1 gigabit per second
 *					  1.000000e+8 = 100 megabits per second
 *					  1.000000e+7 = 10 megabits per second
 *					  1.000000e+3 = 1 kilobit per second
 *					  7.654321e+3 = 7.654321 kilobits per second"
 *
 *	See Also		: SetMaxEmkcCfgY1564StreamEir().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgY1564StreamEir(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgY1564StreamEir() @@@@@\n");

	CHECK_FOR_NULL(maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamEir);

	/* Please provide your code to instrument "maxEmkcCfgY1564StreamEir" here */

	*varValLen = __Strlen((CHAR *)maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamEir);
	return (U_CHAR *)maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamEir;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgY1564StreamNonConformToCirEirRate()
 *
 *	Args			: 1. Pointer of the entry (IN).
 *					  2. Pointer of the variable value length (OUT).
 *					  3. Status which is used to return SNMP Error (OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564StreamNonConformToCirEirRate".
 *
 *	Task			: Get method for (table) column maxEmkcCfgY1564StreamNonConformToCirEirRate.
 *
 *					  "Non-conformant to CIR + EIR
 *					  Rec. ITU-T Y.1564 clause 6.2.1 Figure 3 Red Frames
 *					  in float32 format, 6 digits after point, bits per second.
 *					  Examples:
 *					  1.000000e+9 = 1 gigabit per second
 *					  1.000000e+8 = 100 megabits per second
 *					  1.000000e+7 = 10 megabits per second
 *					  1.000000e+3 = 1 kilobit per second
 *					  7.654321e+3 = 7.654321 kilobits per second"
 *
 *	See Also		: SetMaxEmkcCfgY1564StreamNonConformToCirEirRate().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgY1564StreamNonConformToCirEirRate(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgY1564StreamNonConformToCirEirRate() @@@@@\n");

	CHECK_FOR_NULL(maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamNonConformToCirEirRate);

	/* Please provide your code to instrument "maxEmkcCfgY1564StreamNonConformToCirEirRate" here */

	*varValLen = __Strlen((CHAR *)maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamNonConformToCirEirRate);
	return (U_CHAR *)maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamNonConformToCirEirRate;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgY1564StreamFlrTreshold()
 *
 *	Args			: 1. Pointer of the entry (IN).
 *					  2. Pointer of the variable value length (OUT).
 *					  3. Status which is used to return SNMP Error (OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564StreamFlrTreshold".
 *
 *	Task			: Get method for (table) column maxEmkcCfgY1564StreamFlrTreshold.
 *
 *					  "FLR treshold
 *					  in float32 format, 6 digits after point.
 *					  Examples:
 *					  1.000000e-3 = 10^-3
 *					  1.000000e-6 = 10^-6
 *					  7.654321e-5 = 76.54321*10^-6"
 *
 *	See Also		: SetMaxEmkcCfgY1564StreamFlrTreshold().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgY1564StreamFlrTreshold(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgY1564StreamFlrTreshold() @@@@@\n");

	CHECK_FOR_NULL(maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamFlrTreshold);

	/* Please provide your code to instrument "maxEmkcCfgY1564StreamFlrTreshold" here */

	*varValLen = __Strlen((CHAR *)maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamFlrTreshold);
	return (U_CHAR *)maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamFlrTreshold;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgY1564StreamFtdTreshold()
 *
 *	Args			: 1. Pointer of the entry (IN).
 *					  2. Pointer of the variable value length (OUT).
 *					  3. Status which is used to return SNMP Error (OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564StreamFtdTreshold".
 *
 *	Task			: Get method for (table) column maxEmkcCfgY1564StreamFtdTreshold.
 *
 *					  "FTD treshold in nanoseconds"
 *
 *	See Also		: SetMaxEmkcCfgY1564StreamFtdTreshold().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgY1564StreamFtdTreshold(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgY1564StreamFtdTreshold() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgY1564StreamFtdTreshold" here */

	*varValLen = sizeof(maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamFtdTreshold);
	return (U_CHAR *)&maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamFtdTreshold;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgY1564StreamFdvTreshold()
 *
 *	Args			: 1. Pointer of the entry (IN).
 *					  2. Pointer of the variable value length (OUT).
 *					  3. Status which is used to return SNMP Error (OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564StreamFdvTreshold".
 *
 *	Task			: Get method for (table) column maxEmkcCfgY1564StreamFdvTreshold.
 *
 *					  "FDV treshold in nanoseconds"
 *
 *	See Also		: SetMaxEmkcCfgY1564StreamFdvTreshold().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgY1564StreamFdvTreshold(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgY1564StreamFdvTreshold() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgY1564StreamFdvTreshold" here */

	*varValLen = sizeof(maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamFdvTreshold);
	return (U_CHAR *)&maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamFdvTreshold;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgY1564StreamAvail()
 *
 *	Args			: 1. Pointer of the entry (IN).
 *					  2. Pointer of the variable value length (OUT).
 *					  3. Status which is used to return SNMP Error (OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564StreamAvail".
 *
 *	Task			: Get method for (table) column maxEmkcCfgY1564StreamAvail.
 *
 *					  "Connection availability, %"
 *
 *	See Also		: SetMaxEmkcCfgY1564StreamAvail().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgY1564StreamAvail(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgY1564StreamAvail() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgY1564StreamAvail" here */

	*varValLen = sizeof(maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamAvail);
	return (U_CHAR *)&maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamAvail;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgY1564StreamMeasNetworkRow()
 *
 *	Args			: 1. Pointer of the entry (IN).
 *					  2. Pointer of the variable value length (OUT).
 *					  3. Status which is used to return SNMP Error (OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564StreamMeasNetworkRow".
 *
 *	Task			: Get method for (table) column maxEmkcCfgY1564StreamMeasNetworkRow.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcCfgY1564StreamMeasNetworkRow().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgY1564StreamMeasNetworkRow(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgY1564StreamMeasNetworkRow() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgY1564StreamMeasNetworkRow" here */

	*varValLen = sizeof(maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamMeasNetworkRow);
	return (U_CHAR *)&maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamMeasNetworkRow;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgStreamIndex()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgStreamIndex".
 *
 *	Task			: Set method for (table) column maxEmkcCfgStreamIndex.
 *
 *					  "Column Description"
 *
 *	See Also		: GetMaxEmkcCfgStreamIndex().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgStreamIndex(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	U_INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgStreamIndex() @@@@@\n");

	value = (* ((U_INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		/* Extra Checkings can be done here */
	}
	else
	{
		maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgStreamIndex = value;
		/* Please provide your code to instrument "maxEmkcCfgStreamIndex" here */
	}


	if (maxEmkcCfgStreamsTableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = sizeof(maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgStreamIndex);
	return (U_CHAR *)&maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgStreamIndex;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgStreamRowStatus()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgStreamRowStatus".
 *
 *	Task			: Set method for (table) column maxEmkcCfgStreamRowStatus.
 *
 *					  "Column Description"
 *
 *	See Also		: GetMaxEmkcCfgStreamRowStatus().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgStreamRowStatus(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	INT32	value;
	CHAR	retVal;
	U_CHAR	presentState;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgStreamRowStatus() @@@@@\n");

	if(maxEmkcCfgStreamsTableEntryPtr == NULL)
	{
		presentState = SNMP_ROW_NONEXISTENT;
	}
	else
	{
		presentState = maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgStreamRowStatus;
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
		maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgStreamRowStatus = retVal;
		/* Please provide your code to instrument "maxEmkcCfgStreamRowStatus" here */
	}


	if (maxEmkcCfgStreamsTableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = sizeof(maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgStreamRowStatus);
	return (U_CHAR *)&maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgStreamRowStatus;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgStreamState()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgStreamState".
 *
 *	Task			: Set method for (table) column maxEmkcCfgStreamState.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcCfgStreamState().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgStreamState(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgStreamState() @@@@@\n");

	if(varVal == NULL)

	{

	return NULL;

	}

	value = (* ((INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		if(!((value == 0) || (value == 1)))
		{
			*status = SNMP_ERR_WRONGVALUE;
			return NULL;
		}
	}
	else
	{
		maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgStreamState = value;
		/* Please provide your code to instrument "maxEmkcCfgStreamState" here */
	}


	if (maxEmkcCfgStreamsTableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = sizeof(maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgStreamState);
	return (U_CHAR *)&maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgStreamState;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgY1564StreamPduLength()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564StreamPduLength".
 *
 *	Task			: Set method for (table) column maxEmkcCfgY1564StreamPduLength.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcCfgY1564StreamPduLength().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgY1564StreamPduLength(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	U_INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgY1564StreamPduLength() @@@@@\n");

	value = (* ((U_INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		if((value < 64) || ( value > 16000))
		{
			*status = SNMP_ERR_WRONGLENGTH;
			return NULL;
		}
	}
	else
	{
		maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamPduLength = value;
		/* Please provide your code to instrument "maxEmkcCfgY1564StreamPduLength" here */
	}


	if (maxEmkcCfgStreamsTableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = sizeof(maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamPduLength);
	return (U_CHAR *)&maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamPduLength;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgY1564StreamCir()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564StreamCir".
 *
 *	Task			: Set method for (table) column maxEmkcCfgY1564StreamCir.
 *
 *					  "Committed Information Rate (CIR)
 *					  Rec. ITU-T Y.1564 clause 6.2.1 Figure 3 Green Frames
 *					  in float32 format, 6 digits after point, bits per second.
 *					  Examples:
 *					  1.000000e+9 = 1 gigabit per second
 *					  1.000000e+8 = 100 megabits per second
 *					  1.000000e+7 = 10 megabits per second
 *					  1.000000e+3 = 1 kilobit per second
 *					  7.654321e+3 = 7.654321 kilobits per second"
 *
 *	See Also		: GetMaxEmkcCfgY1564StreamCir().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgY1564StreamCir(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the column "maxEmkcCfgY1564StreamCir" will be freed
	 * and reallocated here.
	 */

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgY1564StreamCir() @@@@@\n");

	if (*status == VALIDATE)
	{
		if( *varValLen  > 11)
		{
			*status = SNMP_ERR_WRONGLENGTH;
			return NULL;
		}
	}
	else
	{
		/* Set the maxEmkcCfgY1564StreamCir column variable */
		ReallocateAndSetString(
					(U_CHAR **)&maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamCir,
					varVal, *varValLen);

		/* Please provide your code to instrument "maxEmkcCfgY1564StreamCir" here */
	}

	if (maxEmkcCfgStreamsTableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = __Strlen((CHAR *)maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamCir);
	return (U_CHAR *)maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamCir;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgY1564StreamEir()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564StreamEir".
 *
 *	Task			: Set method for (table) column maxEmkcCfgY1564StreamEir.
 *
 *					  "Excess Information Rate (EIR)
 *					  Rec. ITU-T Y.1564 clause 6.2.1 Figure 3 Yellow Frames
 *					  in float32 format, 6 digits after point, bits per second.
 *					  Examples:
 *					  1.000000e+9 = 1 gigabit per second
 *					  1.000000e+8 = 100 megabits per second
 *					  1.000000e+7 = 10 megabits per second
 *					  1.000000e+3 = 1 kilobit per second
 *					  7.654321e+3 = 7.654321 kilobits per second"
 *
 *	See Also		: GetMaxEmkcCfgY1564StreamEir().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgY1564StreamEir(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the column "maxEmkcCfgY1564StreamEir" will be freed
	 * and reallocated here.
	 */

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgY1564StreamEir() @@@@@\n");

	if (*status == VALIDATE)
	{
		if( *varValLen  > 11)
		{
			*status = SNMP_ERR_WRONGLENGTH;
			return NULL;
		}
	}
	else
	{
		/* Set the maxEmkcCfgY1564StreamEir column variable */
		ReallocateAndSetString(
					(U_CHAR **)&maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamEir,
					varVal, *varValLen);

		/* Please provide your code to instrument "maxEmkcCfgY1564StreamEir" here */
	}

	if (maxEmkcCfgStreamsTableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = __Strlen((CHAR *)maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamEir);
	return (U_CHAR *)maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamEir;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgY1564StreamNonConformToCirEirRate()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564StreamNonConformToCirEirRate".
 *
 *	Task			: Set method for (table) column maxEmkcCfgY1564StreamNonConformToCirEirRate.
 *
 *					  "Non-conformant to CIR + EIR
 *					  Rec. ITU-T Y.1564 clause 6.2.1 Figure 3 Red Frames
 *					  in float32 format, 6 digits after point, bits per second.
 *					  Examples:
 *					  1.000000e+9 = 1 gigabit per second
 *					  1.000000e+8 = 100 megabits per second
 *					  1.000000e+7 = 10 megabits per second
 *					  1.000000e+3 = 1 kilobit per second
 *					  7.654321e+3 = 7.654321 kilobits per second"
 *
 *	See Also		: GetMaxEmkcCfgY1564StreamNonConformToCirEirRate().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgY1564StreamNonConformToCirEirRate(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the column "maxEmkcCfgY1564StreamNonConformToCirEirRate" will be freed
	 * and reallocated here.
	 */

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgY1564StreamNonConformToCirEirRate() @@@@@\n");

	if (*status == VALIDATE)
	{
		if( *varValLen  > 11)
		{
			*status = SNMP_ERR_WRONGLENGTH;
			return NULL;
		}
	}
	else
	{
		/* Set the maxEmkcCfgY1564StreamNonConformToCirEirRate column variable */
		ReallocateAndSetString(
					(U_CHAR **)&maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamNonConformToCirEirRate,
					varVal, *varValLen);

		/* Please provide your code to instrument "maxEmkcCfgY1564StreamNonConformToCirEirRate" here */
	}

	if (maxEmkcCfgStreamsTableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = __Strlen((CHAR *)maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamNonConformToCirEirRate);
	return (U_CHAR *)maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamNonConformToCirEirRate;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgY1564StreamFlrTreshold()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564StreamFlrTreshold".
 *
 *	Task			: Set method for (table) column maxEmkcCfgY1564StreamFlrTreshold.
 *
 *					  "FLR treshold
 *					  in float32 format, 6 digits after point.
 *					  Examples:
 *					  1.000000e-3 = 10^-3
 *					  1.000000e-6 = 10^-6
 *					  7.654321e-5 = 76.54321*10^-6"
 *
 *	See Also		: GetMaxEmkcCfgY1564StreamFlrTreshold().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgY1564StreamFlrTreshold(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the column "maxEmkcCfgY1564StreamFlrTreshold" will be freed
	 * and reallocated here.
	 */

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgY1564StreamFlrTreshold() @@@@@\n");

	if (*status == VALIDATE)
	{
		if( *varValLen  > 11)
		{
			*status = SNMP_ERR_WRONGLENGTH;
			return NULL;
		}
	}
	else
	{
		/* Set the maxEmkcCfgY1564StreamFlrTreshold column variable */
		ReallocateAndSetString(
					(U_CHAR **)&maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamFlrTreshold,
					varVal, *varValLen);

		/* Please provide your code to instrument "maxEmkcCfgY1564StreamFlrTreshold" here */
	}

	if (maxEmkcCfgStreamsTableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = __Strlen((CHAR *)maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamFlrTreshold);
	return (U_CHAR *)maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamFlrTreshold;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgY1564StreamFtdTreshold()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564StreamFtdTreshold".
 *
 *	Task			: Set method for (table) column maxEmkcCfgY1564StreamFtdTreshold.
 *
 *					  "FTD treshold in nanoseconds"
 *
 *	See Also		: GetMaxEmkcCfgY1564StreamFtdTreshold().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgY1564StreamFtdTreshold(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	U_INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgY1564StreamFtdTreshold() @@@@@\n");

	value = (* ((U_INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		/* Extra Checkings can be done here */
	}
	else
	{
		maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamFtdTreshold = value;
		/* Please provide your code to instrument "maxEmkcCfgY1564StreamFtdTreshold" here */
	}


	if (maxEmkcCfgStreamsTableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = sizeof(maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamFtdTreshold);
	return (U_CHAR *)&maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamFtdTreshold;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgY1564StreamFdvTreshold()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564StreamFdvTreshold".
 *
 *	Task			: Set method for (table) column maxEmkcCfgY1564StreamFdvTreshold.
 *
 *					  "FDV treshold in nanoseconds"
 *
 *	See Also		: GetMaxEmkcCfgY1564StreamFdvTreshold().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgY1564StreamFdvTreshold(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	U_INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgY1564StreamFdvTreshold() @@@@@\n");

	value = (* ((U_INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		/* Extra Checkings can be done here */
	}
	else
	{
		maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamFdvTreshold = value;
		/* Please provide your code to instrument "maxEmkcCfgY1564StreamFdvTreshold" here */
	}


	if (maxEmkcCfgStreamsTableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = sizeof(maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamFdvTreshold);
	return (U_CHAR *)&maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamFdvTreshold;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgY1564StreamAvail()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564StreamAvail".
 *
 *	Task			: Set method for (table) column maxEmkcCfgY1564StreamAvail.
 *
 *					  "Connection availability, %"
 *
 *	See Also		: GetMaxEmkcCfgY1564StreamAvail().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgY1564StreamAvail(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	U_INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgY1564StreamAvail() @@@@@\n");

	value = (* ((U_INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		if((value < 0) || ( value > 100))
		{
			*status = SNMP_ERR_WRONGLENGTH;
			return NULL;
		}
	}
	else
	{
		maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamAvail = value;
		/* Please provide your code to instrument "maxEmkcCfgY1564StreamAvail" here */
	}


	if (maxEmkcCfgStreamsTableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = sizeof(maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamAvail);
	return (U_CHAR *)&maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamAvail;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgY1564StreamMeasNetworkRow()
 *
 *	Args			: 1. Pointer of the entry (IN/OUT).
 *					  2. Pointer of the variable to set (IN).
 *					  3. Pointer of the variable value length (IN/OUT).
 *					  4. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgY1564StreamMeasNetworkRow".
 *
 *	Task			: Set method for (table) column maxEmkcCfgY1564StreamMeasNetworkRow.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcCfgY1564StreamMeasNetworkRow().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgY1564StreamMeasNetworkRow(MaxEmkcCfgStreamsTableEntry *maxEmkcCfgStreamsTableEntryPtr, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	U_INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgY1564StreamMeasNetworkRow() @@@@@\n");

	value = (* ((U_INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		/* Extra Checkings can be done here */
	}
	else
	{
		maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamMeasNetworkRow = value;
		/* Please provide your code to instrument "maxEmkcCfgY1564StreamMeasNetworkRow" here */
	}


	if (maxEmkcCfgStreamsTableEntryPtr == NULL)
	{
		*varValLen = 0;
		return NULL;
	}

	*varValLen = sizeof(maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamMeasNetworkRow);
	return (U_CHAR *)&maxEmkcCfgStreamsTableEntryPtr->maxEmkcCfgY1564StreamMeasNetworkRow;
}


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgstreamstableinstru.c
 *****************************************************************************/
