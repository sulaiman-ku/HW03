#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>




#define SIZE 3
typedef enum shapetype {CIRCLE, SQUARE} TShapeType;

//-------------------------------------------------------


typedef union shapecomponent {
	float radius;
	float length;
}TComponent;


//------------------------------------------------------


typedef struct shape{
	TShapeType type;
	TComponent component;
	char color [10];
	float area;
}TShape;


//------------------------------------------------------



void inputShape (TShape* sh, int size);
void calcArea (TShape* sh, int size);
float calcAvgArea (TShape* sh, int size);
void outputAboveAvg (TShape* sh, int size);

//---------------------------------------------------


int main ()
{
	TShape shapes[SIZE];

	inputShape(shapes, SIZE);

	return 0;
}

void inputShape (TShape* sh, int size){
	
	for (int i = 1; i <= size; i++, sh++)
	{
	printf ("Enter shape %d type: ", i);
	scanf("%s", sh->type);
	printf ("\nEnter shape %d component: ", i);
	scanf("%lf", sh->component);
	printf ("\nEnter shape %d color: ", i);
	scanf("%c", sh->color);

	if (sh->type == 0)
		sh->type = CIRCLE;
	else if (sh->type == 1)
		sh->type = SQUARE;
	else{
		printf ("\nInvalid input");
		exit(0);}
}}	

/*
void calcArea(TShape* sh, int size)
{
	if (sh == CIRCLE)
		return pow(sh->component.radius, 2)*M_PI;
	else if (sh == SQUARE)
		return sh->length*sh->length;
}

*/

