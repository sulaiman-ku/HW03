#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "shapesmake.h"
#define SIZE 3
#define pi 22/7.0

int main()
{
	TShape Shape[SIZE];
	TShape *ptrShape;
	ptrShape = Shape;

	inputShape(ptrShape, 3);

	ptrShape = Shape;
	calcArea(ptrShape, 3);

	ptrShape = Shape;
	outputAboveAvg(ptrShape, 3);

	return 0;
}
