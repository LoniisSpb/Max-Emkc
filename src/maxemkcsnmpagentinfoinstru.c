/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkcsnmpagentinfoinstru.c.
 *
 *  Purpose	: File contains get and set methods for each scalar 
 * 			  of the module maxEmkcSnmpAgentInfo.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:22 MSK 2018
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
#include "maxemkcsnmpagentinfo.h" 

/*****************************************************************************
 *	Function Name	: GetMaxEmkcSnmpAgentOsVersion()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcSnmpAgentOsVersion".
 *
 *	Task			: Get method for scalar variable maxEmkcSnmpAgentOsVersion.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcSnmpAgentOsVersion().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcSnmpAgentOsVersion(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcSnmpAgentOsVersion() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcSnmpAgentOsVersion);

	/* Please provide your code to instrument "maxEmkcSnmpAgentOsVersion" here */

	*varValLen = __Strlen((CHAR *)gv_maxEmkcSnmpAgentOsVersion);
	return (U_CHAR *)gv_maxEmkcSnmpAgentOsVersion;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcSnmpAgentSoftwareVersion()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcSnmpAgentSoftwareVersion".
 *
 *	Task			: Get method for scalar variable maxEmkcSnmpAgentSoftwareVersion.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcSnmpAgentSoftwareVersion().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcSnmpAgentSoftwareVersion(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcSnmpAgentSoftwareVersion() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcSnmpAgentSoftwareVersion);

	/* Please provide your code to instrument "maxEmkcSnmpAgentSoftwareVersion" here */

	*varValLen = __Strlen((CHAR *)gv_maxEmkcSnmpAgentSoftwareVersion);
	return (U_CHAR *)gv_maxEmkcSnmpAgentSoftwareVersion;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcSnmpAgentHardwareVersion()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcSnmpAgentHardwareVersion".
 *
 *	Task			: Get method for scalar variable maxEmkcSnmpAgentHardwareVersion.
 *
 *					  "Hardware (schematic and PSB) version"
 *
 *	See Also		: SetMaxEmkcSnmpAgentHardwareVersion().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcSnmpAgentHardwareVersion(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcSnmpAgentHardwareVersion() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcSnmpAgentHardwareVersion);

	/* Please provide your code to instrument "maxEmkcSnmpAgentHardwareVersion" here */

	*varValLen = __Strlen((CHAR *)gv_maxEmkcSnmpAgentHardwareVersion);
	return (U_CHAR *)gv_maxEmkcSnmpAgentHardwareVersion;
}

/*****************************************************************************
 *	Function Name	: GetMaxEmkcSnmpAgentSerialNumber()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcSnmpAgentSerialNumber".
 *
 *	Task			: Get method for scalar variable maxEmkcSnmpAgentSerialNumber.
 *
 *					  "MAKC-EMKC1 serial number"
 *
 *	See Also		: SetMaxEmkcSnmpAgentSerialNumber().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcSnmpAgentSerialNumber(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcSnmpAgentSerialNumber() @@@@@\n");

	CHECK_FOR_NULL(gv_maxEmkcSnmpAgentSerialNumber);

	/* Please provide your code to instrument "maxEmkcSnmpAgentSerialNumber" here */

	*varValLen = __Strlen((CHAR *)gv_maxEmkcSnmpAgentSerialNumber);
	return (U_CHAR *)gv_maxEmkcSnmpAgentSerialNumber;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcSnmpAgentOsVersion()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcSnmpAgentOsVersion".
 *
 *	Task			: Set method for scalar variable maxEmkcSnmpAgentOsVersion.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcSnmpAgentOsVersion().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcSnmpAgentOsVersion(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcSnmpAgentOsVersion" will be freed
	 * and reallocated here.
	 */

	INT32 i=0;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcSnmpAgentOsVersion() @@@@@\n");

	if (*status == VALIDATE)
	{
		
	if( *varValLen  > 32)
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
		/* Set the maxEmkcSnmpAgentOsVersion scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcSnmpAgentOsVersion,
					varVal, *varValLen);

		/* Please provide your code to instrument "maxEmkcSnmpAgentOsVersion" here */
	}
	*varValLen = __Strlen((CHAR *)gv_maxEmkcSnmpAgentOsVersion);
	return (U_CHAR *)gv_maxEmkcSnmpAgentOsVersion;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcSnmpAgentSoftwareVersion()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcSnmpAgentSoftwareVersion".
 *
 *	Task			: Set method for scalar variable maxEmkcSnmpAgentSoftwareVersion.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcSnmpAgentSoftwareVersion().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcSnmpAgentSoftwareVersion(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcSnmpAgentSoftwareVersion" will be freed
	 * and reallocated here.
	 */

	INT32 i=0;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcSnmpAgentSoftwareVersion() @@@@@\n");

	if (*status == VALIDATE)
	{
		
	if( *varValLen  > 32)
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
		/* Set the maxEmkcSnmpAgentSoftwareVersion scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcSnmpAgentSoftwareVersion,
					varVal, *varValLen);

		/* Please provide your code to instrument "maxEmkcSnmpAgentSoftwareVersion" here */
	}
	*varValLen = __Strlen((CHAR *)gv_maxEmkcSnmpAgentSoftwareVersion);
	return (U_CHAR *)gv_maxEmkcSnmpAgentSoftwareVersion;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcSnmpAgentHardwareVersion()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcSnmpAgentHardwareVersion".
 *
 *	Task			: Set method for scalar variable maxEmkcSnmpAgentHardwareVersion.
 *
 *					  "Hardware (schematic and PSB) version"
 *
 *	See Also		: GetMaxEmkcSnmpAgentHardwareVersion().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcSnmpAgentHardwareVersion(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcSnmpAgentHardwareVersion" will be freed
	 * and reallocated here.
	 */

	INT32 i=0;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcSnmpAgentHardwareVersion() @@@@@\n");

	if (*status == VALIDATE)
	{
		
	if( *varValLen  > 32)
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
		/* Set the maxEmkcSnmpAgentHardwareVersion scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcSnmpAgentHardwareVersion,
					varVal, *varValLen);

		/* Please provide your code to instrument "maxEmkcSnmpAgentHardwareVersion" here */
	}
	*varValLen = __Strlen((CHAR *)gv_maxEmkcSnmpAgentHardwareVersion);
	return (U_CHAR *)gv_maxEmkcSnmpAgentHardwareVersion;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcSnmpAgentSerialNumber()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcSnmpAgentSerialNumber".
 *
 *	Task			: Set method for scalar variable maxEmkcSnmpAgentSerialNumber.
 *
 *					  "MAKC-EMKC1 serial number"
 *
 *	See Also		: GetMaxEmkcSnmpAgentSerialNumber().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcSnmpAgentSerialNumber(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	
	/*
	 * The existing memory for the variable "maxEmkcSnmpAgentSerialNumber" will be freed
	 * and reallocated here.
	 */

	INT32 i=0;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcSnmpAgentSerialNumber() @@@@@\n");

	if (*status == VALIDATE)
	{
		
	if( *varValLen  > 15)
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
		/* Set the maxEmkcSnmpAgentSerialNumber scalar variable */
		ReallocateAndSetString(
					(U_CHAR **)&gv_maxEmkcSnmpAgentSerialNumber,
					varVal, *varValLen);

		/* Please provide your code to instrument "maxEmkcSnmpAgentSerialNumber" here */
	}
	*varValLen = __Strlen((CHAR *)gv_maxEmkcSnmpAgentSerialNumber);
	return (U_CHAR *)gv_maxEmkcSnmpAgentSerialNumber;
}


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkcsnmpagentinfoinstru.c
 *****************************************************************************/
