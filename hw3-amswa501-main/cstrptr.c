//Abdulwahab Alenezi
//2191123055
#include <stdio.h>
struct string{	
	int len;
	char* str;
};
strlength(char *strl)
{
	int count=0;
	for (int i=0; *(strl+i)!='\0'; i++)
		count++;
	return count;
}
void reverse_str(char *strl)
{
	printf("Reverse string: ");
	for (int i=strlength(strl)-1; i>=0; i--)
		printf("%c",*(strl+i));
}
int substring(char *strl1, char *strl2)
{
}
char common_char(char *strl)
{
	int counter[256]={0}, max=0;
	char let;
	for(int i=0; i<strlength(strl)-1; i++)
	{
		for(int j=0; j<strlength(strl); j++)
		{
			if (*(strl+i)==*(strl+j))
				counter[i]++;
		}
		if(max<*(counter+i))
		{
			let=*(strl+i);
			max=counter[i]++;
		}
	}
	return let;
}
char int_check(char *strl)
{
	for(int i=0; i<strlength(strl)-1; i++)
	{
		if (*(strl+i)<'0' || *(strl+i) >'9')
			return 'N';
	}
	return 'Y';
}
void sort_chars(char *strl)
{
	printf("Sorted string: ");
	char temp;
	char strln[strlength(strl)];
	for (int i=0; i<strlength(strl); i++)
	{
		strln[i]=*(strl+i);
		for (int i=0; i<strlength(strln); i++)
		{
			for (int j=i+1; j<strlength(strln); j++)
			{
				if(strln[i]>strln[j])
				{
					temp=strln[i];
					strln[i]=strln[j];
					strln[j]=temp;

				}
			}
		}
		printf("%c",strln[i]);
	}
}	
void join_str(char *strl, char *strl2)
{
	printf("\nJoined strings: ");
	for (int i=0; i<strlength(strl); i++)
	{
		printf("%c",*(strl+i));
	}
	printf(" ");
	for (int i=0; i<strlength(strl); i++)
	{
		printf("%c",*(strl2+i));
	}

}
void case_str(char *strl)
{
	printf("\nUpper case: ");
	for (int i=0; i<strlength(strl); i++)
	{
		if (*(strl+i)>='a' && *(strl+i)<='z')
			*(strl+i)=*(strl+i) -32;
		printf("%c",*(strl+i));
	}
	printf("\nLower case: ");
	for (int i=0; i<strlength(strl); i++)
	{
		if(*(strl+i)>='A' && *(strl+i)<='Z')
			*(strl+i)=*(strl+i) +32;
		printf("%c",*(strl+i));
	}
}
int main ()
{
	char *arr;
	struct string *x1, *x2;
	x1->str="Abdulwahab Alenezi";
	x1->len=strlength(x1->str);
	printf("\nEnter a string ");
	gets(*arr);
	x2->str=arr;
	x2->len=strlength(x2->str);
	printf("String  length: %d\n", x2->len);
	reverse_str(x2->str);
	printf("\nSubstring: ");
	printf("\nMost common character: %c\n",common_char(x2->str));
	if (int_check(x2->str)=='Y')
		printf("Integer: Yes\n");
	else
		printf("Integer: No\n");
	sort_chars(x2->str);
	join_str(x1->str,x2->str);
	case_str(x2->str);
	printf("\n");
	return 0;
}



