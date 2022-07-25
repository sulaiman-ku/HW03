//Amani Idris Mohamed Ali
//2192132781
//Homework03

#define SIZE3 
typedef enum shapetype{CIRCLE, SQUARE} TShapeType;
typedef union shapecomponent{float radius; float length;} TComponent;
typedef struct shape
{
	TShapeType;
	TComponent component; 
	char color[10];
	float area;
}TShape;

void inputShape(TShape* sh, int size);
void calcArea(TShape* sh, int size);
float calcAvgArea(TShape* sh, int size);
void outputAboveAvg(TShape* sh, int size);

int main()
{ 






	return 0;
}	
