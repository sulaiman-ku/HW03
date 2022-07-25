//Jana alnasrallah
//2181144479
//Ex#2.3

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
	if(argc!= 3){
		printf("Error\n ");
		exit(1);
	}
	char* str1= argv[1];
	char* str2= argv[2];


	printf("Length: %ld %ld\n",strlen(str1),strlen(str2));
	printf("Compare: %d\n",strcmp(str1,str2));
	printf("Concatenate: %s\n",strcat(str1,str2));
	strcpy(str2,str1);
	printf("Copy: %s  %s\n",str1,str2);

	return 0;
}
