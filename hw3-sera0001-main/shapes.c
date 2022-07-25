#include <stdio.h>
#define SIZE 3
typedef enum sphapetype {CIRCLE , SQUARE}TshapeType;
typedef union shapecomonent{
	float redius;
	float length;
}Tcomponent;
typedef struct shape{
	TshapeType type;
	char color[10];
	float area;
}Tshape;

void inputshape(Tshape* sh , int size );
void calcArea(Tshape* sh , int size );
float calcAvgArea(Tshape* sh , int size );
void outputAbovAvg(Tshape* sh , int size);
int main()
{
}
