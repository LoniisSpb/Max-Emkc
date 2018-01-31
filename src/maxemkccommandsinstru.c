/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccommandsinstru.c.
 *
 *  Purpose	: File contains get and set methods for each scalar 
 * 			  of the module maxEmkcCommands.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:41:01 MSK 2018
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
#include "maxemkccommands.h" 

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCmdMeasuringTestStart()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCmdMeasuringTestStart".
 *
 *	Task			: Get method for scalar variable maxEmkcCmdMeasuringTestStart.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcCmdMeasuringTestStart().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCmdMeasuringTestStart(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCmdMeasuringTestStart() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCmdMeasuringTestStart" here */

	*varValLen = sizeof(gv_maxEmkcCmdMeasuringTestStart);
	return (U_CHAR *)&gv_maxEmkcCmdMeasuringTestStart;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCmdExecute()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCmdExecute".
 *
 *	Task			: Get method for scalar variable maxEmkcCmdExecute.
 *
 *					  "Send a command to the EMKC1 to be executed.
 *					  startFirmwareUpdate(1), reboot(2) values, after starting appropriated agent software processes and returning 1 or 5 in SNMP SET PESPONSE, must be automatically cleared to none(0) value."
 *
 *	See Also		: SetMaxEmkcCmdExecute().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCmdExecute(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCmdExecute() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCmdExecute" here */

	*varValLen = sizeof(gv_maxEmkcCmdExecute);
	return (U_CHAR *)&gv_maxEmkcCmdExecute;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCmdSetTime()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCmdSetTime".
 *
 *	Task			: Get method for scalar variable maxEmkcCmdSetTime.
 *
 *					  "Reference time can be set via a date-time string in format:
 *					  dd-mm-yyyy hh:mm:ss"
 *
 *	See Also		: SetMaxEmkcCmdSetTime().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCmdSetTime(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCmdSetTime() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcCmdSetTime);

	/* Please provide your code to instrument "maxEmkcCmdSetTime" here */

	*varValLen = __Strlen((CHAR *)gv_maxEmkcCmdSetTime);
	return (U_CHAR *)gv_maxEmkcCmdSetTime;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCmdMeasuringTestStart()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCmdMeasuringTestStart".
 *
 *	Task			: Set method for scalar variable maxEmkcCmdMeasuringTestStart.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcCmdMeasuringTestStart().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCmdMeasuringTestStart(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCmdMeasuringTestStart() @@@@@\n");

	if(varVal == NULL)

	{

	return NULL;

	}

	value = (* ((INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		if(!((value == 0) || (value == 1) || (value == 2)))
		{
			*status = SNMP_ERR_WRONGVALUE;
			return NULL;
		}
	}
	else
	{
		gv_maxEmkcCmdMeasuringTestStart = value;
		/* Please provide your code to instrument "maxEmkcCmdMeasuringTestStart" here */
	}

	*varValLen = sizeof(gv_maxEmkcCmdMeasuringTestStart);
	return (U_CHAR *)&gv_maxEmkcCmdMeasuringTestStart;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCmdExecute()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCmdExecute".
 *
 *	Task			: Set method for scalar variable maxEmkcCmdExecute.
 *
 *					  "Send a command to the EMKC1 to be executed.
 *					  startFirmwareUpdate(1), reboot(2) values, after starting appropriated agent software processes and returning 1 or 5 in SNMP SET PESPONSE, must be automatically cleared to none(0) value."
 *
 *	See Also		: GetMaxEmkcCmdExecute().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCmdExecute(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCmdExecute() @@@@@\n");

	if(varVal == NULL)

	{

	return NULL;

	}

	value = (* ((INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		if(!((value == 0) || (value == 1) || (value == 2)))
		{
			*status = SNMP_ERR_WRONGVALUE;
			return NULL;
		}
	}
	else
	{
		gv_maxEmkcCmdExecute = value;
		/* Please provide your code to instrument "maxEmkcCmdExecute" here */
	}

	*varValLen = sizeof(gv_maxEmkcCmdExecute);
	return (U_CHAR *)&gv_maxEmkcCmdExecute;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCmdSetTime()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCmdSetTime".
 *
 *	Task			: Set method for scalar variable maxEmkcCmdSetTime.
 *
 *					  "Reference time can be set via a date-time string in format:
 *					  dd-mm-yyyy hh:mm:ss"
 *
 *	See Also		: GetMaxEmkcCmdSetTime().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCmdSetTime(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcCmdSetTime" will be freed
	 * and reallocated here.
	 */

	INT32 i=0;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCmdSetTime() @@@@@\n");

	if (*status == VALIDATE)
	{
		
	if( *varValLen  > 255)
		{
			*status = SNMP_ERR_WRONGLENGTH;
			return NULL;
		}

	for( i=0;i<(*varValLen);i++)
		 {
			 if(isascii(varVal[i])==0)
		{
			*status = SNMP_ERR_WRONGVALUE;
			return NULL;
		}

		}
	}
	else
	{
		/* Set the maxEmkcCmdSetTime scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcCmdSetTime,
					varVal, *varValLen);

		/* Please provide your code to instrument "maxEmkcCmdSetTime" here */
	}
	*varValLen = __Strlen((CHAR *)gv_maxEmkcCmdSetTime);
	return (U_CHAR *)gv_maxEmkcCmdSetTime;
}


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccommandsinstru.c
 *****************************************************************************/
