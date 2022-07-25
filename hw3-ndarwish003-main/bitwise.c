#include <stdio.h>
#define SUM(x,y) (x+y)
#define PRODUCT(x,y) (x*y)
#define QUOTIENT(x,y) (x/y)
#define ONESHIFT 1
#define TWOSHIFT 2

int main (int argc, char**argv)
{
	char *s = argv[1], *t = argv[2];
	int a = (int)s, b = (int)t;

	printf("\nAddition: %d \nMultiplication: %d \nDivision: %d\n", SUM(a,b), PRODUCT(a,b), QUOTIENT(a,b));
	printf("Bitwise AND: %d", a&b);
	printf("\nBitwise OR: %d", a|b);
	printf("\nBitwise NOT first number: %d", ~a);
	printf("\nBitwise NOT second number: %d", ~b);
	printf("\nLeft shift by one: %d", b<<ONESHIFT);
	printf("\nRight shift by two: %d\n\n", a>>TWOSHIFT);

	return 0;
}
