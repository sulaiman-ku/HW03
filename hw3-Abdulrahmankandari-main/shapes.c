#include <stdio.h>
#include <stdlib.h>

#define SIZE 3;
typedef enum shapetype{CIRCLE, SQUARE} TShapeType;
typedef union shapecomponent{
	float radius;
	float length;
}TComponent;
typedef struct shape{
	TShapeType type;
	TComponent component; 
	char color[10];
	float area;
}TShape;

void inputShape(TShape* sh, int size);
void calcArea(TShape* sh, int size);
float calcAvgArea(TShape* sh, int size);
void outputAboveAvg(TShape* sh, int size);

void inputShape(TShape* sh, int size){
	calcArea(*sh, size);
	
	printf("Enter first shape: ");
	scanf("%s",sh.type);
	printf("\n");
	printf("Enter first component:");
	scanf("%d",&component:);
	printf("\n");
	printf("Enter first color:");
	scanf("%s", sh.color);
	printf("Enter second shape:");
	scanf("%s",sh.type);
	printf("\n");
	printf("enter second component:");
	scanf("%d",&component);
	printf("\n");
	printf("Enter second color:");
	scanf("%s", sh.color);
	printf("Enter third shape:");
	scanf("%s", sh.type);
	printf("\n");
	printf("Enter thied component:");
	scanf("%d",&component);
	printf("\n");
	printf("Enter third color:");
	scanf("%s",sh.color);
	printf("\n");

	if(component <= 0)
		printf("Erorr you shoud enter a positive number!");
}
void calcArea(TShape* sh, int size){
	float sum = 0;
	float r, l;
	float pi = 3.14;
	float avg ;
	float areaofcircle, areaofsquare;

	for(int i = 0; i< size; i++){

		if( TShape == CIRCLE){
			areaofcircle = pi*r*r ;
	}
		else if(TShape == SQUARE){
			areaofsquare = l*l ;
	}
		sum = areaofcircle + areaofsquare ;

		avg = sum / size ;

	}


int main(){
	struct x arr[size];
	sh.type;
	int x.color;
	union {
	c.radius = 4 ;
	cc.length = 10 ;
	}
	inputshape(sh, size);

