//Abdulwahab Alenezi
//2191123055
//c string 2.3
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	char s1[256],s2[256],s3[256];
	if (argc!=3)
	{
		printf("\nError!!!!");
		exit(0);
	}
	strcpy(s1,argv[1]);
	strcpy(s2,s1);
	strcpy(s3,argv[2]);
	printf("Len:  %d %d ", strlen(s1),strlen(s2));
	printf("\nComp: %d", strcmp(s1,s3));
	printf("\nConcat %s",strcat(s1,s3));
	strcpy(s2,s3);
	printf("\nCopy %s... %s",s3,s2);
	
	return 0;
}
