#include <stdio.h>
#include <stdlib.h>
#define SIZE 256

struct Str220
{
	int length;
	char *str;
};

int strlength (struct Str220 *q)
{
	int counter = 0, i = 0;
	char *st = q->str;
	while ( *(st + i) != '\0' )
	{
		counter ++;
		i ++;
	}
	
	return counter;
}

//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=


char *reverse_str(struct Str220 *q)
{	
	char *reversed_str = (char *)malloc( SIZE * sizeof(char) );

	int end = q->length, progress;
	int i;
	char *st = q->str;
	
	progress = end - 1;
		
	for ( i = 0; i < end; i++ )
	{
		*(reversed_str + i) = *( st + progress );
		progress--;
	}
	*( reversed_str + end ) = '\0';
	
	return reversed_str;	
}

//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=


char *substring(struct Str220 *q, struct Str220 *q2)
{
	
	char *sb = (char *)malloc(SIZE * sizeof(char));

	int i = 0, j = 0, k = 0;


	int str2_length = q2->length;

	char *st = q->str;
	char *st2 = q2->str;
	

	
	while( *( st + i ) != '\0')
	{
		for (j = 0; j < str2_length; j++)
		{
			if ( ( *(st + i) == *( st2 + j ) ) && ( *( st + i + 1 ) == *( st2  + j + 1 ) ) )
			{
				*( sb + k ) = *( st2 + j );

				
				if ( ( *( st + i + 1 ) == *( st2 + j + 1 ) ) && ( *(st + i + 2 ) == *( st2 + j + 2 ) ) )
				{
					k++;
					*( sb + k ) = *( st2 + j + 1 );
				}
				else if ( ( *( st + i + 1 ) == *( st2 + j + 1 ) ) && ( *( st + i + 2 ) != *( st2 + j + 2 ) ) )
				{
					k++;
					*( sb + k ) = * (st2 + j + 1 );
					k++;
					*( sb + k ) = ',';
					k++;
					*( sb + k ) = ' ';
					k++;	
				}		
			}			

		}

		i++;
	}
	
	if ( k >= 2 )
	{	*( sb + k - 2 ) = '\0';	}
		
	return sb;
}




//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

char common_char(struct Str220 *q)
{
	char most_common;
	int i, j, rp = 0;
	int  length = q->length;
	char **repeat;
	repeat = (char **) malloc ( SIZE * sizeof(char *) );
	
	for (i = 0; i < SIZE; i++)
	{	*(repeat + i) = (char *) malloc ( 2 * sizeof(char) );	}
	char *st = q->str;
					
		
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < length; j++)
		{
			if ( *( st + i ) == *( st + j )  || *( st + i ) == ( *(st + j ) + 32) || *( st + i ) == ( *( st + j ) - 32) )
			{
				*( *(repeat + i) + 0) = *( *(repeat + i) + 0) + 1 ;
				*( *(repeat + i) + 1) = *( st + i );
			}
		}
	}
	most_common = *( *(repeat + i) + 1);

	for (i = 0; i < length; i++)
	{
		
		if( rp <= *( *(repeat + i) + 0) )
			{
				rp = *( *(repeat + i) + 0);
				most_common = *( *(repeat + i) + 1);
			}
	}
	
	
	for (i = 0; i < SIZE; i++)
	{	free( *(repeat + i) );	}	
	free(repeat);
	
	return most_common;
}

//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

int int_check(struct Str220 *q)
{
	int i = 0;
	char *st = q->str;
	
	while ( *( st + i ) != '\0')
	{
		if ( *(st + i ) < '0' || *( st + i ) > '9')
		{
			return 0;
		}
		i++;
	}
	return 1;
}

//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=


char *sort_chars(struct Str220 *q)
{
	char *sorted = (char *) malloc (SIZE * sizeof(char));

	int k;
	for (k = 0; k < SIZE; k++)
	{	*(sorted + k) = 0;	}


	int length = q->length;
	char *st = q->str;
	
	
	char alphabet = 'a';
	
	int i = 0, j, terminate = 0;
		
	for ( alphabet ; alphabet <= 'z'; alphabet++)
	{
		for (j = 0; j < length; j++)
		{
			if ( *( st + j ) != alphabet && *( st + j ) !=  (alphabet - 32) )
			{
				terminate++;
			}
			if ( *(st + j ) == alphabet || *( st + j ) ==  (alphabet - 32) )
			{
				*( sorted + i ) = *( st + j );
				i++;
			}
		}
	}

	*( sorted + length - terminate ) = '\0';	
	return sorted;
}

//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=


char *join_str(struct Str220 *MyStr, struct Str220 *q)
{
	char *joind_str = (char *) malloc ( SIZE * sizeof(char) );

	
	int k;
	for (k = 0; k < SIZE; k++)
	{	*(joind_str + k) = 0;	}

		
	int MyStr_Length = MyStr->length;
	int str_Length = q->length;

	char *st = MyStr->str;
	char *st2 = q->str;
	
	
	int i = 0 , j = 0;

	while ( *(st + j ) != '\0')
	{
		*( joind_str + i ) = *( st + j );
		j++;
		i++;
	}
	
	*( joind_str + MyStr_Length ) = ' ';

	i++;
	
	j = 0;
		
	while ( *( st2 + j ) != '\0')
	{

		*( joind_str + i ) = *( st2 + j );
		
		j++;
		i++;
	}
	
	return joind_str;
}


//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=


void case_str(struct Str220 *q)
{
	int length = q->length;
	char *st = q->str;
	
	
	char *Upper = (char *) malloc (SIZE * sizeof(char) );
	char *Lower = (char *) malloc (SIZE * sizeof(char) );
	
	int i;
	for (i = 0; i < length; i++)
	{	*( Upper + i ) = *( st + i );	}

	for (i = 0; i < length; i++)
	{	*( Lower + i ) = *( st + i );	}
	
	for (i = 0; i < length; i++)
	{
		if ( *( Upper + i ) >= 'a' && *( Upper + i ) <= 'z' )
		{
			*( Upper + i ) = *( Upper + i ) - 32;
		}
	}
	*( Upper + length ) = '\0';
	
	for (i = 0; i < length; i++)
	{
		if ( *( Lower + i ) >= 'A' && *( Lower + i ) <= 'Z' )
		{
			*( Lower + i ) = *( Lower + i ) + 32;
		}
	}
	*( Lower + length ) = '\0';

	
	printf("Upper case: %s\n", Upper);
	printf("Lower case: %s\n", Lower);
	
	free(Upper);
	free(Lower);
}

//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=


int main ()
{
	struct Str220 x;
	struct Str220 hw;
	struct Str220 j;
//	char MyString[SIZE] = "Hello World";
	char MyString[SIZE];

	j.str = "My String!";
	j.length = strlength(&j);
	
	x.str = "example_str";
	x.length = strlength(&x);

	printf("Enter a sentence: ");
	gets(MyString);

	hw.str = MyString;
	hw.length = strlength(&hw);
	printf("String length: %d\n", hw.length);
	
	char *rvrsd_str = reverse_str(&hw);
	printf("Reverse string: %s\n", rvrsd_str);
	free(rvrsd_str);
	
	char *is_substring = substring(&j,&hw);
	printf("Substring: ");
	( is_substring[0] != '\0' ) ? printf("YES ::: ( %s )\n", is_substring) : printf("Not found\n");
	free(is_substring);

	char most = common_char(&hw);
	printf("Most common character: %c", most);
	
	int is_int = int_check(&hw);
	printf("\nInteger: ");
	( is_int == 1 ) ? printf("YES\n") : printf("NO\n");

	char *sorted_str = sort_chars(&hw);	
	printf("Sorted string: %s\n", sorted_str);
	free(sorted_str);
	
	char *joind = join_str( &j , &hw );
	printf("Joined strings: %s\n", joind);
	free(joind);

	case_str(&hw);

	return 0;
}
