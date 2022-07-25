#define SIZE 3
typedef enum shapetype {CIRCLE, SQUARE } TShapeType;
typedef union shapecomponent{
	float radius;
	float length;
}TComponent;
typedef struct shape{
	TShapeType type;
	TComponent component;
	char color[10];
	float area;
} TShape;

void inputShape(TShape* sh, int size);
void calcArea(TShape* sh, int size);
float calcAvgArea(TShape* sh, int size);
void outputAboveAvg(TShape* sh, int size);
int main()
{
	TShape arr[SIZE];
	//inputShape(arr , SIZE);
	print("fdfdfdfdf");
	
	return 0;
}
void inputShape(TShape* sh, int size)
{
	char a[6];
	for (int i=0; i<size; i++)
	{
		switch(i){
			case 0 : a[6]="first";break;
			case 1 : a[6]="second";break;
			case 2 : a[6]="third";break;
		}
		printf("Enter %c shape type: ",a);
		printf("Enter %c shape component: ",a);
		printf("Enter %c shape of color: ",a);
	}

}
