#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* fopen("file_name", "w" || "r" || "a")
   w - write
   r - read
   a - append
*/
/*
An example of writing to a file, right now I'm currently appending
to a file but you can change it to write over the file which will
completely re-write over it, or you can just read it.
*/
int main(){
	// FILE type variable named fpointer
	// fopen to open file
	// fclose to close file, after writing to it using fprintf
	FILE * fpointer = fopen("employees.txt", "a");

	fprintf(fpointer, "\nAndrew, Physics");

	fclose(fpointer);

	return 0;
}
