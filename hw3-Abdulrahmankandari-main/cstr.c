#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(char argc, char *argv[]){
	int len1,len2;

	if(argc!=3)
	{
		printf("wrong number of arguments. please input: ./codename WORD1 WORD2");
		exit(1);
	}
	char *word1 = argv[1];
	char *word2 = argv[2];
	
	len1 = strlen(word1);
	len2 = strlen(word2);

	printf("Length : %d %d\n", len1, len2); 

	int res = strcmp(word1, word2);

	printf("compare: %d\n", res);

	for(int i=0; word1[i]!='\0';i++);
	int i;
	for(int j=0; word2[j]!='\0';j++, i++)
	{
		word1[i] = word2[j];
	}
	word1[i] = '\0';
	printf("concatenate: %s\n", word1);
	

	return 0;
}








