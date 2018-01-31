/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgsnmpinstru.c.
 *
 *  Purpose	: File contains get and set methods for each scalar 
 * 			  of the module maxEmkcCfgSnmp.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:58 MSK 2018
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
#include "maxemkccfgsnmp.h" 

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgSnmpReadCommunity()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpReadCommunity".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgSnmpReadCommunity.
 *
 *					  "read community for SNMPv1 and SNMPv2c"
 *
 *	See Also		: SetMaxEmkcCfgSnmpReadCommunity().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgSnmpReadCommunity(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgSnmpReadCommunity() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcCfgSnmpReadCommunity);

	/* Please provide your code to instrument "maxEmkcCfgSnmpReadCommunity" here */

	*varValLen = __Strlen((CHAR *)gv_maxEmkcCfgSnmpReadCommunity);
	return (U_CHAR *)gv_maxEmkcCfgSnmpReadCommunity;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgSnmpWriteCommunity()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpWriteCommunity".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgSnmpWriteCommunity.
 *
 *					  "read community for SNMPv1 and SNMPv2c"
 *
 *	See Also		: SetMaxEmkcCfgSnmpWriteCommunity().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgSnmpWriteCommunity(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgSnmpWriteCommunity() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcCfgSnmpWriteCommunity);

	/* Please provide your code to instrument "maxEmkcCfgSnmpWriteCommunity" here */

	*varValLen = __Strlen((CHAR *)gv_maxEmkcCfgSnmpWriteCommunity);
	return (U_CHAR *)gv_maxEmkcCfgSnmpWriteCommunity;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgSnmpContact()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpContact".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgSnmpContact.
 *
 *					  "SNMP contact string for Lantime"
 *
 *	See Also		: SetMaxEmkcCfgSnmpContact().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgSnmpContact(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgSnmpContact() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcCfgSnmpContact);

	/* Please provide your code to instrument "maxEmkcCfgSnmpContact" here */

	*varValLen = __Strlen((CHAR *)gv_maxEmkcCfgSnmpContact);
	return (U_CHAR *)gv_maxEmkcCfgSnmpContact;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgSnmpLocation()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpLocation".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgSnmpLocation.
 *
 *					  "SNMP object location string"
 *
 *	See Also		: SetMaxEmkcCfgSnmpLocation().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgSnmpLocation(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgSnmpLocation() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcCfgSnmpLocation);

	/* Please provide your code to instrument "maxEmkcCfgSnmpLocation" here */

	*varValLen = __Strlen((CHAR *)gv_maxEmkcCfgSnmpLocation);
	return (U_CHAR *)gv_maxEmkcCfgSnmpLocation;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgSnmpV3UserName()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpV3UserName".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgSnmpV3UserName.
 *
 *					  "username for SNMPv3"
 *
 *	See Also		: SetMaxEmkcCfgSnmpV3UserName().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgSnmpV3UserName(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgSnmpV3UserName() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcCfgSnmpV3UserName);

	/* Please provide your code to instrument "maxEmkcCfgSnmpV3UserName" here */

	*varValLen = __Strlen((CHAR *)gv_maxEmkcCfgSnmpV3UserName);
	return (U_CHAR *)gv_maxEmkcCfgSnmpV3UserName;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgSnmpV3UserRights()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpV3UserRights".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgSnmpV3UserRights.
 *
 *					  "privacy protocol for SNMPv3"
 *
 *	See Also		: SetMaxEmkcCfgSnmpV3UserRights().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgSnmpV3UserRights(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgSnmpV3UserRights() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgSnmpV3UserRights" here */

	*varValLen = sizeof(gv_maxEmkcCfgSnmpV3UserRights);
	return (U_CHAR *)&gv_maxEmkcCfgSnmpV3UserRights;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgSnmpV3Context()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpV3Context".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgSnmpV3Context.
 *
 *					  "context string for SNMPv3"
 *
 *	See Also		: SetMaxEmkcCfgSnmpV3Context().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgSnmpV3Context(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgSnmpV3Context() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcCfgSnmpV3Context);

	/* Please provide your code to instrument "maxEmkcCfgSnmpV3Context" here */

	*varValLen = __Strlen((CHAR *)gv_maxEmkcCfgSnmpV3Context);
	return (U_CHAR *)gv_maxEmkcCfgSnmpV3Context;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgSnmpV3SecurityLevel()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpV3SecurityLevel".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgSnmpV3SecurityLevel.
 *
 *					  "authentication level for SNMPv3"
 *
 *	See Also		: SetMaxEmkcCfgSnmpV3SecurityLevel().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgSnmpV3SecurityLevel(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgSnmpV3SecurityLevel() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgSnmpV3SecurityLevel" here */

	*varValLen = sizeof(gv_maxEmkcCfgSnmpV3SecurityLevel);
	return (U_CHAR *)&gv_maxEmkcCfgSnmpV3SecurityLevel;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgSnmpV3AuthProtocol()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpV3AuthProtocol".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgSnmpV3AuthProtocol.
 *
 *					  "authentication protocol for SNMPv3"
 *
 *	See Also		: SetMaxEmkcCfgSnmpV3AuthProtocol().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgSnmpV3AuthProtocol(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgSnmpV3AuthProtocol() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgSnmpV3AuthProtocol" here */

	*varValLen = sizeof(gv_maxEmkcCfgSnmpV3AuthProtocol);
	return (U_CHAR *)&gv_maxEmkcCfgSnmpV3AuthProtocol;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgSnmpV3AuthPassphrase()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpV3AuthPassphrase".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgSnmpV3AuthPassphrase.
 *
 *					  "authentication passphrase for SNMPv3"
 *
 *	See Also		: SetMaxEmkcCfgSnmpV3AuthPassphrase().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgSnmpV3AuthPassphrase(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgSnmpV3AuthPassphrase() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcCfgSnmpV3AuthPassphrase);

	/* Please provide your code to instrument "maxEmkcCfgSnmpV3AuthPassphrase" here */

	*varValLen = __Strlen((CHAR *)gv_maxEmkcCfgSnmpV3AuthPassphrase);
	return (U_CHAR *)gv_maxEmkcCfgSnmpV3AuthPassphrase;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgSnmpV3PrivProtocol()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpV3PrivProtocol".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgSnmpV3PrivProtocol.
 *
 *					  "privacy protocol for SNMPv3"
 *
 *	See Also		: SetMaxEmkcCfgSnmpV3PrivProtocol().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgSnmpV3PrivProtocol(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgSnmpV3PrivProtocol() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgSnmpV3PrivProtocol" here */

	*varValLen = sizeof(gv_maxEmkcCfgSnmpV3PrivProtocol);
	return (U_CHAR *)&gv_maxEmkcCfgSnmpV3PrivProtocol;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgSnmpV3PrivPassphrase()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpV3PrivPassphrase".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgSnmpV3PrivPassphrase.
 *
 *					  "privacy passphrase for SNMPv3"
 *
 *	See Also		: SetMaxEmkcCfgSnmpV3PrivPassphrase().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgSnmpV3PrivPassphrase(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgSnmpV3PrivPassphrase() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcCfgSnmpV3PrivPassphrase);

	/* Please provide your code to instrument "maxEmkcCfgSnmpV3PrivPassphrase" here */

	*varValLen = __Strlen((CHAR *)gv_maxEmkcCfgSnmpV3PrivPassphrase);
	return (U_CHAR *)gv_maxEmkcCfgSnmpV3PrivPassphrase;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgSnmpTrapRetries()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpTrapRetries".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgSnmpTrapRetries.
 *
 *					  "number of retries for sending traps"
 *
 *	See Also		: SetMaxEmkcCfgSnmpTrapRetries().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgSnmpTrapRetries(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgSnmpTrapRetries() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgSnmpTrapRetries" here */

	*varValLen = sizeof(gv_maxEmkcCfgSnmpTrapRetries);
	return (U_CHAR *)&gv_maxEmkcCfgSnmpTrapRetries;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgSnmpTrapTimeout()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpTrapTimeout".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgSnmpTrapTimeout.
 *
 *					  "timeout for sending traps (in seconds)"
 *
 *	See Also		: SetMaxEmkcCfgSnmpTrapTimeout().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgSnmpTrapTimeout(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgSnmpTrapTimeout() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgSnmpTrapTimeout" here */

	*varValLen = sizeof(gv_maxEmkcCfgSnmpTrapTimeout);
	return (U_CHAR *)&gv_maxEmkcCfgSnmpTrapTimeout;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcCfgSmnpEnabledVersion()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSmnpEnabledVersion".
 *
 *	Task			: Get method for scalar variable maxEmkcCfgSmnpEnabledVersion.
 *
 *					  "currently enabled SNMP version"
 *
 *	See Also		: SetMaxEmkcCfgSmnpEnabledVersion().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcCfgSmnpEnabledVersion(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcCfgSmnpEnabledVersion() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcCfgSmnpEnabledVersion" here */

	*varValLen = sizeof(gv_maxEmkcCfgSmnpEnabledVersion);
	return (U_CHAR *)&gv_maxEmkcCfgSmnpEnabledVersion;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgSnmpReadCommunity()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpReadCommunity".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgSnmpReadCommunity.
 *
 *					  "read community for SNMPv1 and SNMPv2c"
 *
 *	See Also		: GetMaxEmkcCfgSnmpReadCommunity().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgSnmpReadCommunity(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcCfgSnmpReadCommunity" will be freed
	 * and reallocated here.
	 */

	INT32 i=0;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgSnmpReadCommunity() @@@@@\n");

	if (*status == VALIDATE)
	{
		
	if( *varValLen  > 6)
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
		/* Set the maxEmkcCfgSnmpReadCommunity scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcCfgSnmpReadCommunity,
					varVal, *varValLen);

		/* Please provide your code to instrument "maxEmkcCfgSnmpReadCommunity" here */
	}
	*varValLen = __Strlen((CHAR *)gv_maxEmkcCfgSnmpReadCommunity);
	return (U_CHAR *)gv_maxEmkcCfgSnmpReadCommunity;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgSnmpWriteCommunity()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpWriteCommunity".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgSnmpWriteCommunity.
 *
 *					  "read community for SNMPv1 and SNMPv2c"
 *
 *	See Also		: GetMaxEmkcCfgSnmpWriteCommunity().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgSnmpWriteCommunity(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcCfgSnmpWriteCommunity" will be freed
	 * and reallocated here.
	 */

	INT32 i=0;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgSnmpWriteCommunity() @@@@@\n");

	if (*status == VALIDATE)
	{
		
	if( *varValLen  > 6)
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
		/* Set the maxEmkcCfgSnmpWriteCommunity scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcCfgSnmpWriteCommunity,
					varVal, *varValLen);

		/* Please provide your code to instrument "maxEmkcCfgSnmpWriteCommunity" here */
	}
	*varValLen = __Strlen((CHAR *)gv_maxEmkcCfgSnmpWriteCommunity);
	return (U_CHAR *)gv_maxEmkcCfgSnmpWriteCommunity;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgSnmpContact()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpContact".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgSnmpContact.
 *
 *					  "SNMP contact string for Lantime"
 *
 *	See Also		: GetMaxEmkcCfgSnmpContact().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgSnmpContact(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcCfgSnmpContact" will be freed
	 * and reallocated here.
	 */

	INT32 i=0;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgSnmpContact() @@@@@\n");

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
		/* Set the maxEmkcCfgSnmpContact scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcCfgSnmpContact,
					varVal, *varValLen);

		/* Please provide your code to instrument "maxEmkcCfgSnmpContact" here */
	}
	*varValLen = __Strlen((CHAR *)gv_maxEmkcCfgSnmpContact);
	return (U_CHAR *)gv_maxEmkcCfgSnmpContact;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgSnmpLocation()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpLocation".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgSnmpLocation.
 *
 *					  "SNMP object location string"
 *
 *	See Also		: GetMaxEmkcCfgSnmpLocation().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgSnmpLocation(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcCfgSnmpLocation" will be freed
	 * and reallocated here.
	 */

	INT32 i=0;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgSnmpLocation() @@@@@\n");

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
		/* Set the maxEmkcCfgSnmpLocation scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcCfgSnmpLocation,
					varVal, *varValLen);

		/* Please provide your code to instrument "maxEmkcCfgSnmpLocation" here */
	}
	*varValLen = __Strlen((CHAR *)gv_maxEmkcCfgSnmpLocation);
	return (U_CHAR *)gv_maxEmkcCfgSnmpLocation;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgSnmpV3UserName()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpV3UserName".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgSnmpV3UserName.
 *
 *					  "username for SNMPv3"
 *
 *	See Also		: GetMaxEmkcCfgSnmpV3UserName().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgSnmpV3UserName(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcCfgSnmpV3UserName" will be freed
	 * and reallocated here.
	 */

	INT32 i=0;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgSnmpV3UserName() @@@@@\n");

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
		/* Set the maxEmkcCfgSnmpV3UserName scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcCfgSnmpV3UserName,
					varVal, *varValLen);

		/* Please provide your code to instrument "maxEmkcCfgSnmpV3UserName" here */
	}
	*varValLen = __Strlen((CHAR *)gv_maxEmkcCfgSnmpV3UserName);
	return (U_CHAR *)gv_maxEmkcCfgSnmpV3UserName;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgSnmpV3UserRights()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpV3UserRights".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgSnmpV3UserRights.
 *
 *					  "privacy protocol for SNMPv3"
 *
 *	See Also		: GetMaxEmkcCfgSnmpV3UserRights().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgSnmpV3UserRights(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgSnmpV3UserRights() @@@@@\n");

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
		gv_maxEmkcCfgSnmpV3UserRights = value;
		/* Please provide your code to instrument "maxEmkcCfgSnmpV3UserRights" here */
	}

	*varValLen = sizeof(gv_maxEmkcCfgSnmpV3UserRights);
	return (U_CHAR *)&gv_maxEmkcCfgSnmpV3UserRights;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgSnmpV3Context()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpV3Context".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgSnmpV3Context.
 *
 *					  "context string for SNMPv3"
 *
 *	See Also		: GetMaxEmkcCfgSnmpV3Context().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgSnmpV3Context(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcCfgSnmpV3Context" will be freed
	 * and reallocated here.
	 */

	INT32 i=0;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgSnmpV3Context() @@@@@\n");

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
		/* Set the maxEmkcCfgSnmpV3Context scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcCfgSnmpV3Context,
					varVal, *varValLen);

		/* Please provide your code to instrument "maxEmkcCfgSnmpV3Context" here */
	}
	*varValLen = __Strlen((CHAR *)gv_maxEmkcCfgSnmpV3Context);
	return (U_CHAR *)gv_maxEmkcCfgSnmpV3Context;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgSnmpV3SecurityLevel()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpV3SecurityLevel".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgSnmpV3SecurityLevel.
 *
 *					  "authentication level for SNMPv3"
 *
 *	See Also		: GetMaxEmkcCfgSnmpV3SecurityLevel().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgSnmpV3SecurityLevel(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgSnmpV3SecurityLevel() @@@@@\n");

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
		gv_maxEmkcCfgSnmpV3SecurityLevel = value;
		/* Please provide your code to instrument "maxEmkcCfgSnmpV3SecurityLevel" here */
	}

	*varValLen = sizeof(gv_maxEmkcCfgSnmpV3SecurityLevel);
	return (U_CHAR *)&gv_maxEmkcCfgSnmpV3SecurityLevel;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgSnmpV3AuthProtocol()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpV3AuthProtocol".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgSnmpV3AuthProtocol.
 *
 *					  "authentication protocol for SNMPv3"
 *
 *	See Also		: GetMaxEmkcCfgSnmpV3AuthProtocol().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgSnmpV3AuthProtocol(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgSnmpV3AuthProtocol() @@@@@\n");

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
		gv_maxEmkcCfgSnmpV3AuthProtocol = value;
		/* Please provide your code to instrument "maxEmkcCfgSnmpV3AuthProtocol" here */
	}

	*varValLen = sizeof(gv_maxEmkcCfgSnmpV3AuthProtocol);
	return (U_CHAR *)&gv_maxEmkcCfgSnmpV3AuthProtocol;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgSnmpV3AuthPassphrase()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpV3AuthPassphrase".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgSnmpV3AuthPassphrase.
 *
 *					  "authentication passphrase for SNMPv3"
 *
 *	See Also		: GetMaxEmkcCfgSnmpV3AuthPassphrase().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgSnmpV3AuthPassphrase(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcCfgSnmpV3AuthPassphrase" will be freed
	 * and reallocated here.
	 */

	INT32 i=0;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgSnmpV3AuthPassphrase() @@@@@\n");

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
		/* Set the maxEmkcCfgSnmpV3AuthPassphrase scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcCfgSnmpV3AuthPassphrase,
					varVal, *varValLen);

		/* Please provide your code to instrument "maxEmkcCfgSnmpV3AuthPassphrase" here */
	}
	*varValLen = __Strlen((CHAR *)gv_maxEmkcCfgSnmpV3AuthPassphrase);
	return (U_CHAR *)gv_maxEmkcCfgSnmpV3AuthPassphrase;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgSnmpV3PrivProtocol()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpV3PrivProtocol".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgSnmpV3PrivProtocol.
 *
 *					  "privacy protocol for SNMPv3"
 *
 *	See Also		: GetMaxEmkcCfgSnmpV3PrivProtocol().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgSnmpV3PrivProtocol(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgSnmpV3PrivProtocol() @@@@@\n");

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
		gv_maxEmkcCfgSnmpV3PrivProtocol = value;
		/* Please provide your code to instrument "maxEmkcCfgSnmpV3PrivProtocol" here */
	}

	*varValLen = sizeof(gv_maxEmkcCfgSnmpV3PrivProtocol);
	return (U_CHAR *)&gv_maxEmkcCfgSnmpV3PrivProtocol;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgSnmpV3PrivPassphrase()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpV3PrivPassphrase".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgSnmpV3PrivPassphrase.
 *
 *					  "privacy passphrase for SNMPv3"
 *
 *	See Also		: GetMaxEmkcCfgSnmpV3PrivPassphrase().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgSnmpV3PrivPassphrase(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcCfgSnmpV3PrivPassphrase" will be freed
	 * and reallocated here.
	 */

	INT32 i=0;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgSnmpV3PrivPassphrase() @@@@@\n");

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
		/* Set the maxEmkcCfgSnmpV3PrivPassphrase scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcCfgSnmpV3PrivPassphrase,
					varVal, *varValLen);

		/* Please provide your code to instrument "maxEmkcCfgSnmpV3PrivPassphrase" here */
	}
	*varValLen = __Strlen((CHAR *)gv_maxEmkcCfgSnmpV3PrivPassphrase);
	return (U_CHAR *)gv_maxEmkcCfgSnmpV3PrivPassphrase;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgSnmpTrapRetries()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpTrapRetries".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgSnmpTrapRetries.
 *
 *					  "number of retries for sending traps"
 *
 *	See Also		: GetMaxEmkcCfgSnmpTrapRetries().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgSnmpTrapRetries(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	U_INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgSnmpTrapRetries() @@@@@\n");

	value = (* ((U_INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		if((value < 0) || ( value > 32))
		{
			*status = SNMP_ERR_WRONGVALUE;
			return NULL;
		}
	}
	else
	{
		gv_maxEmkcCfgSnmpTrapRetries = value;
		/* Please provide your code to instrument "maxEmkcCfgSnmpTrapRetries" here */
	}

	*varValLen = sizeof(gv_maxEmkcCfgSnmpTrapRetries);
	return (U_CHAR *)&gv_maxEmkcCfgSnmpTrapRetries;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgSnmpTrapTimeout()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSnmpTrapTimeout".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgSnmpTrapTimeout.
 *
 *					  "timeout for sending traps (in seconds)"
 *
 *	See Also		: GetMaxEmkcCfgSnmpTrapTimeout().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgSnmpTrapTimeout(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	U_INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgSnmpTrapTimeout() @@@@@\n");

	value = (* ((U_INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		if((value < 0) || ( value > 32))
		{
			*status = SNMP_ERR_WRONGVALUE;
			return NULL;
		}
	}
	else
	{
		gv_maxEmkcCfgSnmpTrapTimeout = value;
		/* Please provide your code to instrument "maxEmkcCfgSnmpTrapTimeout" here */
	}

	*varValLen = sizeof(gv_maxEmkcCfgSnmpTrapTimeout);
	return (U_CHAR *)&gv_maxEmkcCfgSnmpTrapTimeout;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcCfgSmnpEnabledVersion()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcCfgSmnpEnabledVersion".
 *
 *	Task			: Set method for scalar variable maxEmkcCfgSmnpEnabledVersion.
 *
 *					  "currently enabled SNMP version"
 *
 *	See Also		: GetMaxEmkcCfgSmnpEnabledVersion().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcCfgSmnpEnabledVersion(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcCfgSmnpEnabledVersion() @@@@@\n");

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
		gv_maxEmkcCfgSmnpEnabledVersion = value;
		/* Please provide your code to instrument "maxEmkcCfgSmnpEnabledVersion" here */
	}

	*varValLen = sizeof(gv_maxEmkcCfgSmnpEnabledVersion);
	return (U_CHAR *)&gv_maxEmkcCfgSmnpEnabledVersion;
}


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgsnmpinstru.c
 *****************************************************************************/
