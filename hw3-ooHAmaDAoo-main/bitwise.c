#include <stdio.h>
#include <stdlib.h>
#define addition(a, b) (a + b)
#define multiplication(a, b) (a * b)
#define division(a, b) (a/b)
#define TWOSHIFT 2
#define ONESHIFT 1

int main (int argc, char *argv[])
{

	if( argc != 3 )
    {
		printf("Wrong Input!\n");
		exit(1);
    }

	int x, y;

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	
//	printf ("x = %d ||| y = %d\n", x, y);
		
	printf("Addition: %d\n", addition(x, y));
	printf("Multiplication: %d\n", multiplication(x, y));
	printf("Division: %d\n", division(x,y) );
	
	printf("Bitwise AND: %d\n", x & y);
	printf("Bitwise OR: %d\n", x | y);
	printf("Bitwise NOT first number: %d\n", ~x);
	printf("Bitwise NOT two number: %d\n", ~y);
	printf("Right shift by two: %d\n", x >> TWOSHIFT);
	printf("Left shift by one: %d\n", y << ONESHIFT);
	
	return 0;
}
