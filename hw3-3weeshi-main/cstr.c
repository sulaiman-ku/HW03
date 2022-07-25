#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[]){
	
	//(c) accept 2 arguments
	if (argc != 3){
		printf("ERROR");
		exit (1);
	}

	char string1 [100];
        strcpy(string1,argv[1]);
	char string2[100];
	       	strcpy(string2, argv[2]);

	int length1, length2;

	//strlen
	length1= strlen(string1);
	length2= strlen(string2);
	printf("Length: %d%d\n", length1, length2);

	//strcmp (if result = 0 then th two strings are equal & if it's > 0 then the first
	//non-matching character of 1st string is greater then the one of 2nd string (ASCII)
	//if < 0 then the 1st character of the 1st string is lower than the one of 2nd
	
	int result;
	result = strcmp (string1, string2);
	printf("Compare: %d\n", result);
	
	//concatenate using strcat 
	strcat(string1, string2);
	printf("Concatenate : %s\n", string1);

	//copy using cpy()
	printf("Copy: %s %s\n",argv[1], strcpy(argv[2], argv[1]));
	
	return 0;
}
