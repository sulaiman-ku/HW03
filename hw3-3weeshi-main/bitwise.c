#include <stdio.h>
#include <stdlib.h>

//macro constants 
#define constant TWOSHIFT 2
#define constant ONESHIFT 1

//macro functions 
#define ADDITION(A,B) (A+B)
#define MULTIPLICATION(A,B) (A*B)
#define DIVISION(A,B) (A/B)

/*
void addition (int a, int b);
void multiplication (int a, int b);
void division (int a, int b);
*/

//main to accept two arguments 
int main (int argc, char *argv[]){
	if(argc != 3){
		printf("ERROR");
		exit(1);
	}	
	//Use atoi() funtion to convert the arguments to integers
		int x = atoi(argv[1]);
		int y = atoi(argv[2]);
		
	printf("Addition : %d\n", ADDITION(x,y));
	printf("Multiplication : %d\n", MULTIPLICATION(x,y));
	printf("Division : %d\n", DIVISION(x,y));
	printf("Bitwise AND : %d\n", x & y);
        printf("Bitwise OR : %d\n", x | y);
	printf("Bitwise NOT first number : %d\n", ~x);
	printf("Bitwise NOT second number : %d\n", ~y);
	printf("Rightshift by two : %d\n", x >> 2);
	printf("Leftshift by one : %d\n", y << 1);	

	return 0;
	}
