/** @file traceback.c
 *  @brief The traceback function
 *
 *  This file contains the traceback function for the traceback library
 *
 *  @author Harry Q. Bovik (hqbovik)
 *  @bug Unimplemented
 */

#include "traceback_internal.h"

void traceback(FILE *fp)
{
	/* the following just makes a sample access to "functions" array. 
	 * note if "functions" is not referenced somewhere outside the 
	 * file that it's declared in, symtabgen won't be able to find
	 * the symbol. So be sure to always do something with functions */

	/* remove this line once you've got real code here */
		int i;
	for (i = 0; i < FUNCTS_MAX_NUM; ++i)
	{
		/* code */
		if(!functions[i].addr) break;
		printf("%d first function in table name: %s\n",i, functions[i].name);
	}

}


