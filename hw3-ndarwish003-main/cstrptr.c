#include <stdio.h>

char myStr[]= "My String!";

struct cs220 
{
	char *string;
	int length;
};

//--------------------Function Declarations-----------------------------

int strLength (char *s);
void reverse (char *s);
void sub (char *s);
void commonChar (char *s);
int  integer (char *s);
void sort (char *s);
void joinStr (char *s);
void case_str (char *s);
//----------------------------------------------------------------------

int main()
{
	char s[256];
	printf ("Enter a string: ");
	gets(s);
	
	struct cs220 random;
	random.string = s;
	random.length = strLength(s);

	printf ("\n\n\nString length: %d", random.length);

	sub(s);
	commonChar(s);

	if (integer(s))
		printf ("\nInteger: YES");
	else
		printf ("\nInteger: NO");
	
	joinStr(s);
	case_str(s);
	reverse(s);
	sort(s);
	printf ("\n\n");
	return 0;
}

//------------------------Function Definitions---------------------------

int integer (char *s)
{
	char *p=s;
	for (; *p != '\0'; p++)
	{
		if ( *p >= '0' && *p <= '9')
			return 1;
		else
			return 0;
	}
}	

//-------------------------------------------------------------------------


int strLength (char *s)
{
	int i = 0;
	char* p = s;
	for (; *p != '\0'; i++);
	return i;
}

//-------------------------------------------------------------------------

void sort (char *s)
{
	char temp;
	char *p = s;
	for (int i = 0; *p != '\0'; i++, p++)
	{
		for (int j = *p+1; j != '\0'; j++)
		{
			if (*p > j)
			{
			temp = *p;
			*p = j;
			j = temp;
			}
		}
	}
	
	printf ("Sorted string: %s", p);
}

//------------------------------------------------------------------------

void reverse (char *s)
{
	char rev;
	char* p = s;
	for (int i = 0, j = strLength(p)-1; i < j; i++, j--)
	{
		rev = *(p+j);
		*(p+j)=*(p+i);
		*(p+i)=rev;
	}
	printf ("Reverse string: %s", p);
}

//------------------------------------------------------------------------

void case_str (char *s)
{
	char* p = s;
	for (int i = 0; *(p+i) != '\0'; i++)
	{
		if (*(p+i) >= 'a' && *(p+i) <= 'z')
			*(p+i)-=32;
	}
	
	printf("Uppercase: %s", p);

	for (int i = 0; *(p+i) != '\0'; i++)
	{
		if ( *(p+i) >= 'A' && *(p+i) <= 'Z')
			*(p+i)+=32;
	}
	printf ("Lowercase: %s", p);
}

//------------------------------------------------------------------------

void joinStr (char *s)
{
	int l = strLength(myStr);
	char* p = s;
	for (int i = 0; *(p+i) != '\0';)
		*(myStr+l++) = *(p+i++);

	*(myStr+l) = '\0';
	printf("Joined strings: %s", myStr);
}

//------------------------------------------------------------------------

void commonChar (char *s)
{
	int arr[256] = {0}, max = arr[0], index;
	char* p = s;
	for (int i = 0; *(p+i) != '\0'; i++)
		arr[p[i]]++;

	for (int i = 0; *(p+i) != '\0'; i++)
	{
		if ( *(arr+ *(p+i)) > max)
		{
			max = *( arr + *(p+i));
			index = i;
		}
	}
	
	printf ("Common char: %c", p[index]);
}

//------------------------------------------------------------------------

void sub (char *s)
{
	char* p = s;
	int l = strLength(s)-1;
	if (p[l] == myStr[l])
		printf ("YES");
	else
		printf ("NO");
}
