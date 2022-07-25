#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 40

int main(int argc, char *argv[])
{

/*	argv[1] = "hello";
	argv[2] = "world!";
*/	
	if( argc != 3 )
	{
		printf("Wrong Input!\n");
		exit(1);
	}

	char *str1 = argv[1];
	char *str2 = argv[2];

	char str3[SIZE]; strcpy(str3, str1);
	char str4[SIZE]; strcpy(str4, str2);
	
		
	printf("Length: %ld %ld\n", strlen(str1), strlen(str2) );
	printf("Compare: %d\n", strcmp(str1, str2) );	

	printf("Concatenate: %s\n", strcat(str3, str4) );
	
	strcpy(str3, str1);	strcpy(str4, str2);
	
	printf("Copy: %s %s\n", strcpy(str4, str3), str3);
	return 0;  
}
