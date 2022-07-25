#include<stdio.h>
#include<string.h>
int main(int argc,char*argv[])
{
	if(argc<3||argc>3)
		printf("erorr .... you should enter 2 strings");
	else
		printf("length:%d%c%d\n",strlen(argv[1]),' ',strlen(argv[2]));
	printf("compare: %d\n",strcmp(argv[1],argv[2]));
	char str[256];
	strcpy(str,argv[1]);
	printf("concatenate:%s\n",strcat(argv[1],argv[2]));
	strcpy(argv[2],str);
	printf("copy: %s%c%s\n",str,' ',argv[2]);
	return 0;
}

