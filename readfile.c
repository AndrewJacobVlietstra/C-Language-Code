#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// fopen("file_name", "w" || "r" || "a")
// w - write
// r - read
// a - append

int getLines(char file[]);//declare function's signature

int main(int argc, char * argv[]){
/*
argc is the argument counter and argv is the argument vector
argv stores the argument as a string and its memory address!
*/
	// create character pointer variable named file
	// and pass it the first argument's string and memory address
	char * file = argv[1];
	if(argc >= 3){
		printf("Error, this program only takes 1 argument!\n");
		return 0;
	}
	//printf("%s\t%p\n",file,file);
	//printf("Program name is %s\n", argv[0]);
	//printf("First arg is %s\n", argv[1]);

	int N = getLines(file);
	// FILE type variable named fpointer
	// fopen to open file
	// fclose to close file after reading it
	int i;
	char line[255];
	FILE * fpointer = fopen(file, "r");

	if(fpointer == NULL){
		printf("Unable to locate file!\n");
		return 0;
	}
	
	for(i = 0; i < N; i++){
	fgets(line, 255, fpointer);
	printf("Line %d:\t %s", i+1, line);
	}
    if(i == N){
    	printf("\n");
    }
	fclose(fpointer);


	return 0;
}

int getLines(char file[100]){ // stores the file as a string

	int lineCount = 0;
	char currentCharacter;
	FILE * filename = fopen(file,"r");
	if(filename == NULL){
		return 0;
	}
	while((currentCharacter = fgetc(filename)) != EOF){

		//'\n' is the newline character
		if(currentCharacter == '\n'){
			lineCount++;
		}
	}
	lineCount++; // to account for not counting last line
	fclose(filename);
	printf("There are %d lines in this file!\n", lineCount);
	return lineCount;
}