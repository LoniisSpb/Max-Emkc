/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgfirmwaresourceinstru.c.
 *
 *  Purpose	: File contains get and set methods for each scalar 
 * 			  of the module maxEmkcCfgFirmwareSource.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:54 MSK 2018
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
#include "maxemkccfgfirmwaresource.h" 

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgFirmwareSourceIpAddr()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgFirmwareSourceIpAddr".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgFirmwareSourceIpAddr.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcCfgFirmwareSourceIpAddr().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgFirmwareSourceIpAddr(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgFirmwareSourceIpAddr() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcCfgFirmwareSourceIpAddr);

	/* Please provide your code to instrument "maxEmkcCfgFirmwareSourceIpAddr" here */

	*varValLen = gv_maxEmkcCfgFirmwareSourceIpAddrLen;
	return (U_CHAR *)gv_maxEmkcCfgFirmwareSourceIpAddr;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgFirmwareSourceDestPort()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgFirmwareSourceDestPort".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgFirmwareSourceDestPort.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcCfgFirmwareSourceDestPort().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgFirmwareSourceDestPort(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgFirmwareSourceDestPort() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgFirmwareSourceDestPort" here */

	*varValLen = sizeof(gv_maxEmkcCfgFirmwareSourceDestPort);
	return (U_CHAR *)&gv_maxEmkcCfgFirmwareSourceDestPort;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgFirmwareSourceLogin()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgFirmwareSourceLogin".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgFirmwareSourceLogin.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcCfgFirmwareSourceLogin().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgFirmwareSourceLogin(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgFirmwareSourceLogin() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcCfgFirmwareSourceLogin);

	/* Please provide your code to instrument "maxEmkcCfgFirmwareSourceLogin" here */

	*varValLen = __Strlen((CHAR *)gv_maxEmkcCfgFirmwareSourceLogin);
	return (U_CHAR *)gv_maxEmkcCfgFirmwareSourceLogin;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgFirmwareSourcePassw()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgFirmwareSourcePassw".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgFirmwareSourcePassw.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcCfgFirmwareSourcePassw().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgFirmwareSourcePassw(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgFirmwareSourcePassw() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcCfgFirmwareSourcePassw);

	/* Please provide your code to instrument "maxEmkcCfgFirmwareSourcePassw" here */

	*varValLen = __Strlen((CHAR *)gv_maxEmkcCfgFirmwareSourcePassw);
	return (U_CHAR *)gv_maxEmkcCfgFirmwareSourcePassw;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgFirmwareSourceDirectory()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgFirmwareSourceDirectory".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgFirmwareSourceDirectory.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcCfgFirmwareSourceDirectory().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgFirmwareSourceDirectory(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgFirmwareSourceDirectory() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcCfgFirmwareSourceDirectory);

	/* Please provide your code to instrument "maxEmkcCfgFirmwareSourceDirectory" here */

	*varValLen = __Strlen((CHAR *)gv_maxEmkcCfgFirmwareSourceDirectory);
	return (U_CHAR *)gv_maxEmkcCfgFirmwareSourceDirectory;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgFirmwareSourceFilename()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgFirmwareSourceFilename".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgFirmwareSourceFilename.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcCfgFirmwareSourceFilename().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgFirmwareSourceFilename(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgFirmwareSourceFilename() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcCfgFirmwareSourceFilename);

	/* Please provide your code to instrument "maxEmkcCfgFirmwareSourceFilename" here */

	*varValLen = __Strlen((CHAR *)gv_maxEmkcCfgFirmwareSourceFilename);
	return (U_CHAR *)gv_maxEmkcCfgFirmwareSourceFilename;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgFirmwareSourceIpAddr()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgFirmwareSourceIpAddr".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgFirmwareSourceIpAddr.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcCfgFirmwareSourceIpAddr().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgFirmwareSourceIpAddr(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcCfgFirmwareSourceIpAddr" will be freed
	 * and reallocated here.
	 */

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgFirmwareSourceIpAddr() @@@@@\n");

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
		/* Set the maxEmkcCfgFirmwareSourceIpAddr scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcCfgFirmwareSourceIpAddr,
					varVal, *varValLen);
		gv_maxEmkcCfgFirmwareSourceIpAddrLen = *varValLen;

		/* Please provide your code to instrument "maxEmkcCfgFirmwareSourceIpAddr" here */
	}
	*varValLen = gv_maxEmkcCfgFirmwareSourceIpAddrLen;

	return gv_maxEmkcCfgFirmwareSourceIpAddr;
}
/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgFirmwareSourceDestPort()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgFirmwareSourceDestPort".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgFirmwareSourceDestPort.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcCfgFirmwareSourceDestPort().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgFirmwareSourceDestPort(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	U_INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgFirmwareSourceDestPort() @@@@@\n");

	value = (* ((U_INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		if((value < 0) || ( value > 65535))
		{
			*status = SNMP_ERR_WRONGVALUE;
			return NULL;
		}
	}
	else
	{
		gv_maxEmkcCfgFirmwareSourceDestPort = value;
		/* Please provide your code to instrument "maxEmkcCfgFirmwareSourceDestPort" here */
	}

	*varValLen = sizeof(gv_maxEmkcCfgFirmwareSourceDestPort);
	return (U_CHAR *)&gv_maxEmkcCfgFirmwareSourceDestPort;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgFirmwareSourceLogin()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgFirmwareSourceLogin".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgFirmwareSourceLogin.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcCfgFirmwareSourceLogin().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgFirmwareSourceLogin(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcCfgFirmwareSourceLogin" will be freed
	 * and reallocated here.
	 */

	INT32 i=0;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgFirmwareSourceLogin() @@@@@\n");

	if (*status == VALIDATE)
	{
		
	if( *varValLen  > 31)
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
		/* Set the maxEmkcCfgFirmwareSourceLogin scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcCfgFirmwareSourceLogin,
					varVal, *varValLen);

		/* Please provide your code to instrument "maxEmkcCfgFirmwareSourceLogin" here */
	}
	*varValLen = __Strlen((CHAR *)gv_maxEmkcCfgFirmwareSourceLogin);
	return (U_CHAR *)gv_maxEmkcCfgFirmwareSourceLogin;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgFirmwareSourcePassw()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgFirmwareSourcePassw".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgFirmwareSourcePassw.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcCfgFirmwareSourcePassw().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgFirmwareSourcePassw(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcCfgFirmwareSourcePassw" will be freed
	 * and reallocated here.
	 */

	INT32 i=0;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgFirmwareSourcePassw() @@@@@\n");

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
		/* Set the maxEmkcCfgFirmwareSourcePassw scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcCfgFirmwareSourcePassw,
					varVal, *varValLen);

		/* Please provide your code to instrument "maxEmkcCfgFirmwareSourcePassw" here */
	}
	*varValLen = __Strlen((CHAR *)gv_maxEmkcCfgFirmwareSourcePassw);
	return (U_CHAR *)gv_maxEmkcCfgFirmwareSourcePassw;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgFirmwareSourceDirectory()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgFirmwareSourceDirectory".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgFirmwareSourceDirectory.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcCfgFirmwareSourceDirectory().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgFirmwareSourceDirectory(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcCfgFirmwareSourceDirectory" will be freed
	 * and reallocated here.
	 */

	INT32 i=0;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgFirmwareSourceDirectory() @@@@@\n");

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
		/* Set the maxEmkcCfgFirmwareSourceDirectory scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcCfgFirmwareSourceDirectory,
					varVal, *varValLen);

		/* Please provide your code to instrument "maxEmkcCfgFirmwareSourceDirectory" here */
	}
	*varValLen = __Strlen((CHAR *)gv_maxEmkcCfgFirmwareSourceDirectory);
	return (U_CHAR *)gv_maxEmkcCfgFirmwareSourceDirectory;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgFirmwareSourceFilename()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgFirmwareSourceFilename".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgFirmwareSourceFilename.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcCfgFirmwareSourceFilename().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgFirmwareSourceFilename(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcCfgFirmwareSourceFilename" will be freed
	 * and reallocated here.
	 */

	INT32 i=0;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgFirmwareSourceFilename() @@@@@\n");

	if (*status == VALIDATE)
	{
		
	if( *varValLen  > 31)
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
		/* Set the maxEmkcCfgFirmwareSourceFilename scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcCfgFirmwareSourceFilename,
					varVal, *varValLen);

		/* Please provide your code to instrument "maxEmkcCfgFirmwareSourceFilename" here */
	}
	*varValLen = __Strlen((CHAR *)gv_maxEmkcCfgFirmwareSourceFilename);
	return (U_CHAR *)gv_maxEmkcCfgFirmwareSourceFilename;
}


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgfirmwaresourceinstru.c
 *****************************************************************************/
