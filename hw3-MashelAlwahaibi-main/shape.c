// Name:Mashel Alwahaibi
// Id:2181145450
// hw3

#include <stdio.h>
#include <stdlib.h>

#define SIZE 3 
typedef enum shapetype {CIRCLE, SQUARE } TShapeType;
typedef union shapecomponent{
	float radius;
	float length;
} TComponent;
typedef struct shap{
	TShapeType type;
	TComponent component;
	char color[10];
	float area;
} TShape;

void inputShape(TShape* sh, int SIZE);
void calcArea(TShape* sh, int SIZE);
float calcAvgArea(TShape* sh,int SIZE);
void outputAboveAvg(TShape* sh, int SIZE);

void inputShape(TShape* sh, int SIZE){
	for(int i=0; i<SIZE;i++){
		if(sh[i].type==0)
			printf("Enter first shape type: ");
			scanf("%s", sh[i].type);

}

	
