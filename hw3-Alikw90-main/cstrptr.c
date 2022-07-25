#include<stdio.h>
int strlength(char *);
void reversestr(char*);
int check(char*);
void sortchars(char*);
void join_st(char *,char*);
void case_str(char*);
struct str220
{
	int length;
	char *string;
};
int strlength(char*x)
{
	if(*str=='\0')
		return 0;
	return(1+strlength(++x));
}
void reversestr(char *x)
{
	int count;
	count=strlength(str);
	char *begin,*end,c;
	begin=x;
	end=x;
	for(int i=0;i<l-1;i++)
		end++;
	for(int i=0;i<l/2;i++)
	{
		c=*end;
		*end=*begin;
		*begin=c;
		begin++;
		end--;
	}
}
void check(char*x)
{
	int length=strlength(x);
	for(int i=0;i<length-1;i++)
	{
		if(*x<=48||*x>=57)
			return 0;
	}
	return 1;
}
void sortchars(char*x)
{
	int length=strlength(x);
	char *p =x;
	int temp=*x;
	for(int i=0;i<length-1;i++)
		for(int j=0;j<length-1;j++)
		{
			if(*(p+j)>*(p+j+1))
			{
				temp=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=temp;
			}
		}
	printf("Sorted String: %s \n",p);
}
void join_str(char*x,char*y)
{
	int l1=strlength(x);
	int l2=strlength(y);
	char *result=(char*)malloc((l1+l2+1)*sizeof(char));
	int i;
	while(*x)
	{
		*result=*x;
		result++;
		x++;
	}
	*result=' ';
	result++;
	while(*y)
	{
		 *result=*y;
                	y++;
			result++;
	}
	*result='\0';
	for(int i=0;i<(l1+l2+1);i++)
		result--;
	printf("Joined String: %s\n",result);
}
void case_str(char*x)
{
	int l=strlength(x);
	char *result =(char*) malloc(strlength(x)*sizeof(char));
	while(*x)
	{
		if(*x>='a' &&*x<='z')
		{
			*result=*x-32;
		}
		else
			*result=*x;
		x++;
		result++;
	}
	*result='\0';
	int i;
	for(int i=0;i<l;i++)
	{
		result--;
	}
	printf("Upper case:%s \n",result);
	while(*result)
	{
		if(*result>='A' && *result<='Z')
			*result=*result+32;
		result++;
	}
        for(int i=0;i<l;i++)
	{
		result--;
	}
	printf("Lower case:%s \n",result);
}
int main()
{
	struct str220 a;
	struct str220 b;
	struct str220 c;
	c.string="hello";
	c.length=5;
	a.length=100;
	a.string=(char*) malloc(a.length*sizeof(char));
	printf("Enter String: ");
	gets(a.string);
	b.string=(char*)malloc (a.length*sizeof(char));
	b.string=a.string;
	b.length=strlength(b.string);
	printf("string length is: %d",strlength(b.string));
	char *str=b.string;
	printf("Reversed string is :%s\n",b.string);
	int_check(b.string);
	sortchars(b.string);
	join_str(b.string,c.string);
	case_str(b.string);
	return 0;
	}










