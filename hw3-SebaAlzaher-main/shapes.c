//seba alzaher
//2201114862
//hw3
//2.1



#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 3

typedef enum shapetype {CIRCLE,SQUARE} TShapeType;
typedef union shapecomponent{
				float redius;
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
float calcAvgArea(TShape* sh,int size);
void outputAboveAvg(TShape* sh,int size);


int main()
{
	TShape shap[SIZE];
	
	inputShape(shap,SIZE);
	calcArea(shap,SIZE);
       printf("  Shape area averages:%f\n ", calcAvgArea(shap,SIZE));

	return 0;

}

void inputShape(TShape* sh,int size)
{
   for(int i=0;i<size;i++)
	{
	   printf("Enter the type of shape whose number is %d:",i+1);
	   scanf("%s",sh[i].type);
	   printf("\n");
	   if(sh[i].type=="circle")
	     {
		sh[i].type=0;
	     }
	   else
		 sh[i].type=1;
	   
	   printf("Enter  component of shape whose number is %d",i+1);
	   if(sh[i].type==0)
           {		   
            scanf("%f",sh[i].component.redius);
	    printf("\n");
	   }
	   else
	     {
      		scanf("%f",sh[i].component.length);
		printf("\n");
             }

	   printf("Enter color of shape whose number is %d",i+1);
	   scanf("%s\n",sh[i].color);
	   printf("\n");   
	
	}
   


}
void calcArea(TShape* sh,int size)
{
     for(int i=0;i<size;i++)
	{
            int reslt;
           if(sh[i].type==0)
               {
	          sh[i].area=3.14*sh[i].component.redius*sh[i].component.redius;
	       }
	   else
		sh[i].area=sh[i].component.length*sh[i].component.length;
          
	   printf("The area of shape number %d%f\n",i,sh[i].area);
	      



       }

}

float calcAvgArea(TShape* sh, int size)
{ 
	float avg;

  for(int i=0;i<size;i++)   
     {
         avg+=sh[i].area;
         

     }

  return avg/3;

}

