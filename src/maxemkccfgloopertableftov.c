/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgloopertableftov.c.
 *
 *  Purpose	: This file is used only when text file storage is used.The 
 * 			  file contains methods to read from & write to the 
 * 			  maxemkccfgloopertable.txt file in the <bin>/ftov/max-emkc 
 * 			  directory.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:44 MSK 2018
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
#include "maxemkccfgloopertable.h" 

/******************************************************************************
 *	Function Name	: ReadFromMaxEmkcCfgLooperTableFile()
 *
 *	Args			: Nothing.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will read the "maxEmkcCfgLooperTable" entries from
 *					  the file and add it to the table(vector). After
 *					  Successfully reading from the file it returns SUCCESS
 *					  else FAILURE.
 *
 *	See Also		: WriteToMaxEmkcCfgLooperTableFile().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR ReadFromMaxEmkcCfgLooperTableFile()
{
	FILE	*fptr;
	U_INT32 maxEmkcLooperTableIndex;
	INT32	maxEmkcLooperRowStatus;
	CHAR	*fileName;
	CHAR	retVal;
	CHAR	rowStatus[20];

	DEBUGMSG1("\n\t@@@@@ Inside ReadFromMaxEmkcCfgLooperTableFile() @@@@@\n");

	retVal = SUCCESS;

	fileName = (CHAR *)__Calloc(1, (__Strlen(gptr_agentRootDir) + __Strlen(MAXEMKCCFGLOOPERTABLE_FILE) + 1 ));

	CHECK_NULL_RETURN_ERROR(fileName);

	__Strcpy(fileName, gptr_agentRootDir);

	__Strcat(fileName, MAXEMKCCFGLOOPERTABLE_FILE);

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
		/* Reading from the file for the column maxEmkcLooperTableIndex. */
		if(fscanf(fptr,"%u ",
				&maxEmkcLooperTableIndex)== EOF)
		{
			break;
		}


		/* Reading from the file for the column maxEmkcLooperRowStatus. */
		if(fscanf(fptr,"%s ", rowStatus) == EOF)
		{
			break;
		}

		/* Reading from the file for the column maxEmkcLooperRowStatus. */
		MapRowStatusToInteger(rowStatus, &maxEmkcLooperRowStatus);

		if(maxEmkcLooperRowStatus != ERR_NUM)
		{
		/* Creates an Instance for "maxEmkcCfgLooperTable" and adds it to the correspondingvector. */
		retVal = CreateAndAddNewMaxEmkcCfgLooperTableEntry(maxEmkcLooperTableIndex, maxEmkcLooperRowStatus);
		}
	}

	fclose(fptr);

	return retVal;
}


/******************************************************************************
 *	Function Name	: WriteToMaxEmkcCfgLooperTableFile()
 *
 *	Args			: Nothing.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will write the "maxEmkcCfgLooperTable" entries from 
 * 					  the table(vector). After successfully writing into the 
 * 					  file it returns SUCCESS else FAILURE.
 *
 *	See Also		: ReadFromMaxEmkcCfgLooperTableFile().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR WriteToMaxEmkcCfgLooperTableFile()
{
	INT32	i;
	FILE	*fptr;

	Node	*nodePtr;
	Entry	*entryPtr;
	MaxEmkcCfgLooperTableEntry *maxEmkcCfgLooperTableEntryPtr;
	CHAR	*fileName;
	CHAR	str[STRING_MAX_LEN];
	CHAR	finalStr[FTOV_MAX_COMMENT_LINE];
	CHAR	rowStatus[20];

	DEBUGMSG1("\n\t@@@@@ Inside WriteToMaxEmkcCfgLooperTableFile() @@@@@\n");

	fileName = (CHAR *)__Calloc(1, (__Strlen(gptr_agentRootDir) + __Strlen(MAXEMKCCFGLOOPERTABLE_FILE) + 1 ));

	CHECK_NULL_RETURN_ERROR(fileName);

	__Strcpy(fileName, gptr_agentRootDir);

	__Strcat(fileName, MAXEMKCCFGLOOPERTABLE_FILE);

	READ_AND_STORE_COMMENTED_LINES();

	fptr = fopen(fileName, "w");

	__Free(fileName);

	if (fptr == NULL)
	{
		DEBUGMSG1("Cannot Open file for writing\n");
		return FAILURE;
	}

	fprintf(fptr, "%s", finalStr);
	nodePtr = ElementAt(&gv_maxEmkcCfgLooperTableVector, 0);

	for (i=0; i<gv_maxEmkcCfgLooperTableVector.size; i++)
	{
		entryPtr = (Entry *)nodePtr->refPtr;
		maxEmkcCfgLooperTableEntryPtr = (MaxEmkcCfgLooperTableEntry *)entryPtr->ptr;

		/* Writing to the file for the column maxEmkcLooperTableIndex. */
		fprintf(fptr,"%u ",
				maxEmkcCfgLooperTableEntryPtr->maxEmkcLooperTableIndex);

		MapRowStatusToString(maxEmkcCfgLooperTableEntryPtr->maxEmkcLooperRowStatus, rowStatus);

		/* Writing to the file for the column maxEmkcLooperRowStatus. */
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
 *						 End of maxemkccfgloopertableftov.c
 *****************************************************************************/
