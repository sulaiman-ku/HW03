//seba alzaher
//220111486
//hw3
//2.3
//
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>


int main(int argc , char* argv[])
{
     if(argc>3)
     {
	     printf("\n ERROR:Something wrong with comand-line arguments\n\n");
	     return 0;
     
     }
       char s[30];
       strcpy(s,argv[1]);

	printf("Length:%d %d\n ",strlen(argv[1]),strlen(argv[2]));
	printf("Compare:%d\n",strcmp(argv[1],argv[2]));
	printf("Concatenate:%s\n",strcat(argv[1],argv[2]));

    	printf("Copy:%s %s",s);
        printf("\n");

	return 0;

}




