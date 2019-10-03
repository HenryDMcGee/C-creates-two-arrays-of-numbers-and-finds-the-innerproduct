/*Henry McGee
  Section 3
  04/07/2017
  Lab10 Multi-module Programs
  Lab 8 was reiused and partitioned into multiple files. A make file was given and the files can be   	compiled using make.
*/
#include "lab10.h"				//references lab10.h for function. 
#include <stdio.h>

void printArray(int a[]) 		//prints out both arrays.
{
		for( i=0; i<SizeOfArray; i++)
		{
		
			printf("%d ",a[i]);
				
		}
}
