#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// %p gives physical memory address
// (& means the address-of), a variable that comes after the &
// will give us that variable's physical memory address!
//	& - memory address
//  * - dereference, to get value
int main(){

	int age = 30;
	double gpa = 3.2;
	char grade = 'A';
	int i;

	// creating pointer variable, this pointer variable (pAge)
	// stores the physical memory address of age
	int * pAge = &age; //&age means, get memory address of age
	double * pGpa = &gpa;
	char * pGrade = &grade;

	// think of a pointer as just another type of data,
	// and its a physical memory address
	printf("%d\n",grade);
	printf("pointer variable %p\n", pGrade);

	// dereferencing a pointer, rather than printing the memory
	// address, now we will get the value which was stored there!
	int num = 5;
	int * pNum = &num;

	// notice the *, rather than &
	// this dereferences the pointer variable to give back the value stored
	printf("%d\n", *pNum);

/*	
	for(i = 65; i<=300; i++){
		printf("%c\t%d\n",i,i);
	}
*/

	return 0;
}
