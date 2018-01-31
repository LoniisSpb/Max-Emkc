/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkcsnmpethportsettingsftov.c.
 *
 *  Purpose	: This file is used only when text file storage is used.The 
 * 			  file contains methods to read from & write to the 
 * 			  maxemkcsnmpethportsettings.txt file in the <bin>/ftov/max-emkc 
 * 			  directory.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:27 MSK 2018
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
#ifdef FILE_TO_VECTOR
#include "genincludes.h"
#include "maxemkcsnmpethportsettings.h" 

/******************************************************************************
 *	Function Name	: ReadFromMaxEmkcSnmpEthPortSettingsFile()
 *
 *	Args			: Nothing.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will read the values from the file and assign it to 
 *					  the corresponding variables. After successfully reading
 *					  from the file it returns SUCCESS else FAILURE.
 *
 *	See Also		: WriteToMaxEmkcSnmpEthPortSettingsFile().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR ReadFromMaxEmkcSnmpEthPortSettingsFile()
{
	FILE	*fptr;
	INT32	len;
	CHAR	*fileName;

	DEBUGMSG1("\n\t@@@@@ Inside ReadFromMaxEmkcSnmpEthPortSettingsFile() @@@@@\n");

	fileName = (CHAR *)__Calloc(1, (__Strlen(gptr_agentRootDir) + __Strlen(MAXEMKCSNMPETHPORTSETTINGS_FILE) + 1 ));

	CHECK_NULL_RETURN_ERROR(fileName);

	__Strcpy(fileName, gptr_agentRootDir);

	__Strcat(fileName, MAXEMKCSNMPETHPORTSETTINGS_FILE);

	fptr = fopen(fileName, "r");

	__Free(fileName);

	if( fptr == NULL)
	{
		DEBUGMSG1("Cannot Open file for reading\n");
		return FAILURE;
	}

	while (!feof(fptr))
	{
		IGNORE_COMMENTED_LINES();
		/* Reading from the file for the scalar gv_maxEmkcSnmpEthPortMacAddress. */
		if(fscanf(fptr,"%d ",&len) == EOF)
		{
			break;
		}

		gv_maxEmkcSnmpEthPortMacAddress = (U_CHAR *) __Calloc(1, len+1);

		CHECK_NULL_RETURN_FAILURE(gv_maxEmkcSnmpEthPortMacAddress);

		

		gv_maxEmkcSnmpEthPortMacAddressLen = len;

		if(ReadStringFromFile(fptr, gv_maxEmkcSnmpEthPortMacAddress, len) == FAILURE)
		{
			break;
		}

		/* Reading from the file for the scalar gv_maxEmkcSnmpEthPortIpAddress. */
		if(fscanf(fptr,"%d ",&gv_maxEmkcSnmpEthPortIpAddressLen) == EOF)
		{
			break;
		}
		gv_maxEmkcSnmpEthPortIpAddress = (U_CHAR *) __Calloc(1, MAX_IPADDRESS_LEN+1);

		CHECK_NULL_RETURN_FAILURE(gv_maxEmkcSnmpEthPortIpAddress);

		if(ReadStringFromFile(fptr, gv_maxEmkcSnmpEthPortIpAddress, gv_maxEmkcSnmpEthPortIpAddressLen) == FAILURE)
		{
			break;
		}

		/* Reading from the file for the scalar gv_maxEmkcSnmpEthPortMask. */
		if(fscanf(fptr,"%u ", &gv_maxEmkcSnmpEthPortMask) == EOF)
		{
			break;
		}

		/* Reading from the file for the scalar gv_maxEmkcSnmpEthPortGw. */
		if(fscanf(fptr,"%d ",&gv_maxEmkcSnmpEthPortGwLen) == EOF)
		{
			break;
		}
		gv_maxEmkcSnmpEthPortGw = (U_CHAR *) __Calloc(1, MAX_IPADDRESS_LEN+1);

		CHECK_NULL_RETURN_FAILURE(gv_maxEmkcSnmpEthPortGw);

		if(ReadStringFromFile(fptr, gv_maxEmkcSnmpEthPortGw, gv_maxEmkcSnmpEthPortGwLen) == FAILURE)
		{
			break;
		}
	}

	fclose(fptr);

	return SUCCESS;
}
/******************************************************************************
 *	Function Name	: WriteToMaxEmkcSnmpEthPortSettingsFile()
 *
 *	Args			: Nothing.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will write the scalar object values into the file.
 * 					  After successfully writing into the file it returns
 * 					  SUCCESS else FAILURE.
 *
 *	See Also		: ReadFromMaxEmkcSnmpEthPortSettingsFile().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR WriteToMaxEmkcSnmpEthPortSettingsFile()
{
	FILE	*fptr;
	CHAR	*fileName;
	CHAR	str[STRING_MAX_LEN];
	CHAR	finalStr[FTOV_MAX_COMMENT_LINE];

	DEBUGMSG1("\n\t@@@@@ Inside WriteToMaxEmkcSnmpEthPortSettingsFile() @@@@@\n");

	fileName = (CHAR *)__Calloc(1, (__Strlen(gptr_agentRootDir) + __Strlen(MAXEMKCSNMPETHPORTSETTINGS_FILE) + 1 ));

	CHECK_NULL_RETURN_ERROR(fileName);

	__Strcpy(fileName, gptr_agentRootDir);

	__Strcat(fileName, MAXEMKCSNMPETHPORTSETTINGS_FILE);

	READ_AND_STORE_COMMENTED_LINES();

	fptr = fopen(fileName, "w");

	__Free(fileName);

	if (fptr == NULL)
	{
		DEBUGMSG1("Cannot Open file for writing\n");
		return FAILURE;
	}

	fprintf(fptr, "%s", finalStr);
	
	/* Writing to the file for the scalar gv_maxEmkcSnmpEthPortMacAddress. */
	fprintf(fptr,"%d ",gv_maxEmkcSnmpEthPortMacAddressLen);

	WriteStringToFile(fptr, gv_maxEmkcSnmpEthPortMacAddress, gv_maxEmkcSnmpEthPortMacAddressLen);
	fprintf(fptr, "%c", ' ');


	
	/* Writing to the file for the scalar gv_maxEmkcSnmpEthPortIpAddress. */
	fprintf(fptr,"%d ",gv_maxEmkcSnmpEthPortIpAddressLen);

	WriteStringToFile(fptr, gv_maxEmkcSnmpEthPortIpAddress, gv_maxEmkcSnmpEthPortIpAddressLen);
	fprintf(fptr, "%c", ' ');


	/* Writing to the file for the scalar gv_maxEmkcSnmpEthPortMask. */
	fprintf(fptr,"%u ",
				gv_maxEmkcSnmpEthPortMask);

	
	/* Writing to the file for the scalar gv_maxEmkcSnmpEthPortGw. */
	fprintf(fptr,"%d ",gv_maxEmkcSnmpEthPortGwLen);

	WriteStringToFile(fptr, gv_maxEmkcSnmpEthPortGw, gv_maxEmkcSnmpEthPortGwLen);
	

	fclose(fptr);

	return SUCCESS;
}
#endif /* #ifdef FILE_TO_VECTOR */

#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkcsnmpethportsettingsftov.c
 *****************************************************************************/
