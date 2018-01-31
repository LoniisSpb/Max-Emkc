/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkcsnmpagentinfoftov.c.
 *
 *  Purpose	: This file is used only when text file storage is used.The 
 * 			  file contains methods to read from & write to the 
 * 			  maxemkcsnmpagentinfo.txt file in the <bin>/ftov/max-emkc 
 * 			  directory.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:23 MSK 2018
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
#include "maxemkcsnmpagentinfo.h" 

/******************************************************************************
 *	Function Name	: ReadFromMaxEmkcSnmpAgentInfoFile()
 *
 *	Args			: Nothing.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will read the values from the file and assign it to 
 *					  the corresponding variables. After successfully reading
 *					  from the file it returns SUCCESS else FAILURE.
 *
 *	See Also		: WriteToMaxEmkcSnmpAgentInfoFile().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR ReadFromMaxEmkcSnmpAgentInfoFile()
{
	FILE	*fptr;
	CHAR 	tempString[STRING_MAX_LEN];
	CHAR	*fileName;

	DEBUGMSG1("\n\t@@@@@ Inside ReadFromMaxEmkcSnmpAgentInfoFile() @@@@@\n");

	fileName = (CHAR *)__Calloc(1, (__Strlen(gptr_agentRootDir) + __Strlen(MAXEMKCSNMPAGENTINFO_FILE) + 1 ));

	CHECK_NULL_RETURN_ERROR(fileName);

	__Strcpy(fileName, gptr_agentRootDir);

	__Strcat(fileName, MAXEMKCSNMPAGENTINFO_FILE);

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
		/* Reading from the file for the scalar gv_maxEmkcSnmpAgentOsVersion. */
		if(fscanf(fptr,"%s ", tempString) == EOF)
		{
			break;
		}

		gv_maxEmkcSnmpAgentOsVersion = (U_CHAR *) __Calloc(1, __Strlen(tempString)+1);

		CHECK_NULL_RETURN_FAILURE(gv_maxEmkcSnmpAgentOsVersion);

		

		__Strcpy((CHAR *)gv_maxEmkcSnmpAgentOsVersion, tempString);

		/* Reading from the file for the scalar gv_maxEmkcSnmpAgentSoftwareVersion. */
		if(fscanf(fptr,"%s ", tempString) == EOF)
		{
			break;
		}

		gv_maxEmkcSnmpAgentSoftwareVersion = (U_CHAR *) __Calloc(1, __Strlen(tempString)+1);

		CHECK_NULL_RETURN_FAILURE(gv_maxEmkcSnmpAgentSoftwareVersion);

		

		__Strcpy((CHAR *)gv_maxEmkcSnmpAgentSoftwareVersion, tempString);

		/* Reading from the file for the scalar gv_maxEmkcSnmpAgentHardwareVersion. */
		if(fscanf(fptr,"%s ", tempString) == EOF)
		{
			break;
		}

		gv_maxEmkcSnmpAgentHardwareVersion = (U_CHAR *) __Calloc(1, __Strlen(tempString)+1);

		CHECK_NULL_RETURN_FAILURE(gv_maxEmkcSnmpAgentHardwareVersion);

		

		__Strcpy((CHAR *)gv_maxEmkcSnmpAgentHardwareVersion, tempString);

		/* Reading from the file for the scalar gv_maxEmkcSnmpAgentSerialNumber. */
		if(fscanf(fptr,"%s ", tempString) == EOF)
		{
			break;
		}

		gv_maxEmkcSnmpAgentSerialNumber = (U_CHAR *) __Calloc(1, __Strlen(tempString)+1);

		CHECK_NULL_RETURN_FAILURE(gv_maxEmkcSnmpAgentSerialNumber);

		

		__Strcpy((CHAR *)gv_maxEmkcSnmpAgentSerialNumber, tempString);
	}

	fclose(fptr);

	return SUCCESS;
}
/******************************************************************************
 *	Function Name	: WriteToMaxEmkcSnmpAgentInfoFile()
 *
 *	Args			: Nothing.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will write the scalar object values into the file.
 * 					  After successfully writing into the file it returns
 * 					  SUCCESS else FAILURE.
 *
 *	See Also		: ReadFromMaxEmkcSnmpAgentInfoFile().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR WriteToMaxEmkcSnmpAgentInfoFile()
{
	FILE	*fptr;
	CHAR	*fileName;
	CHAR	str[STRING_MAX_LEN];
	CHAR	finalStr[FTOV_MAX_COMMENT_LINE];

	DEBUGMSG1("\n\t@@@@@ Inside WriteToMaxEmkcSnmpAgentInfoFile() @@@@@\n");

	fileName = (CHAR *)__Calloc(1, (__Strlen(gptr_agentRootDir) + __Strlen(MAXEMKCSNMPAGENTINFO_FILE) + 1 ));

	CHECK_NULL_RETURN_ERROR(fileName);

	__Strcpy(fileName, gptr_agentRootDir);

	__Strcat(fileName, MAXEMKCSNMPAGENTINFO_FILE);

	READ_AND_STORE_COMMENTED_LINES();

	fptr = fopen(fileName, "w");

	__Free(fileName);

	if (fptr == NULL)
	{
		DEBUGMSG1("Cannot Open file for writing\n");
		return FAILURE;
	}

	fprintf(fptr, "%s", finalStr);
	
	/* Writing to the file for the scalar gv_maxEmkcSnmpAgentOsVersion. */
	fprintf(fptr, "%s ", gv_maxEmkcSnmpAgentOsVersion);

	
	/* Writing to the file for the scalar gv_maxEmkcSnmpAgentSoftwareVersion. */
	fprintf(fptr, "%s ", gv_maxEmkcSnmpAgentSoftwareVersion);

	
	/* Writing to the file for the scalar gv_maxEmkcSnmpAgentHardwareVersion. */
	fprintf(fptr, "%s ", gv_maxEmkcSnmpAgentHardwareVersion);

	
	/* Writing to the file for the scalar gv_maxEmkcSnmpAgentSerialNumber. */
	fprintf(fptr, "%s \n", gv_maxEmkcSnmpAgentSerialNumber);


	fclose(fptr);

	return SUCCESS;
}
#endif /* #ifdef FILE_TO_VECTOR */

#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkcsnmpagentinfoftov.c
 *****************************************************************************/
