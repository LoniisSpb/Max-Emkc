/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgy1564tableftov.c.
 *
 *  Purpose	: This file is used only when text file storage is used.The 
 * 			  file contains methods to read from & write to the 
 * 			  maxemkccfgy1564table.txt file in the <bin>/ftov/max-emkc 
 * 			  directory.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:39 MSK 2018
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
#include "maxemkccfgy1564table.h" 

/******************************************************************************
 *	Function Name	: ReadFromMaxEmkcCfgY1564TableFile()
 *
 *	Args			: Nothing.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will read the "maxEmkcCfgY1564Table" entries from
 *					  the file and add it to the table(vector). After
 *					  Successfully reading from the file it returns SUCCESS
 *					  else FAILURE.
 *
 *	See Also		: WriteToMaxEmkcCfgY1564TableFile().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR ReadFromMaxEmkcCfgY1564TableFile()
{
	FILE	*fptr;
	U_INT32 maxEmkcCfgY1564TableIndex;
	INT32	maxEmkcCfgY1564TableRowStatus;
	U_CHAR	maxEmkcCfgY1564Options[STRING_MAX_LEN];
	INT32	maxEmkcCfgY1564OptionsLen;
	U_INT32 maxEmkcCfgY1564ThroughputTestDuration;
	U_INT32 maxEmkcCfgY1564TestConfigStepDuration;
	U_INT32 maxEmkcCfgY1564LearningTime;
	U_INT32 maxEmkcCfgY1564Stream1TableRow;
	U_INT32 maxEmkcCfgY1564Stream2TableRow;
	U_INT32 maxEmkcCfgY1564Stream3TableRow;
	U_INT32 maxEmkcCfgY1564Stream4TableRow;
	CHAR	*fileName;
	CHAR	retVal;
	CHAR	rowStatus[20];

	DEBUGMSG1("\n\t@@@@@ Inside ReadFromMaxEmkcCfgY1564TableFile() @@@@@\n");

	retVal = SUCCESS;

	fileName = (CHAR *)__Calloc(1, (__Strlen(gptr_agentRootDir) + __Strlen(MAXEMKCCFGY1564TABLE_FILE) + 1 ));

	CHECK_NULL_RETURN_ERROR(fileName);

	__Strcpy(fileName, gptr_agentRootDir);

	__Strcat(fileName, MAXEMKCCFGY1564TABLE_FILE);

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
		/* Reading from the file for the column maxEmkcCfgY1564TableIndex. */
		if(fscanf(fptr,"%u ",
				&maxEmkcCfgY1564TableIndex)== EOF)
		{
			break;
		}


		/* Reading from the file for the column maxEmkcCfgY1564TableRowStatus. */
		if(fscanf(fptr,"%s ", rowStatus) == EOF)
		{
			break;
		}

		/* Reading from the file for the column maxEmkcCfgY1564Options. */
		if(fscanf(fptr,"%d ", &maxEmkcCfgY1564OptionsLen) == EOF)
		{
			break;
		}
		/* Reading from the file for the column maxEmkcCfgY1564Options. */
		if(ReadStringFromFile(fptr, maxEmkcCfgY1564Options, maxEmkcCfgY1564OptionsLen) == FAILURE)
		{
			break;
		}

		/* Reading from file for the columns maxEmkcCfgY1564ThroughputTestDuration, maxEmkcCfgY1564TestConfigStepDuration, maxEmkcCfgY1564LearningTime, maxEmkcCfgY1564Stream1TableRow, maxEmkcCfgY1564Stream2TableRow, maxEmkcCfgY1564Stream3TableRow, maxEmkcCfgY1564Stream4TableRow*/
		if(fscanf(fptr,"%u %u %u %u %u %u %u ",
				&maxEmkcCfgY1564ThroughputTestDuration, 
				&maxEmkcCfgY1564TestConfigStepDuration, 
				&maxEmkcCfgY1564LearningTime, 
				&maxEmkcCfgY1564Stream1TableRow, 
				&maxEmkcCfgY1564Stream2TableRow, 
				&maxEmkcCfgY1564Stream3TableRow, 
				&maxEmkcCfgY1564Stream4TableRow)== EOF)
		{
			break;
		}

		/* Reading from the file for the column maxEmkcCfgY1564Stream4TableRow. */
		MapRowStatusToInteger(rowStatus, &maxEmkcCfgY1564TableRowStatus);

		if(maxEmkcCfgY1564TableRowStatus != ERR_NUM)
		{
		/* Creates an Instance for "maxEmkcCfgY1564Table" and adds it to the correspondingvector. */
		retVal = CreateAndAddNewMaxEmkcCfgY1564TableEntry(maxEmkcCfgY1564TableIndex, maxEmkcCfgY1564TableRowStatus, 
					maxEmkcCfgY1564Options, maxEmkcCfgY1564OptionsLen, maxEmkcCfgY1564ThroughputTestDuration, 
					maxEmkcCfgY1564TestConfigStepDuration, maxEmkcCfgY1564LearningTime, 
					maxEmkcCfgY1564Stream1TableRow, maxEmkcCfgY1564Stream2TableRow, 
					maxEmkcCfgY1564Stream3TableRow, maxEmkcCfgY1564Stream4TableRow);
		}
	}

	fclose(fptr);

	return retVal;
}


/******************************************************************************
 *	Function Name	: WriteToMaxEmkcCfgY1564TableFile()
 *
 *	Args			: Nothing.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will write the "maxEmkcCfgY1564Table" entries from
 * 					  the table(vector). After successfully writing into the 
 * 					  file it returns SUCCESS else FAILURE.
 *
 *	See Also		: ReadFromMaxEmkcCfgY1564TableFile().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR WriteToMaxEmkcCfgY1564TableFile()
{
	INT32	i;
	FILE	*fptr;

	Node	*nodePtr;
	Entry	*entryPtr;
	MaxEmkcCfgY1564TableEntry *maxEmkcCfgY1564TableEntryPtr;
	CHAR	*fileName;
	CHAR	str[STRING_MAX_LEN];
	CHAR	finalStr[FTOV_MAX_COMMENT_LINE];
	CHAR	rowStatus[20];

	DEBUGMSG1("\n\t@@@@@ Inside WriteToMaxEmkcCfgY1564TableFile() @@@@@\n");

	fileName = (CHAR *)__Calloc(1, (__Strlen(gptr_agentRootDir) + __Strlen(MAXEMKCCFGY1564TABLE_FILE) + 1 ));

	CHECK_NULL_RETURN_ERROR(fileName);

	__Strcpy(fileName, gptr_agentRootDir);

	__Strcat(fileName, MAXEMKCCFGY1564TABLE_FILE);

	READ_AND_STORE_COMMENTED_LINES();

	fptr = fopen(fileName, "w");

	__Free(fileName);

	if (fptr == NULL)
	{
		DEBUGMSG1("Cannot Open file for writing\n");
		return FAILURE;
	}

	fprintf(fptr, "%s", finalStr);
	nodePtr = ElementAt(&gv_maxEmkcCfgY1564TableVector, 0);

	for (i=0; i<gv_maxEmkcCfgY1564TableVector.size; i++)
	{
		entryPtr = (Entry *)nodePtr->refPtr;
		maxEmkcCfgY1564TableEntryPtr = (MaxEmkcCfgY1564TableEntry *)entryPtr->ptr;

		/* Writing to the file for the column maxEmkcCfgY1564TableIndex. */
		fprintf(fptr,"%u ",
				maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564TableIndex);

		MapRowStatusToString(maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564TableRowStatus, rowStatus);

		/* Writing to the file for the column maxEmkcCfgY1564TableRowStatus. */
		fprintf(fptr,"%s ",
				rowStatus);

		
		/* Writing to the file for the column maxEmkcCfgY1564Options. */
		fprintf(fptr,"%d ",maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564OptionsLen);
	
		WriteStringToFile(fptr, maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Options, maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564OptionsLen);
		fprintf(fptr, "%c", ' ');


		/* Writing to file for the columns maxEmkcCfgY1564ThroughputTestDuration , maxEmkcCfgY1564TestConfigStepDuration , maxEmkcCfgY1564LearningTime , maxEmkcCfgY1564Stream1TableRow , maxEmkcCfgY1564Stream2TableRow , maxEmkcCfgY1564Stream3TableRow , maxEmkcCfgY1564Stream4TableRow*/
		fprintf(fptr,"%u %u %u %u %u %u %u \n",
				maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564ThroughputTestDuration, 
				maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564TestConfigStepDuration, 
				maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564LearningTime, 
				maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Stream1TableRow, 
				maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Stream2TableRow, 
				maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Stream3TableRow, 
				maxEmkcCfgY1564TableEntryPtr->maxEmkcCfgY1564Stream4TableRow);

		nodePtr = nodePtr->nextPtr;

	}


	fclose(fptr);

	return SUCCESS;
}
#endif /* #ifdef FILE_TO_VECTOR */

#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgy1564tableftov.c
 *****************************************************************************/
