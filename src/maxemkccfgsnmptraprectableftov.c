/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgsnmptraprectableftov.c.
 *
 *  Purpose	: This file is used only when text file storage is used.The 
 * 			  file contains methods to read from & write to the 
 * 			  maxemkccfgsnmptraprectable.txt file in the <bin>/ftov/max-emkc 
 * 			  directory.
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
#ifdef FILE_TO_VECTOR
#include "genincludes.h"
#include "maxemkccfgsnmptraprectable.h" 

/******************************************************************************
 *	Function Name	: ReadFromMaxEmkcCfgSnmpTrapRecTableFile()
 *
 *	Args			: Nothing.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will read the "maxEmkcCfgSnmpTrapRecTable" entries
 *					  from the file and add it to the table(vector). After
 *					  Successfully reading from the file it returns SUCCESS
 *					  else FAILURE.
 *
 *	See Also		: WriteToMaxEmkcCfgSnmpTrapRecTableFile().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR ReadFromMaxEmkcCfgSnmpTrapRecTableFile()
{
	FILE	*fptr;
	U_INT32 maxEmkcSnmpTrapRecIndex;
	INT32	maxEmkcCfgSnmpTrapRecRowStatus;
	U_CHAR	maxEmkcCfgSnmpTrapRecAddress[STRING_MAX_LEN];
	INT32	maxEmkcCfgSnmpTrapRecAddressLen;
	U_CHAR	maxEmkcCfgSnmpRecCommunity[STRING_MAX_LEN];
	INT32	maxEmkcCfgSnmpTrapRecVersion;
	CHAR	*fileName;
	CHAR	retVal;
	CHAR	rowStatus[20];

	DEBUGMSG1("\n\t@@@@@ Inside ReadFromMaxEmkcCfgSnmpTrapRecTableFile() @@@@@\n");

	retVal = SUCCESS;

	fileName = (CHAR *)__Calloc(1, (__Strlen(gptr_agentRootDir) + __Strlen(MAXEMKCCFGSNMPTRAPRECTABLE_FILE) + 1 ));

	CHECK_NULL_RETURN_ERROR(fileName);

	__Strcpy(fileName, gptr_agentRootDir);

	__Strcat(fileName, MAXEMKCCFGSNMPTRAPRECTABLE_FILE);

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
		/* Reading from the file for the column maxEmkcSnmpTrapRecIndex. */
		if(fscanf(fptr,"%u ",
				&maxEmkcSnmpTrapRecIndex)== EOF)
		{
			break;
		}


		/* Reading from the file for the column maxEmkcCfgSnmpTrapRecRowStatus. */
		if(fscanf(fptr,"%s ", rowStatus) == EOF)
		{
			break;
		}

		/* Reading from the file for the column maxEmkcCfgSnmpTrapRecAddress. */
		if(fscanf(fptr,"%d ", &maxEmkcCfgSnmpTrapRecAddressLen) == EOF)
		{
			break;
		}
		/* Reading from the file for the column maxEmkcCfgSnmpTrapRecAddress. */
		if(ReadStringFromFile(fptr, maxEmkcCfgSnmpTrapRecAddress, maxEmkcCfgSnmpTrapRecAddressLen) == FAILURE)
		{
			break;
		}


		/* Reading from the file for the column maxEmkcCfgSnmpRecCommunity. */
		if(fscanf(fptr,"%s ", maxEmkcCfgSnmpRecCommunity) == EOF)
		{
			break;
		}

		/* Reading from the file for the column maxEmkcCfgSnmpTrapRecVersion. */
		if(fscanf(fptr,"%d ",
				&maxEmkcCfgSnmpTrapRecVersion)== EOF)
		{
			break;
		}

		/* Reading from the file for the column maxEmkcCfgSnmpTrapRecVersion. */
		MapRowStatusToInteger(rowStatus, &maxEmkcCfgSnmpTrapRecRowStatus);

		if(maxEmkcCfgSnmpTrapRecRowStatus != ERR_NUM)
		{
		/* Creates an Instance for "maxEmkcCfgSnmpTrapRecTable" and adds it to the correspondingvector. */
		retVal = CreateAndAddNewMaxEmkcCfgSnmpTrapRecTableEntry(maxEmkcSnmpTrapRecIndex, maxEmkcCfgSnmpTrapRecRowStatus, 
					maxEmkcCfgSnmpTrapRecAddress, maxEmkcCfgSnmpTrapRecAddressLen, maxEmkcCfgSnmpRecCommunity, 
					maxEmkcCfgSnmpTrapRecVersion);
		}
	}

	fclose(fptr);

	return retVal;
}


/******************************************************************************
 *	Function Name	: WriteToMaxEmkcCfgSnmpTrapRecTableFile()
 *
 *	Args			: Nothing.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will write the "maxEmkcCfgSnmpTrapRecTable" entries 
 * 					  from the table(vector). After successfully writing into
 * 					  the file it returns SUCCESS else FAILURE.
 *
 *	See Also		: ReadFromMaxEmkcCfgSnmpTrapRecTableFile().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR WriteToMaxEmkcCfgSnmpTrapRecTableFile()
{
	INT32	i;
	FILE	*fptr;

	Node	*nodePtr;
	Entry	*entryPtr;
	MaxEmkcCfgSnmpTrapRecTableEntry *maxEmkcCfgSnmpTrapRecTableEntryPtr;
	CHAR	*fileName;
	CHAR	str[STRING_MAX_LEN];
	CHAR	finalStr[FTOV_MAX_COMMENT_LINE];
	CHAR	rowStatus[20];

	DEBUGMSG1("\n\t@@@@@ Inside WriteToMaxEmkcCfgSnmpTrapRecTableFile() @@@@@\n");

	fileName = (CHAR *)__Calloc(1, (__Strlen(gptr_agentRootDir) + __Strlen(MAXEMKCCFGSNMPTRAPRECTABLE_FILE) + 1 ));

	CHECK_NULL_RETURN_ERROR(fileName);

	__Strcpy(fileName, gptr_agentRootDir);

	__Strcat(fileName, MAXEMKCCFGSNMPTRAPRECTABLE_FILE);

	READ_AND_STORE_COMMENTED_LINES();

	fptr = fopen(fileName, "w");

	__Free(fileName);

	if (fptr == NULL)
	{
		DEBUGMSG1("Cannot Open file for writing\n");
		return FAILURE;
	}

	fprintf(fptr, "%s", finalStr);
	nodePtr = ElementAt(&gv_maxEmkcCfgSnmpTrapRecTableVector, 0);

	for (i=0; i<gv_maxEmkcCfgSnmpTrapRecTableVector.size; i++)
	{
		entryPtr = (Entry *)nodePtr->refPtr;
		maxEmkcCfgSnmpTrapRecTableEntryPtr = (MaxEmkcCfgSnmpTrapRecTableEntry *)entryPtr->ptr;

		/* Writing to the file for the column maxEmkcSnmpTrapRecIndex. */
		fprintf(fptr,"%u ",
				maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcSnmpTrapRecIndex);

		MapRowStatusToString(maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpTrapRecRowStatus, rowStatus);

		/* Writing to the file for the column maxEmkcCfgSnmpTrapRecRowStatus. */
		fprintf(fptr,"%s ",
				rowStatus);

		
		/* Writing to the file for the column maxEmkcCfgSnmpTrapRecAddress. */
		fprintf(fptr,"%d ",maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpTrapRecAddressLen);
	
		WriteStringToFile(fptr, maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpTrapRecAddress, maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpTrapRecAddressLen);
		fprintf(fptr, "%c", ' ');


		
		/* Writing to the file for the column maxEmkcCfgSnmpRecCommunity. */
		fprintf(fptr, "%s ", maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpRecCommunity);

		fprintf(fptr,"%d \n",
				maxEmkcCfgSnmpTrapRecTableEntryPtr->maxEmkcCfgSnmpTrapRecVersion);

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
 *						 End of maxemkccfgsnmptraprectableftov.c
 *****************************************************************************/
