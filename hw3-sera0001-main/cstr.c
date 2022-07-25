#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc , char *argv[])
{	if(argc!=3){
		printf("error");
		exit(1);
		   }
         printf("the length of first string =%ld\n",strlen(argv[1]));
	 printf("the length of the second string =%ld\n",strlen(argv[2]));

	 printf(" compare =%d\n",strcmp(argv[1] ,argv[2]));
       	printf("concatenate:%s\n",strcat(argv[1] ,argv[2]));
	 printf("copy:%s\n",strcpy(argv[2] , argv[1]));


}

