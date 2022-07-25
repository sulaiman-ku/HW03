//shareefa Al-Othman
//221151141
//hw3

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


#define SIZE 3
float avg;

typedef enum shapetype {CIRCLE, SQUARE} TShapeType;
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

void inputShape(TShape* sh, int size){

	char A[3][7] = {"first", "second", "third"};

	char B[2][7] = {"circle", "square"};
	char s[30];
	
	for(int i = 0 ; i < size ; i++){
		printf("Enter %s shape type:  ",A[i]);
		scanf("%s", &s[i]);
		
		if(strcmp(&s[i],"circle") == 0 ){
			
			sh[i].type = 0 ;
			printf("Enter %s shape component:  ", A[i]);
			if(scanf("%f", &sh[i].component.radius)!=1){
				printf("WRONG\n");
				exit(0);
			}
			
		}
		else if (strcmp(&s[i],"square") == 0){
			sh[i].type = 1 ;
			printf("Enter %s shape component:  ", A[i]);
			if(scanf("%f", &sh[i].component.length)!=1){
				printf("WRONG INPUT\n");

				exit(0);
			}
						
		}
		else{
			printf("WRONG INPUT\n");
			exit(0);
		}

		printf("Enter %s shape color:  ", A[i]);
		scanf("%s", sh[i].color);
		
		
			
	}


}
void calcArea(TShape* sh, int size){
	
	char A[3][7] = {"First", "Second","Third"};
	for ( int i = 0 ; i < SIZE ; i++){
		if(sh[i].type == 0 ){
			sh[i].area = 3.1415*(sh[i].component.radius)*(sh[i].component.radius);
			printf("%s shape area: %.2f\n",A[i], sh[i].area);
		}
		else if (sh[i].type == 1){
			sh[i].area = (sh[i].component.length) * (sh[i].component.length);
			printf("%s shape area: %.2f\n",A[i], sh[i].area);
		}
	}	


}
float calcAvgArea(TShape* sh, int size){
	float sum = 0 ;  
	for (int i = 0 ; i < SIZE ; i++){
		sum = sum +sh[i].area;
	}
	avg = sum/SIZE;	
	printf("Shape area averages: %.2f\n", avg );
}
void outputAboveAvg(TShape* sh, int size){

	for (int i = 0 ; i < SIZE ; i++){

		if(avg < sh[i].area){
			if(sh[i].type == 0){
				printf("Shape area above average: {circle, %.f, %s}\n", sh[i].component.radius, sh[i].color);
			}
			if(sh[i].type == 1){
				printf("Shape area above average: {square, %.f, %s}\n", sh[i].component.length, sh[i].color);
			}
		}
	}
}


int main(){

	TShape a[SIZE];

	inputShape(a, SIZE);
	calcArea(a, SIZE);
	calcAvgArea(a, SIZE);
	outputAboveAvg(a, SIZE);
	return 0 ;
}

