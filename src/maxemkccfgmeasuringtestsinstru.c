/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgmeasuringtestsinstru.c.
 *
 *  Purpose	: File contains get and set methods for each scalar 
 * 			  of the module maxEmkcCfgMeasuringTests.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:51 MSK 2018
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
#include "maxemkccfgmeasuringtests.h" 

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgTestTimeMode()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgTestTimeMode".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgTestTimeMode.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcCfgTestTimeMode().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgTestTimeMode(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgTestTimeMode() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgTestTimeMode" here */

	*varValLen = sizeof(gv_maxEmkcCfgTestTimeMode);
	return (U_CHAR *)&gv_maxEmkcCfgTestTimeMode;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgTestNtpTimeOfStart()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgTestNtpTimeOfStart".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgTestNtpTimeOfStart.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcCfgTestNtpTimeOfStart().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgTestNtpTimeOfStart(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgTestNtpTimeOfStart() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcCfgTestNtpTimeOfStart);

	/* Please provide your code to instrument "maxEmkcCfgTestNtpTimeOfStart" here */

	*varValLen = gv_maxEmkcCfgTestNtpTimeOfStartLen;
	return (U_CHAR *)gv_maxEmkcCfgTestNtpTimeOfStart;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgTestLoopType()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgTestLoopType".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgTestLoopType.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcCfgTestLoopType().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgTestLoopType(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgTestLoopType() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgTestLoopType" here */

	*varValLen = sizeof(gv_maxEmkcCfgTestLoopType);
	return (U_CHAR *)&gv_maxEmkcCfgTestLoopType;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgTestType()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgTestType".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgTestType.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcCfgTestType().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgTestType(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgTestType() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgTestType" here */

	*varValLen = sizeof(gv_maxEmkcCfgTestType);
	return (U_CHAR *)&gv_maxEmkcCfgTestType;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgTestTimeMode()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgTestTimeMode".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgTestTimeMode.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcCfgTestTimeMode().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgTestTimeMode(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgTestTimeMode() @@@@@\n");

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
		gv_maxEmkcCfgTestTimeMode = value;
		/* Please provide your code to instrument "maxEmkcCfgTestTimeMode" here */
	}

	*varValLen = sizeof(gv_maxEmkcCfgTestTimeMode);
	return (U_CHAR *)&gv_maxEmkcCfgTestTimeMode;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgTestNtpTimeOfStart()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgTestNtpTimeOfStart".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgTestNtpTimeOfStart.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcCfgTestNtpTimeOfStart().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgTestNtpTimeOfStart(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcCfgTestNtpTimeOfStart" will be freed
	 * and reallocated here.
	 */

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgTestNtpTimeOfStart() @@@@@\n");

	if (*status == VALIDATE)
	{
		if(! IsValidDateAndTime(varVal, varValLen))
		{
			*status = SNMP_ERR_WRONGVALUE;
			return NULL;
		}
	}
	else
	{
		/* Set the maxEmkcCfgTestNtpTimeOfStart scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcCfgTestNtpTimeOfStart,
					varVal, *varValLen);
		gv_maxEmkcCfgTestNtpTimeOfStartLen = *varValLen;

		/* Please provide your code to instrument "maxEmkcCfgTestNtpTimeOfStart" here */
	}
	*varValLen = gv_maxEmkcCfgTestNtpTimeOfStartLen;
	return (U_CHAR *)gv_maxEmkcCfgTestNtpTimeOfStart;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgTestLoopType()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgTestLoopType".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgTestLoopType.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcCfgTestLoopType().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgTestLoopType(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgTestLoopType() @@@@@\n");

	if(varVal == NULL)

	{

	return NULL;

	}

	value = (* ((INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		if(!((value == 1) || (value == 2) || (value == 3) || (value == 4) || (value == 5)))
		{
			*status = SNMP_ERR_WRONGVALUE;
			return NULL;
		}
	}
	else
	{
		gv_maxEmkcCfgTestLoopType = value;
		/* Please provide your code to instrument "maxEmkcCfgTestLoopType" here */
	}

	*varValLen = sizeof(gv_maxEmkcCfgTestLoopType);
	return (U_CHAR *)&gv_maxEmkcCfgTestLoopType;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgTestType()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgTestType".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgTestType.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcCfgTestType().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgTestType(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgTestType() @@@@@\n");

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
		gv_maxEmkcCfgTestType = value;
		/* Please provide your code to instrument "maxEmkcCfgTestType" here */
	}

	*varValLen = sizeof(gv_maxEmkcCfgTestType);
	return (U_CHAR *)&gv_maxEmkcCfgTestType;
}


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgmeasuringtestsinstru.c
 *****************************************************************************/
