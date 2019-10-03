/*Henry McGee
  Section 3
  04/07/2017
  Lab10 Multi-module Programs
  Lab 8 was reiused and partitioned into multiple files. A make file was given and the files can be   	compiled using make.
*/
#define SizeOfArray 20								//SizeOfArray cannot change. 
#include <stdio.h>



int array1[20], array2[20], product, i, j, b, total; /*product is used for assigning the innerproduct. total is used for the odd and fibonacci numbers. i is used for loops while b and j are used for calculations.*/


void initialize(int a[]);           //based on a user input the case of the array is decided.
void all(int a[]);   	            //values 1-20 are assigned to the array.
void even(int a[]);		    //20 even values starting at 2 are assigned to the array.
void odd(int a[]);		    //20 odd values starting at 1 are assigned to the array. 
void fib(int a[]);		    //20 fibonacci numbers are assigned to the array. 
void printArray(int a[]);           //prints the values of the array.
int innerProduct (int a [ ], int b[ ]); //Finds the product of the two arrays.


