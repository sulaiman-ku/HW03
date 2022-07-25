#include <stdio.h>
#include <string.h>
struct Str220{
	int length;
	char *str;
} x;

void strlength (char *s)
{
	char *tp = s;
	int length_counter = 0;
	while (*tp != '\0')
	{
		length_counter++;
		tp++;
	}
	x.length = length_counter;

	printf("Length: %d\n", length_counter);
}
void reverse_str (char *s){
	int i;
	char *tp = s;
	printf("The reverse string is: ");

	for(i=x.length-1; i >=0; i--)
	{
		printf("%c",*(tp+i));
	}
	printf("\n");
}

/*
void substring (char *s, char *str)
{
	char *tempchar = str;
	char *tp = s;
	int num =0;
	int strsize = 0;
	while (*str != '\0')
	{
		strsize++;
		str++;
	}
	str = strsize;
	while (*str != '\0')
	{
		while (*str == *s && *str != '\0')
		{
			num++;
			s++;
		}
		if (num == strsize)
		{
			printf("yes\n");
			else{
				printf("No\n");
		}
	}
}
}*/
//void common_char(char *s)
void int_check (char *s)
{
	int i = 0;
	char *tp = s;
	printf("Integer: ");
	for (i = 0; *tp != '\0'; i++)
	{
		if( ! (*(tp+i) >= '0' && *(tp+i) <= '9'))
		{
			printf("No\n");
			return;
		}
	}
	printf("Yes\n");
}
//void sort_chars (char *s)

void join_str (char *s)
{
	char *connect = s;
	char aisha [] = "My String!";
	char *aishaptr = aisha;
	while (*connect != '\0')
	{
		connect++;
	}
	while(*aishaptr != '\0')
	{
		*connect = *aishaptr;
		connect++;
		aishaptr++;
	}
	*connect ='\0';
	printf("Joined string : %s", connect);
}

void case_str (char *s)
{
	char *tp = s;
	
	for (int i = 0 ; *tp != '\0' ; i++)
	{
		if ( *(tp+i) >= 'a' && *(tp+i) <= 'z')
		{
			*(tp+i) -= 32;
		}
	}
		printf("\n");
		printf("Upper case : %s\n", tp);

	for ( int j = 0; *tp != '\0'; j++)
	{
		if (*(tp+j) >= 'A' && *(tp+j) <= 'Z')
		{
			*(tp+j) += 32;
		}
	}
	printf("\n");
	printf("Lower case: %s\n", tp);
}
/*
void to_upper (char *s){
	int i =0;
	char *tp = s;
	for (i =0; *tp != '\0'; i++)
	{
		if (*(tp+i) >= 'a' && *(tp+i) <= 'z')
		{
			*(tp+i) -= 32;
		}
	}
	printf("\n");
	printf("upper case: %s\n", tp);
}*/
int main ()
{	x.length = 10;
	x.str = "My String!";
	struct Str220 news;
	int len = 200;
	char mystr [len];
	printf("Enter a string : ");
	gets(mystr);
	news.str=mystr;
	strlength(mystr);
	reverse_str(mystr);
	//substring("My string!", str);
	int_check(mystr);
	case_str(mystr);
	join_str(mystr);
	return 0;
}
