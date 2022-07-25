#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
	char  str1[100], str2[100];

	scanf("%s", str1);
	scanf("%s", str2);

	if (str1 == NULL || str2 == NULL)
	{
		printf("\nError: strings == NULL");
		exit(0);
	}

	int i = strlen(str1), j = strlen(str2);
	char* one = str1;
	char* two = str2;
	printf("\nLength: %ld %ld", strlen(str1), strlen(str2));
	printf("\nCompare: %d", strcmp(str1, str2));
	strcpy(two, str1);
	printf("\nCopy: %s, %s", str1, two);
	printf("\nConcatenate: %s", strcat(str1, str2));
	printf("\n");
	return 0;
}

