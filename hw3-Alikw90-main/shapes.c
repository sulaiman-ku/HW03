
#include<stdio.h>
#define SIZE 3
typedef enum shapetype { CIRCLE,SQUARE} TShapeType;
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
void inputShape(TShape*sh,int size);
void calcArea(TShape*sh,int size);
float calcAvgArea(TShape*sh,int size);
void outputAboveAvg(TShape*sh,int size);
int main()
{
      TShape ar[size];
      inputShape(ar,size);
      calcArea(ar,size);
      printf("Shape area averages: %f ",calcAvgArea(ar,size));
      outputAboveAvg(ar,size);
return 0;


}
void inputShape(TShape*sh,int size)
{
	for(int i=0;i<size;i++)
	{
		if(i==0)
		{
			
			printf("Enter first shape type:");
			scanf("%s",sh[i].type);
			printf("Enter first shape component: ");
			if(sh[i].type==0)
			{do{

			    scanf("%f",sh[i].component.radius);
			     }  while(sh[i].component.radius<0);
			}
			else
				do{
				  scanf("%f",sh[i].component.length);
				}while(sh[i].component.length<0);
			printf("Enter first shape color: ");
			scanf("%s",sh[i].color);
		}
		if(i==1)
		{
			printf("Enter second shape type: ");
			scanf("%s",sh[i].type);
			printf("Enter second shape component: ");
			if(sh[i].type==0)
			{
				do{
				scanf("%f",sh[i].component.radius);
				 }while(sh[i].component.radius<0);
			}
			else
				do{
				scanf("%f",sh[i].component.length);
				}while(sh[i].component.length<0);
			printf("Enter second shape color: ");
			scanf("%s",sh[i].color);
		}
		if(i==2)
		{
			printf("Enter third shape type:");
			scanf("%s",sh[i].type);
			printf("Enter third shape component: ");
			if(sh[i].type==0)
			{
				do{
				scanf("%f",sh[i].component.radius);
				}while(sh[i].component.radius<0);

			}
			else
				do{
				scanf("%f",sh[i].component.length);
				}while(sh[i].component.length<0);
			printf("Enter third shape color: ");
			scanf("%s",sh[i].color);
		}
	}
}
void calcArea(TShape*sh,int size)
{
	for(int i=0;i<size;i++)
	{
		if(sh[i].type==0)
		{
			sh[i].area=3.14*(sh[i].component.radius*sh[i].component.radius);
		}
		else
			sh[i].area=sh[i].component.length*sh[i].component.length;
	}
	for(int i=0;i<size;i++)
	{
		if(i==0)
		{
			printf("First shape area: %f",sh[i].area);
		}
		if(i==1)
		{
			printf("Second shape area: %f",sh[i].area);
		}
		if(i==2)
		{
			printf("third shape area: %f",sh[i].area);
		}
	}
}
float calcAvgArea(TShape*sh,int size)
{
	float sum=0;
	for(int i=0;i<size;i++)
	{
		sum=sum+sh[i].area;
	}
	float avg;
	avg=sum/size;
	return avg;
}
void outputAboveAvg(TShape *sh,int size)
{
	float sum=0;
	for(int i=0;i<size;i++)
	{
		sum=sum+sh[i].area;
	}
	float avg;
	avg=sum/size;
	printf("Shapes above average: ");
	for(int i=0;i<size;i++)
	{
		if(sh[i].area >avg)
		{
			printf("{ %s , ",sh[i].type);
				if(sh[i].type==0)
				{
					printf("%d, %s}\n",sh[i].component.radius,sh[i].color);
				}
				else
					printf("%d,%s}\n",sh[i].component.length,sh[i].color);
		}
	
	}
}


