/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgfirmwaresourceftov.c.
 *
 *  Purpose	: This file is used only when text file storage is used.The 
 * 			  file contains methods to read from & write to the 
 * 			  maxemkccfgfirmwaresource.txt file in the <bin>/ftov/max-emkc 
 * 			  directory.
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
#ifdef FILE_TO_VECTOR
#include "genincludes.h"
#include "maxemkccfgfirmwaresource.h" 

/******************************************************************************
 *	Function Name	: ReadFromMaxEmkcCfgFirmwareSourceFile()
 *
 *	Args			: Nothing.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will read the values from the file and assign it to 
 *					  the corresponding variables. After successfully reading
 *					  from the file it returns SUCCESS else FAILURE.
 *
 *	See Also		: WriteToMaxEmkcCfgFirmwareSourceFile().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR ReadFromMaxEmkcCfgFirmwareSourceFile()
{
	FILE	*fptr;
	CHAR 	tempString[STRING_MAX_LEN];
	CHAR	*fileName;

	DEBUGMSG1("\n\t@@@@@ Inside ReadFromMaxEmkcCfgFirmwareSourceFile() @@@@@\n");

	fileName = (CHAR *)__Calloc(1, (__Strlen(gptr_agentRootDir) + __Strlen(MAXEMKCCFGFIRMWARESOURCE_FILE) + 1 ));

	CHECK_NULL_RETURN_ERROR(fileName);

	__Strcpy(fileName, gptr_agentRootDir);

	__Strcat(fileName, MAXEMKCCFGFIRMWARESOURCE_FILE);

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
		/* Reading from the file for the scalar gv_maxEmkcCfgFirmwareSourceIpAddr. */
		if(fscanf(fptr,"%d ",&gv_maxEmkcCfgFirmwareSourceIpAddrLen) == EOF)
		{
			break;
		}
		gv_maxEmkcCfgFirmwareSourceIpAddr = (U_CHAR *) __Calloc(1, MAX_IPADDRESS_LEN+1);

		CHECK_NULL_RETURN_FAILURE(gv_maxEmkcCfgFirmwareSourceIpAddr);

		if(ReadStringFromFile(fptr, gv_maxEmkcCfgFirmwareSourceIpAddr, gv_maxEmkcCfgFirmwareSourceIpAddrLen) == FAILURE)
		{
			break;
		}

		/* Reading from the file for the scalar gv_maxEmkcCfgFirmwareSourceDestPort. */
		if(fscanf(fptr,"%u ", &gv_maxEmkcCfgFirmwareSourceDestPort) == EOF)
		{
			break;
		}

		/* Reading from the file for the scalar gv_maxEmkcCfgFirmwareSourceLogin. */
		if(fscanf(fptr,"%s ", tempString) == EOF)
		{
			break;
		}

		gv_maxEmkcCfgFirmwareSourceLogin = (U_CHAR *) __Calloc(1, __Strlen(tempString)+1);

		CHECK_NULL_RETURN_FAILURE(gv_maxEmkcCfgFirmwareSourceLogin);

		

		__Strcpy((CHAR *)gv_maxEmkcCfgFirmwareSourceLogin, tempString);

		/* Reading from the file for the scalar gv_maxEmkcCfgFirmwareSourcePassw. */
		if(fscanf(fptr,"%s ", tempString) == EOF)
		{
			break;
		}

		gv_maxEmkcCfgFirmwareSourcePassw = (U_CHAR *) __Calloc(1, __Strlen(tempString)+1);

		CHECK_NULL_RETURN_FAILURE(gv_maxEmkcCfgFirmwareSourcePassw);

		

		__Strcpy((CHAR *)gv_maxEmkcCfgFirmwareSourcePassw, tempString);

		/* Reading from the file for the scalar gv_maxEmkcCfgFirmwareSourceDirectory. */
		if(fscanf(fptr,"%s ", tempString) == EOF)
		{
			break;
		}

		gv_maxEmkcCfgFirmwareSourceDirectory = (U_CHAR *) __Calloc(1, __Strlen(tempString)+1);

		CHECK_NULL_RETURN_FAILURE(gv_maxEmkcCfgFirmwareSourceDirectory);

		

		__Strcpy((CHAR *)gv_maxEmkcCfgFirmwareSourceDirectory, tempString);

		/* Reading from the file for the scalar gv_maxEmkcCfgFirmwareSourceFilename. */
		if(fscanf(fptr,"%s ", tempString) == EOF)
		{
			break;
		}

		gv_maxEmkcCfgFirmwareSourceFilename = (U_CHAR *) __Calloc(1, __Strlen(tempString)+1);

		CHECK_NULL_RETURN_FAILURE(gv_maxEmkcCfgFirmwareSourceFilename);

		

		__Strcpy((CHAR *)gv_maxEmkcCfgFirmwareSourceFilename, tempString);
	}

	fclose(fptr);

	return SUCCESS;
}
/******************************************************************************
 *	Function Name	: WriteToMaxEmkcCfgFirmwareSourceFile()
 *
 *	Args			: Nothing.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will write the scalar object values into the file.
 * 					  After successfully writing into the file it returns
 * 					  SUCCESS else FAILURE.
 *
 *	See Also		: ReadFromMaxEmkcCfgFirmwareSourceFile().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR WriteToMaxEmkcCfgFirmwareSourceFile()
{
	FILE	*fptr;
	CHAR	*fileName;
	CHAR	str[STRING_MAX_LEN];
	CHAR	finalStr[FTOV_MAX_COMMENT_LINE];

	DEBUGMSG1("\n\t@@@@@ Inside WriteToMaxEmkcCfgFirmwareSourceFile() @@@@@\n");

	fileName = (CHAR *)__Calloc(1, (__Strlen(gptr_agentRootDir) + __Strlen(MAXEMKCCFGFIRMWARESOURCE_FILE) + 1 ));

	CHECK_NULL_RETURN_ERROR(fileName);

	__Strcpy(fileName, gptr_agentRootDir);

	__Strcat(fileName, MAXEMKCCFGFIRMWARESOURCE_FILE);

	READ_AND_STORE_COMMENTED_LINES();

	fptr = fopen(fileName, "w");

	__Free(fileName);

	if (fptr == NULL)
	{
		DEBUGMSG1("Cannot Open file for writing\n");
		return FAILURE;
	}

	fprintf(fptr, "%s", finalStr);
	
	/* Writing to the file for the scalar gv_maxEmkcCfgFirmwareSourceIpAddr. */
	fprintf(fptr,"%d ",gv_maxEmkcCfgFirmwareSourceIpAddrLen);

	WriteStringToFile(fptr, gv_maxEmkcCfgFirmwareSourceIpAddr, gv_maxEmkcCfgFirmwareSourceIpAddrLen);
	fprintf(fptr, "%c", ' ');


	/* Writing to the file for the scalar gv_maxEmkcCfgFirmwareSourceDestPort. */
	fprintf(fptr,"%u ",
				gv_maxEmkcCfgFirmwareSourceDestPort);

	
	/* Writing to the file for the scalar gv_maxEmkcCfgFirmwareSourceLogin. */
	fprintf(fptr, "%s ", gv_maxEmkcCfgFirmwareSourceLogin);

	
	/* Writing to the file for the scalar gv_maxEmkcCfgFirmwareSourcePassw. */
	fprintf(fptr, "%s ", gv_maxEmkcCfgFirmwareSourcePassw);

	
	/* Writing to the file for the scalar gv_maxEmkcCfgFirmwareSourceDirectory. */
	fprintf(fptr, "%s ", gv_maxEmkcCfgFirmwareSourceDirectory);

	
	/* Writing to the file for the scalar gv_maxEmkcCfgFirmwareSourceFilename. */
	fprintf(fptr, "%s \n", gv_maxEmkcCfgFirmwareSourceFilename);


	fclose(fptr);

	return SUCCESS;
}
#endif /* #ifdef FILE_TO_VECTOR */

#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgfirmwaresourceftov.c
 *****************************************************************************/
