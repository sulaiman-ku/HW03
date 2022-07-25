#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 3
#define pi 22/7.0

//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

typedef enum shapetype {CIRCLE, SQUARE} TShapeType;

static const char *TShapeType_Name[] = { "circle", "square" };

//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

typedef union shapecomponent
{
	float radius;
	float length;
} TComponent;

//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

typedef struct shape
{
	TShapeType type;
	TComponent component;
	char color[10];
	float area;
} TShape;

//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

int strlength (char *str);

void ToUpper(char *str);

void inputShape(TShape* sh, int size);

void calcArea(TShape* sh, int size);

float calcAvgArea(TShape* sh, int size);

void outputAboveAvg(TShape* sh, int size);

//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

int strlength (char *str)
{
	int counter = 0, i = 0;
	
	while ( str[i] != '\0' )
	{
		counter++;
		i++;
	}
	
	return counter;
}

//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

void ToUpper(char *str)
{
	int length = strlength(str);
	
	int i;
	
	for (i = 0; i < length; i++)
	{
		if ( str[i] >= 'a' && str[i] <= 'z' )
		{
			str[i] = str[i] - 32;
		}
	}
	
	str[length] = '\0';
}

//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=


void inputShape(TShape* sh, int size)
{
	char type[10];
	int shape_type;
	int i = 0;
	
	for (i = 0; i < size; i++)
	{
		switch (i)
		{

			case 0:
				printf("Enter first shape type: ");
				break;
			case 1:
				printf("Enter second shape type: ");
				break;
			case 2:
				printf("Enter third shape type: ");
				break;
			case 3:
				printf("Enter fourth shape type: ");
				break;
			case 4:
				printf("Enter fifth shape type: ");
				break;
		}

		scanf("%s", &type);
		ToUpper(type);
		if ( strcmp(type, "CIRCLE") == 0 )
		{	sh->type = CIRCLE;	}
		else if ( strcmp(type, "SQUARE") == 0 )
		{	sh->type = SQUARE;	}
		else
		{	
			printf("WRONG TYPE!\n");
			exit(1);
		}
	
		switch (i)
		{
			
			case 0:
				printf("Enter first shape component: ");
				break;
			case 1:
				printf("Enter second shape component: ");
				break;
			case 2:
				printf("Enter third shape component: ");
				break;
			case 3:
				printf("Enter fourth shape component: ");
				break;
			case 4:
				printf("Enter fifth shape component: ");
				break;
		}
	
		scanf("%f", &sh->component.length);
	
		switch (i)
		{
			
			case 0:
				printf("Enter first shape color: ");
				break;
			case 1:
				printf("Enter second shape color: ");
				break;
			case 2:
				printf("Enter third shape color: ");
				break;
			case 3:
				printf("Enter fourth shape color: ");
				break;
			case 4:
				printf("Enter fifth shape color: ");
				break;
		}
	
		scanf("%s", &sh->color);
		sh++;	
	}
}


//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

void calcArea(TShape* sh, int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		if (sh->type == 0) // CIRCLE
		{	sh->area = ( pi * sh->component.radius * sh->component.radius );	}
		else if (sh->type == 1) // SQUARE
		{	sh->area = (sh->component.length * sh->component.length);	}
		
		printf("shape area: %.2f\n", sh->area);
		
		sh++;	
	}
	
}

//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

float calcAvgArea(TShape* sh, int size)
{
	float sum = 0, avg = 0;
	int i = 0;
	for (i = 0; i < size; i++)
	{
		sum += sh->area;
		sh++;	
	}
	
	avg = sum/size;
	printf("Area Average: %.2f\n", avg);
	return avg;
}

//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

void outputAboveAvg(TShape* sh, int size)
{
	int i;
	int avgArea = calcAvgArea(sh, size);
	
	for (i = 0; i < size; i++)
	{
		if (sh->area > avgArea)
		{	printf("Shapes above average: { %s, %.2f, %s }\n", TShapeType_Name[sh->type], sh->component.radius, sh->color);	}

		sh++;
	}
}
