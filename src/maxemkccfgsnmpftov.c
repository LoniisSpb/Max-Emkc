/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgsnmpftov.c.
 *
 *  Purpose	: This file is used only when text file storage is used.The 
 * 			  file contains methods to read from & write to the 
 * 			  maxemkccfgsnmp.txt file in the <bin>/ftov/max-emkc 
 * 			  directory.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:41:00 MSK 2018
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
#include "maxemkccfgsnmp.h" 

/******************************************************************************
 *	Function Name	: ReadFromMaxEmkcCfgSnmpFile()
 *
 *	Args			: Nothing.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will read the values from the file and assign it to 
 *					  the corresponding variables. After successfully reading
 *					  from the file it returns SUCCESS else FAILURE.
 *
 *	See Also		: WriteToMaxEmkcCfgSnmpFile().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR ReadFromMaxEmkcCfgSnmpFile()
{
	FILE	*fptr;
	CHAR 	tempString[STRING_MAX_LEN];
	CHAR	*fileName;

	DEBUGMSG1("\n\t@@@@@ Inside ReadFromMaxEmkcCfgSnmpFile() @@@@@\n");

	fileName = (CHAR *)__Calloc(1, (__Strlen(gptr_agentRootDir) + __Strlen(MAXEMKCCFGSNMP_FILE) + 1 ));

	CHECK_NULL_RETURN_ERROR(fileName);

	__Strcpy(fileName, gptr_agentRootDir);

	__Strcat(fileName, MAXEMKCCFGSNMP_FILE);

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
		/* Reading from the file for the scalar gv_maxEmkcCfgSnmpReadCommunity. */
		if(fscanf(fptr,"%s ", tempString) == EOF)
		{
			break;
		}

		gv_maxEmkcCfgSnmpReadCommunity = (U_CHAR *) __Calloc(1, __Strlen(tempString)+1);

		CHECK_NULL_RETURN_FAILURE(gv_maxEmkcCfgSnmpReadCommunity);

		

		__Strcpy((CHAR *)gv_maxEmkcCfgSnmpReadCommunity, tempString);

		/* Reading from the file for the scalar gv_maxEmkcCfgSnmpWriteCommunity. */
		if(fscanf(fptr,"%s ", tempString) == EOF)
		{
			break;
		}

		gv_maxEmkcCfgSnmpWriteCommunity = (U_CHAR *) __Calloc(1, __Strlen(tempString)+1);

		CHECK_NULL_RETURN_FAILURE(gv_maxEmkcCfgSnmpWriteCommunity);

		

		__Strcpy((CHAR *)gv_maxEmkcCfgSnmpWriteCommunity, tempString);

		/* Reading from the file for the scalar gv_maxEmkcCfgSnmpContact. */
		if(fscanf(fptr,"%s ", tempString) == EOF)
		{
			break;
		}

		gv_maxEmkcCfgSnmpContact = (U_CHAR *) __Calloc(1, __Strlen(tempString)+1);

		CHECK_NULL_RETURN_FAILURE(gv_maxEmkcCfgSnmpContact);

		

		__Strcpy((CHAR *)gv_maxEmkcCfgSnmpContact, tempString);

		/* Reading from the file for the scalar gv_maxEmkcCfgSnmpLocation. */
		if(fscanf(fptr,"%s ", tempString) == EOF)
		{
			break;
		}

		gv_maxEmkcCfgSnmpLocation = (U_CHAR *) __Calloc(1, __Strlen(tempString)+1);

		CHECK_NULL_RETURN_FAILURE(gv_maxEmkcCfgSnmpLocation);

		

		__Strcpy((CHAR *)gv_maxEmkcCfgSnmpLocation, tempString);

		/* Reading from the file for the scalar gv_maxEmkcCfgSnmpV3UserName. */
		if(fscanf(fptr,"%s ", tempString) == EOF)
		{
			break;
		}

		gv_maxEmkcCfgSnmpV3UserName = (U_CHAR *) __Calloc(1, __Strlen(tempString)+1);

		CHECK_NULL_RETURN_FAILURE(gv_maxEmkcCfgSnmpV3UserName);

		

		__Strcpy((CHAR *)gv_maxEmkcCfgSnmpV3UserName, tempString);

		/* Reading from the file for the scalar gv_maxEmkcCfgSnmpV3UserRights. */
		if(fscanf(fptr,"%d ", &gv_maxEmkcCfgSnmpV3UserRights) == EOF)
		{
			break;
		}

		/* Reading from the file for the scalar gv_maxEmkcCfgSnmpV3Context. */
		if(fscanf(fptr,"%s ", tempString) == EOF)
		{
			break;
		}

		gv_maxEmkcCfgSnmpV3Context = (U_CHAR *) __Calloc(1, __Strlen(tempString)+1);

		CHECK_NULL_RETURN_FAILURE(gv_maxEmkcCfgSnmpV3Context);

		

		__Strcpy((CHAR *)gv_maxEmkcCfgSnmpV3Context, tempString);

		/* Reading from the file for the scalar gv_maxEmkcCfgSnmpV3SecurityLevel. */
		if(fscanf(fptr,"%d ", &gv_maxEmkcCfgSnmpV3SecurityLevel) == EOF)
		{
			break;
		}

		/* Reading from the file for the scalar gv_maxEmkcCfgSnmpV3AuthProtocol. */
		if(fscanf(fptr,"%d ", &gv_maxEmkcCfgSnmpV3AuthProtocol) == EOF)
		{
			break;
		}

		/* Reading from the file for the scalar gv_maxEmkcCfgSnmpV3AuthPassphrase. */
		if(fscanf(fptr,"%s ", tempString) == EOF)
		{
			break;
		}

		gv_maxEmkcCfgSnmpV3AuthPassphrase = (U_CHAR *) __Calloc(1, __Strlen(tempString)+1);

		CHECK_NULL_RETURN_FAILURE(gv_maxEmkcCfgSnmpV3AuthPassphrase);

		

		__Strcpy((CHAR *)gv_maxEmkcCfgSnmpV3AuthPassphrase, tempString);

		/* Reading from the file for the scalar gv_maxEmkcCfgSnmpV3PrivProtocol. */
		if(fscanf(fptr,"%d ", &gv_maxEmkcCfgSnmpV3PrivProtocol) == EOF)
		{
			break;
		}

		/* Reading from the file for the scalar gv_maxEmkcCfgSnmpV3PrivPassphrase. */
		if(fscanf(fptr,"%s ", tempString) == EOF)
		{
			break;
		}

		gv_maxEmkcCfgSnmpV3PrivPassphrase = (U_CHAR *) __Calloc(1, __Strlen(tempString)+1);

		CHECK_NULL_RETURN_FAILURE(gv_maxEmkcCfgSnmpV3PrivPassphrase);

		

		__Strcpy((CHAR *)gv_maxEmkcCfgSnmpV3PrivPassphrase, tempString);

		/* Reading from the file for the scalar gv_maxEmkcCfgSnmpTrapRetries. */
		if(fscanf(fptr,"%u ", &gv_maxEmkcCfgSnmpTrapRetries) == EOF)
		{
			break;
		}

		/* Reading from the file for the scalar gv_maxEmkcCfgSnmpTrapTimeout. */
		if(fscanf(fptr,"%u ", &gv_maxEmkcCfgSnmpTrapTimeout) == EOF)
		{
			break;
		}

		/* Reading from the file for the scalar gv_maxEmkcCfgSmnpEnabledVersion. */
		if(fscanf(fptr,"%d ", &gv_maxEmkcCfgSmnpEnabledVersion) == EOF)
		{
			break;
		}
	}

	fclose(fptr);

	return SUCCESS;
}
/******************************************************************************
 *	Function Name	: WriteToMaxEmkcCfgSnmpFile()
 *
 *	Args			: Nothing.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will write the scalar object values into the file.
 * 					  After successfully writing into the file it returns
 * 					  SUCCESS else FAILURE.
 *
 *	See Also		: ReadFromMaxEmkcCfgSnmpFile().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR WriteToMaxEmkcCfgSnmpFile()
{
	FILE	*fptr;
	CHAR	*fileName;
	CHAR	str[STRING_MAX_LEN];
	CHAR	finalStr[FTOV_MAX_COMMENT_LINE];

	DEBUGMSG1("\n\t@@@@@ Inside WriteToMaxEmkcCfgSnmpFile() @@@@@\n");

	fileName = (CHAR *)__Calloc(1, (__Strlen(gptr_agentRootDir) + __Strlen(MAXEMKCCFGSNMP_FILE) + 1 ));

	CHECK_NULL_RETURN_ERROR(fileName);

	__Strcpy(fileName, gptr_agentRootDir);

	__Strcat(fileName, MAXEMKCCFGSNMP_FILE);

	READ_AND_STORE_COMMENTED_LINES();

	fptr = fopen(fileName, "w");

	__Free(fileName);

	if (fptr == NULL)
	{
		DEBUGMSG1("Cannot Open file for writing\n");
		return FAILURE;
	}

	fprintf(fptr, "%s", finalStr);
	
	/* Writing to the file for the scalar gv_maxEmkcCfgSnmpReadCommunity. */
	fprintf(fptr, "%s ", gv_maxEmkcCfgSnmpReadCommunity);

	
	/* Writing to the file for the scalar gv_maxEmkcCfgSnmpWriteCommunity. */
	fprintf(fptr, "%s ", gv_maxEmkcCfgSnmpWriteCommunity);

	
	/* Writing to the file for the scalar gv_maxEmkcCfgSnmpContact. */
	fprintf(fptr, "%s ", gv_maxEmkcCfgSnmpContact);

	
	/* Writing to the file for the scalar gv_maxEmkcCfgSnmpLocation. */
	fprintf(fptr, "%s ", gv_maxEmkcCfgSnmpLocation);

	
	/* Writing to the file for the scalar gv_maxEmkcCfgSnmpV3UserName. */
	fprintf(fptr, "%s ", gv_maxEmkcCfgSnmpV3UserName);

	/* Writing to the file for the scalar gv_maxEmkcCfgSnmpV3UserRights. */
	fprintf(fptr,"%d ",
				gv_maxEmkcCfgSnmpV3UserRights);

	
	/* Writing to the file for the scalar gv_maxEmkcCfgSnmpV3Context. */
	fprintf(fptr, "%s ", gv_maxEmkcCfgSnmpV3Context);

	/* Writing to file for the scalars gv_maxEmkcCfgSnmpV3SecurityLevel, gv_maxEmkcCfgSnmpV3AuthProtocol */
	fprintf(fptr,"%d %d ",
				gv_maxEmkcCfgSnmpV3SecurityLevel, 
				gv_maxEmkcCfgSnmpV3AuthProtocol);

	
	/* Writing to the file for the scalar gv_maxEmkcCfgSnmpV3AuthPassphrase. */
	fprintf(fptr, "%s ", gv_maxEmkcCfgSnmpV3AuthPassphrase);

	/* Writing to the file for the scalar gv_maxEmkcCfgSnmpV3PrivProtocol. */
	fprintf(fptr,"%d ",
				gv_maxEmkcCfgSnmpV3PrivProtocol);

	
	/* Writing to the file for the scalar gv_maxEmkcCfgSnmpV3PrivPassphrase. */
	fprintf(fptr, "%s ", gv_maxEmkcCfgSnmpV3PrivPassphrase);

	/* Writing to file for the scalars gv_maxEmkcCfgSnmpTrapRetries, gv_maxEmkcCfgSnmpTrapTimeout, gv_maxEmkcCfgSmnpEnabledVersion*/
	fprintf(fptr,"%u %u %d \n",
				gv_maxEmkcCfgSnmpTrapRetries, 
				gv_maxEmkcCfgSnmpTrapTimeout, 
				gv_maxEmkcCfgSmnpEnabledVersion);


	fclose(fptr);

	return SUCCESS;
}
#endif /* #ifdef FILE_TO_VECTOR */

#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgsnmpftov.c
 *****************************************************************************/
