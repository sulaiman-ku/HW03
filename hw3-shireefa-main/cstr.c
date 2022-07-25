//shareefa Al-Othman
//221151141
//hw3, 2.3


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, char *argv[]){

	
	if (argc > 3 || argc < 3 ){
		printf("Inputing Error\n");
		exit(0);
	}

	char a[20];
	strcpy(a,argv[1]);
	char b[20];
	strcpy(b, argv[2]);
	char e[20];
	strcpy(e, argv[1]);

	printf("Length: %ld %ld\n", strlen(a), strlen(b));
	int s = strcmp(a,b);
	printf("Compare: %d\n", s);
	printf("Concatenate: %s\n", strcat(a,b));
	printf("Copy: %s %s\n",	e, strcpy(b,e));

	return 0 ;


}
