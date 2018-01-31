/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgtraffictestinstru.c.
 *
 *  Purpose	: File contains get and set methods for each scalar 
 * 			  of the module maxEmkcCfgTrafficTest.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:42 MSK 2018
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
#include "maxemkccfgtraffictest.h" 

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgTrafficTestEntryRowChoice()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgTrafficTestEntryRowChoice".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgTrafficTestEntryRowChoice.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcCfgTrafficTestEntryRowChoice().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgTrafficTestEntryRowChoice(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgTrafficTestEntryRowChoice() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgTrafficTestEntryRowChoice" here */

	*varValLen = sizeof(gv_maxEmkcCfgTrafficTestEntryRowChoice);
	return (U_CHAR *)&gv_maxEmkcCfgTrafficTestEntryRowChoice;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgTrafficTestEntryRowChoice()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgTrafficTestEntryRowChoice".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgTrafficTestEntryRowChoice.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcCfgTrafficTestEntryRowChoice().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgTrafficTestEntryRowChoice(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	U_INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgTrafficTestEntryRowChoice() @@@@@\n");

	value = (* ((U_INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		/* Extra Checkings can be done here */
	}
	else
	{
		gv_maxEmkcCfgTrafficTestEntryRowChoice = value;
		/* Please provide your code to instrument "maxEmkcCfgTrafficTestEntryRowChoice" here */
	}

	*varValLen = sizeof(gv_maxEmkcCfgTrafficTestEntryRowChoice);
	return (U_CHAR *)&gv_maxEmkcCfgTrafficTestEntryRowChoice;
}


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgtraffictestinstru.c
 *****************************************************************************/
