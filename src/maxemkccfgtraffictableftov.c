/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgtraffictableftov.c.
 *
 *  Purpose	: This file is used only when text file storage is used.The 
 * 			  file contains methods to read from & write to the 
 * 			  maxemkccfgtraffictable.txt file in the <bin>/ftov/max-emkc 
 * 			  directory.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:41 MSK 2018
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
#include "maxemkccfgtraffictable.h" 

/******************************************************************************
 *	Function Name	: ReadFromMaxEmkcCfgTrafficTableFile()
 *
 *	Args			: Nothing.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will read the "maxEmkcCfgTrafficTable" entries from 
 *					  the file and add it to the table(vector). After
 *					  Successfully reading from the file it returns SUCCESS
 *					  else FAILURE.
 *
 *	See Also		: WriteToMaxEmkcCfgTrafficTableFile().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR ReadFromMaxEmkcCfgTrafficTableFile()
{
	FILE	*fptr;
	U_INT32 maxEmkcCfgTrafficIndex;
	INT32	maxEmkcCfgTrafficTableRowStatus;
	CHAR	*fileName;
	CHAR	retVal;
	CHAR	rowStatus[20];

	DEBUGMSG1("\n\t@@@@@ Inside ReadFromMaxEmkcCfgTrafficTableFile() @@@@@\n");

	retVal = SUCCESS;

	fileName = (CHAR *)__Calloc(1, (__Strlen(gptr_agentRootDir) + __Strlen(MAXEMKCCFGTRAFFICTABLE_FILE) + 1 ));

	CHECK_NULL_RETURN_ERROR(fileName);

	__Strcpy(fileName, gptr_agentRootDir);

	__Strcat(fileName, MAXEMKCCFGTRAFFICTABLE_FILE);

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
		/* Reading from the file for the column maxEmkcCfgTrafficIndex. */
		if(fscanf(fptr,"%u ",
				&maxEmkcCfgTrafficIndex)== EOF)
		{
			break;
		}


		/* Reading from the file for the column maxEmkcCfgTrafficTableRowStatus. */
		if(fscanf(fptr,"%s ", rowStatus) == EOF)
		{
			break;
		}

		/* Reading from the file for the column maxEmkcCfgTrafficTableRowStatus. */
		MapRowStatusToInteger(rowStatus, &maxEmkcCfgTrafficTableRowStatus);

		if(maxEmkcCfgTrafficTableRowStatus != ERR_NUM)
		{
		/* Creates an Instance for "maxEmkcCfgTrafficTable" and adds it to the correspondingvector. */
		retVal = CreateAndAddNewMaxEmkcCfgTrafficTableEntry(maxEmkcCfgTrafficIndex, maxEmkcCfgTrafficTableRowStatus);
		}
	}

	fclose(fptr);

	return retVal;
}


/******************************************************************************
 *	Function Name	: WriteToMaxEmkcCfgTrafficTableFile()
 *
 *	Args			: Nothing.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will write the "maxEmkcCfgTrafficTable" entries from
 * 					  the table(vector). After successfully writing into the 
 * 					  file it returns SUCCESS else FAILURE.
 *
 *	See Also		: ReadFromMaxEmkcCfgTrafficTableFile().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR WriteToMaxEmkcCfgTrafficTableFile()
{
	INT32	i;
	FILE	*fptr;

	Node	*nodePtr;
	Entry	*entryPtr;
	MaxEmkcCfgTrafficTableEntry *maxEmkcCfgTrafficTableEntryPtr;
	CHAR	*fileName;
	CHAR	str[STRING_MAX_LEN];
	CHAR	finalStr[FTOV_MAX_COMMENT_LINE];
	CHAR	rowStatus[20];

	DEBUGMSG1("\n\t@@@@@ Inside WriteToMaxEmkcCfgTrafficTableFile() @@@@@\n");

	fileName = (CHAR *)__Calloc(1, (__Strlen(gptr_agentRootDir) + __Strlen(MAXEMKCCFGTRAFFICTABLE_FILE) + 1 ));

	CHECK_NULL_RETURN_ERROR(fileName);

	__Strcpy(fileName, gptr_agentRootDir);

	__Strcat(fileName, MAXEMKCCFGTRAFFICTABLE_FILE);

	READ_AND_STORE_COMMENTED_LINES();

	fptr = fopen(fileName, "w");

	__Free(fileName);

	if (fptr == NULL)
	{
		DEBUGMSG1("Cannot Open file for writing\n");
		return FAILURE;
	}

	fprintf(fptr, "%s", finalStr);
	nodePtr = ElementAt(&gv_maxEmkcCfgTrafficTableVector, 0);

	for (i=0; i<gv_maxEmkcCfgTrafficTableVector.size; i++)
	{
		entryPtr = (Entry *)nodePtr->refPtr;
		maxEmkcCfgTrafficTableEntryPtr = (MaxEmkcCfgTrafficTableEntry *)entryPtr->ptr;

		/* Writing to the file for the column maxEmkcCfgTrafficIndex. */
		fprintf(fptr,"%u ",
				maxEmkcCfgTrafficTableEntryPtr->maxEmkcCfgTrafficIndex);

		MapRowStatusToString(maxEmkcCfgTrafficTableEntryPtr->maxEmkcCfgTrafficTableRowStatus, rowStatus);

		/* Writing to the file for the column maxEmkcCfgTrafficTableRowStatus. */
		fprintf(fptr,"%s \n",
				rowStatus);

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
 *						 End of maxemkccfgtraffictableftov.c
 *****************************************************************************/
