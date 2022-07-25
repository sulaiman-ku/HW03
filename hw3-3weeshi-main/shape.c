#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 3

typedef enum shapetype {CIRCLE, SQUARE} TShapeType;
typedef union shapecomponent{
	float radius;
	float length;
} TComponent;
typedef struct shape{
	TShapeType type;
	TComponent component;
	char color[10];
	float area;
} TShape;

void inputShape (TShape* sh, int size);
void calArea (TShape* sh, int size);
float calcAvgArea (TShape* sh, int size);
void outputAboveAvg (TShape* sh, int size);


void inputShape (TShape* sh, int size)
{

}
int main ()
{
	shape TShape [SIZE];
	
		printf("Enter the first shape type: %s ", );
		//TShape [0]= {shapetype, 
		printf("Enter the first shape component: ");
		printf("Enter the first shape color: ");
		printf("Enter the second shape type: ");
		printf("Enter the second shape component: ");
		printf("Enter the second shape color: ");
		printf("Enter the third shape type: ");
		printf("Enter the third shape component: ");
		printf("Enter the third shape color: ");

