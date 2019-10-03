/*Henry McGee
  Section 3
  04/07/2017
  Lab10 Multi-module Programs
  Lab 8 was reiused and partitioned into multiple files. A make file was given and the files can be   	compiled using make.
*/
#include "lab10.h"													//references lab10.h for functions. 
#include <stdio.h>

int main () {

																	//these are references to functions in the main. 
initialize(array1);
initialize(array2);

printArray(array1);
printf("\n");
printArray(array2);
product=innerProduct(array1, array2);
printf("\nThe inner product of the arrays are %d\n",product);		//prints out the product of both arrays

return 0;
}
