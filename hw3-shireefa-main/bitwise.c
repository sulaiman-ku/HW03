//shareefa Al-Othman
//221151141
//hw3 2.4


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "macro.h"
#define TWOSHIFT 2
#define ONESHIFT 1

int main (int argc , char *argv[]){

	if ( argc < 3 || argc > 3 ){
		printf("Wrong input\n");
		exit(0);
	}

	for ( int i = 0 ; i < strlen(argv[1]); i++){
		if (argv[1][i] <'0' || argv[1][i] >'9' ){
			printf("You didn't enter an integer\n");
			exit(0);
		}
	}
	for (int i = 0 ; i < strlen(argv[2]) ; i++){
		if (argv[2][i] < '0' || argv[2][i] > '9'){
			printf("You didn't enter an intger\n");
			exit(0);
		}
	}

	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	if ( b == 0 ){
		printf("Cannot divid by zero\n");
		exit(0);
	}

	printf("Addintion: %d \n", sum(a,b));
	printf("Multiplication: %d \n", multi(a,b));
	printf("Division: %d\n", division(a,b));
	printf("Bitwise AND: %d\n", a&b);
	printf("Bitwise OR: %d \n", a|b);
	printf("Bitwise NOT first number: %d\n" ,~a);
	printf("Bitwise NOT two number: %d\n", ~b);
	printf("Right shift by two: %d\n", a>>2);
	printf("Left shift by one: %d\n", b<<1);



	return 0 ;

}
