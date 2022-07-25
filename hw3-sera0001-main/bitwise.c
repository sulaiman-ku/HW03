#include <stdio.h>
#include <stdlib.h>
//marco functions:
#define addition(a ,b) (a+b)
#define multiplication(x ,y) (x*y)
#define division(s , h)(s/h)
//marco constants:
#define  TWOSHIFT 2
#define  ONESHIFT 1

int main(int argc , char *argv[])
{	int z;
	if(argc!=3){
		printf("error");
		exit(1);
	}
	int x=atoi(argv[1]);
	int y=atoi(argv[2]);
	printf("Addition:%d\n", addition(x,y));
	printf("Multiplication:%d\n", multiplication(x,y));
	printf("Division:%d\n",division(x,y));	
	printf(" bitwise AND :%d\n", x&y);
	printf("bitwise OR:%d\n", x|y);
	printf("bitwise NOT first number :%d\n", ~x);
	printf("bitwise NOT two number :%d\n", ~y);
	printf("Right shift by two:%d\n", x>>TWOSHIFT);
	printf("Left shift by one :%d\n" ,y<<ONESHIFT);
}
