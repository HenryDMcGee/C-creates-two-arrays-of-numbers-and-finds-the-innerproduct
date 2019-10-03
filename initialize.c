/*Henry McGee
  Section 3
  04/07/2017
  Lab10 Multi-module Programs
  Lab 8 was reiused and partitioned into multiple files. A make file was given and the files can be   	compiled using make.
*/
#include "lab10.h" 			//references lab10.h for functions.
#include <stdio.h>

void initialize(int a[]) 
{
	int input=0;
	printf("Choose 1-4 to initialize an array\n 1. all numbers from 1-20\n 2. the first 20 even numbers beginning with 2\n 3. the 20 odd numbers, beginning with 1\n 4. the first 20 fibonacci numbers, beginning with 0 and 1\n");
	scanf("%i",&input);
	switch (input) 			//switch statement was used since it would be more organized than an if-else statement. 
	{
		case 1: 
		{
			all(a);
		}
		break;
	
		case 2:
		{
			even(a);
		}
		break;

		case 3: 
		{
			odd(a);
		}
		break;
	
		case 4: 
		{
			fib(a);
		}
		break;
	}
}
void all(int a[]) 			//for numbers 0-20
{		
		for( i=0; i<SizeOfArray; i++)
		{
			a[i]=i+1;
		}
		
}
void even(int a[])			//for 20 even numbers
{
		for( i=0; i<SizeOfArray; i++)
		{
			 j = (i+1)*2;
			a[i]=j;
		}
}
void odd(int a[]) 			//for 20 odd numbers
{
		for( i=0; i<SizeOfArray; i++)
		{
			 j = (i+1)*2-1;
			a[i]=j;
		}		
}
void fib(int a[]) 			//for 20 fibonacci numbers
{
		 total;
		a[0] = 0;
		a[1] = 1;
		for( i=2; i<SizeOfArray; i++)
		{
			total=a[i-2]+a[i-1];
			a[i]=total;
		}	
}
