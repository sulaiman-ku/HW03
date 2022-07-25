#include<stdio.h>
#include<stdlib.h>
#include"bitwise.h"

#define TWOSHIFT 2
#define ONESHIFT 1
int main(int argc, char* argv[]){
	if(argc<=1){
		exit(1);
	}
       int num1 = atoi(argv[0]);
       int num2 = atoi(argv[1]);


       printf("Addition : %d\n",add(num1,num2));
       printf("Multiplication: %d\n",multiply(num1,num2));
       printf("division %d\n:",divide(num1,num2));

       printf("Bitwise AND: %d\n",(num1 & num2));
       printf("Bitwise OR: %d\n",(num1 | num2));
       printf("Bitwise NOT first number: %d\n",(~num1));
       printf("Bitwise NOT second number: %d\n",(~num2));
       printf("Right shift by two: %d\n",num1>>TWOSHIFT);
       printf("Left shift by one: %d\n", num2<<ONESHIFT);
       return 0;


}
