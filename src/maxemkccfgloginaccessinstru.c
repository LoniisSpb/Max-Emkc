/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgloginaccessinstru.c.
 *
 *  Purpose	: File contains get and set methods for each scalar 
 * 			  of the module maxEmkcCfgLoginAccess.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:52 MSK 2018
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
#include "maxemkccfgloginaccess.h" 

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgDisableRootLogin()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgDisableRootLogin".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgDisableRootLogin.
 *
 *					  "do not allow user 'root' to login"
 *
 *	See Also		: SetMaxEmkcCfgDisableRootLogin().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgDisableRootLogin(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgDisableRootLogin() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgDisableRootLogin" here */

	*varValLen = sizeof(gv_maxEmkcCfgDisableRootLogin);
	return (U_CHAR *)&gv_maxEmkcCfgDisableRootLogin;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgAllowNetworkDiscovery()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgAllowNetworkDiscovery".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgAllowNetworkDiscovery.
 *
 *					  "allow LANTIME to be discovered via network mdns"
 *
 *	See Also		: SetMaxEmkcCfgAllowNetworkDiscovery().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgAllowNetworkDiscovery(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgAllowNetworkDiscovery() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgAllowNetworkDiscovery" here */

	*varValLen = sizeof(gv_maxEmkcCfgAllowNetworkDiscovery);
	return (U_CHAR *)&gv_maxEmkcCfgAllowNetworkDiscovery;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgDisableRootLogin()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgDisableRootLogin".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgDisableRootLogin.
 *
 *					  "do not allow user 'root' to login"
 *
 *	See Also		: GetMaxEmkcCfgDisableRootLogin().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgDisableRootLogin(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgDisableRootLogin() @@@@@\n");

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
		gv_maxEmkcCfgDisableRootLogin = value;
		/* Please provide your code to instrument "maxEmkcCfgDisableRootLogin" here */
	}

	*varValLen = sizeof(gv_maxEmkcCfgDisableRootLogin);
	return (U_CHAR *)&gv_maxEmkcCfgDisableRootLogin;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgAllowNetworkDiscovery()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgAllowNetworkDiscovery".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgAllowNetworkDiscovery.
 *
 *					  "allow LANTIME to be discovered via network mdns"
 *
 *	See Also		: GetMaxEmkcCfgAllowNetworkDiscovery().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgAllowNetworkDiscovery(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgAllowNetworkDiscovery() @@@@@\n");

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
		gv_maxEmkcCfgAllowNetworkDiscovery = value;
		/* Please provide your code to instrument "maxEmkcCfgAllowNetworkDiscovery" here */
	}

	*varValLen = sizeof(gv_maxEmkcCfgAllowNetworkDiscovery);
	return (U_CHAR *)&gv_maxEmkcCfgAllowNetworkDiscovery;
}


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgloginaccessinstru.c
 *****************************************************************************/
