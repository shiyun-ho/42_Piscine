#include <stdio.h>

int main()
{
	int age = 21; 
//declare a pointer with '*'
//access the memory address of variable 'age' with '&'
	int *pAge = &age; //make sure pointer type is the same as original variable

	//These are the same
	// This shows memory address
	printf("Memory Address: %p\n", &age); //memory address can be accessed by &age
	printf("Or we can declare pointer with *pAge and call it: %p\n", pAge);

	//This shows the value of integer 
	printf("Value of age: %d\n", age); 
	printf("Also 'value at address' operator: %d\n", *pAge); 

	//to print the size of bytes for variable 
	printf("Size of int variable: %d\n", sizeof(*pAge)); //also age 
	printf("Size of pointer: %d\n", sizeof(&age));  //also pAge
	return (0); 
}
