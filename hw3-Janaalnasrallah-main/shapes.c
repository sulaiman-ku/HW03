#include<stdio.h>
#include <math.h>
#define SIZE 3
typedef enum shapetype{CIRCLE=0,SQUARE=1} TShapeType;
typedef union shapecomponent{
	float radius; 
	float length;
}Tcomponent;
typedef struct shape{
	TShapeType type;
	Tcomponent component;
	char color[10];
	float area;
}TShape;

void inputShape(TShape* sh, int size){

	char* type;
	float rad = sh->component.radius;
	float len = sh->component.length;
	char* colour = sh->color[10];
	char* ar[3] = {"first","second","third"};

	for(int i=0; i<size; i++){
		printf("Enter %s shape type:\n",ar[i]);
		gets(type);
		if(type == "circle" || type == "CIRCLE"){
			printf("Enter %s shape component:\n",ar[i]);
			scanf("%f",&rad);
			printf("Enetr %s shape color:\n",ar[i]);
			gets(colour);
		}
		if(type == "square" || type == "SQUARE"){
			printf("Enter %s shape component:\n",ar[i]);
			scanf("%f",&len);
			printf("Enter %s shape color:\n",ar[i]);
			gets(colour);
		}
	}	
}//inputShape

void calcArea(TShape* sh,int size){
	float rad = sh->component.radius;
	float len = sh->component.length;
	char* ar[3] = {"first","second","third"};
	float circleArea = M_PI *(rad *rad);
	float squareArea = len * len ;
	float ara = sh->area;
	for(int i=0; i<size;i++){
		printf("%s shape area:\n",ar[i]);
	}
	ara  = circleArea + squareArea;
}//calcArea
float calcAvgArea(TShape* sh,int size){
	float avg = 0;
	avg = area/3;

	return avg;
}//calcAvgArea
void outputAboveAvg(TShape* sh, int size){

}//outputAboveAvg
int main(){
	TShape sh[SIZE];
	inputShape(sh,SIZE);
	if(1){
	calcArea(sh,SIZE);
	printf("Shape area avrage:\n");
	calcAvgArea(sh,SIZE);
	}
	else{
		printf("Error input\n");
	}
	return 0;
}
