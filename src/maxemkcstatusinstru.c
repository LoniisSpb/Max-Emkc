/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkcstatusinstru.c.
 *
 *  Purpose	: File contains get and set methods for each scalar 
 * 			  of the module maxEmkcStatus.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:31 MSK 2018
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
#include "maxemkcstatus.h" 

/*****************************************************************************
 *	Function Name	: GetMaxEmkcMeasuringModuleState()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcMeasuringModuleState".
 *
 *	Task			: Get method for scalar variable maxEmkcMeasuringModuleState.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcMeasuringModuleState().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcMeasuringModuleState(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcMeasuringModuleState() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcMeasuringModuleState" here */

	*varValLen = sizeof(gv_maxEmkcMeasuringModuleState);
	return (U_CHAR *)&gv_maxEmkcMeasuringModuleState;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgFirmwareUpdatingStatus()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgFirmwareUpdatingStatus".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgFirmwareUpdatingStatus.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcCfgFirmwareUpdatingStatus().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgFirmwareUpdatingStatus(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgFirmwareUpdatingStatus() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgFirmwareUpdatingStatus" here */

	*varValLen = sizeof(gv_maxEmkcCfgFirmwareUpdatingStatus);
	return (U_CHAR *)&gv_maxEmkcCfgFirmwareUpdatingStatus;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcMeasuringModuleState()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcMeasuringModuleState".
 *
 *	Task			: Set method for scalar variable maxEmkcMeasuringModuleState.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcMeasuringModuleState().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcMeasuringModuleState(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcMeasuringModuleState() @@@@@\n");

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
		gv_maxEmkcMeasuringModuleState = value;
		/* Please provide your code to instrument "maxEmkcMeasuringModuleState" here */
	}

	*varValLen = sizeof(gv_maxEmkcMeasuringModuleState);
	return (U_CHAR *)&gv_maxEmkcMeasuringModuleState;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgFirmwareUpdatingStatus()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgFirmwareUpdatingStatus".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgFirmwareUpdatingStatus.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcCfgFirmwareUpdatingStatus().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgFirmwareUpdatingStatus(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgFirmwareUpdatingStatus() @@@@@\n");

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
		gv_maxEmkcCfgFirmwareUpdatingStatus = value;
		/* Please provide your code to instrument "maxEmkcCfgFirmwareUpdatingStatus" here */
	}

	*varValLen = sizeof(gv_maxEmkcCfgFirmwareUpdatingStatus);
	return (U_CHAR *)&gv_maxEmkcCfgFirmwareUpdatingStatus;
}


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkcstatusinstru.c
 *****************************************************************************/
