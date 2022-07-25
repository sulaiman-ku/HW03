//shareefa Al-Othman
//221151141
//Hw3 2.2

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include<stdlib.h>

#define maxsize 256


int l ;
char cha;
char sort[maxsize];
char Upper[maxsize];
char lower[maxsize];

struct S {
	int length;
	char *string;
};

// count the string length
int strlength(char *s){
	char *sp;
	int c = 0;
	for (sp=s; *sp != '\0'; sp++){
		if (*sp != ' ')
			c++;
	}
	l = c;
	return l ;
}


//reverse the string by take it from that char and insert it to new char				
char* reverse_str(char*e){

	char *re = e ;
	int c = strlength(e);
	int i = 0;
	printf("Reverse String: ");
	for( i = c ; i >=0 ; i--){
		printf("%c", *(re+i));
	}
	printf("\n");
	return 0;
}

// check if there is two char in row is substring from my string 
// also check for all posibile condition if it Upper or lower case or digits

int substring(char*s, char *subs){
	char E1[maxsize];
	char E2[maxsize];
	int v = strlength(s);
	int f = strlength(subs);
	for (int i = 0; i < v-1; i++){
		for(int j = 0 ; j <f-1 ; j++){
			if(s[i]>= 'A' && s[i] <= 'Z' || subs[j] >='A' && subs[j] <='Z' || s[i+1]>='A' && s[i+1] <='Z' || subs[j+1] >= 'A' && subs[j+1] <= 'Z' ){
				if(s[i]>='A' && s[i]<='Z' && subs[j] >= 'a' && subs[j] <= 'z'){
					E1[i] = s[i] +32;
					if(s[i+1]>='A' && s[i+1] <='Z' && subs[j+1]>='a' && subs[j+1] <='z' ){
						E2[i+1] = s[i+1]+32;
						if(E1[i] == subs[j] && E2[i+1] == subs[j+1]){
							return 0 ;
						}
					}
					else if(s[i+1]>= 'a' && s[i+1] <= 'z' && subs[j+1] >='A' && subs[j+1] <='Z'){
						E2[j+1] = subs[j+1] + 32;
						if(E1[i] == subs[j] && s[i+1] == E2[j+1]){
							return 0 ;
						}
					}
					else if(s[i+1] >= 'a' && s[i] <= 'z' && subs[j+1] >= 'a' && subs[j+1] <='z' || s[i+1]>='A' && s[i+1]<='Z' && subs[j+1]>='A' && subs [j+1] <='Z'){
						if(E1[i] == subs[j] && s[i+1] == subs[j+1]){
						       return 0 ;
						}
					}
				}
				else if(s[i]>='a' && s[i]<= 'z' && subs[j]>='A' && subs[j]<='Z'){
					E1[j] = subs[j] +32;
					if(s[i+1]>='A' && s[i+1]<='Z' && subs[j+1]>='a' && subs[j+1]<='z'){
						E2[i+1] = s[i+1] +32;
						if(s[i] == subs[j] && E2[i+1] == subs[j+1]){
							return 0 ;
						}
					}
					else if (s[i+1]>='a' && s[i+1]<='z' && subs[j+1]>='A' && subs[j+1]<='Z'){
						E2[j+1] = subs[j+1] +32;
						if (s[i] == E1[j] && s[i+1] == E2[j+1]){
							return 0 ;
						}
					}
					else if (s[i+1]>='a' && s[i+1] <='z' && subs[j+1]>='a' && subs[j+1]<='z' || s[i+1]>='A' && s[i+1]<='Z' && subs[j+1]>='A' && subs[j+1]<='Z'){
						if(s[i] == E1[j] && s[i+1] == subs[j+1]){
							return 0 ;
						}
					}
				}
				else if (s[i]>='A' && s[i]<= 'Z' && subs[j]>='A' && subs[j]<='Z'){
					if(s[i+1]>='A' && s[i+1]<='Z' && subs[j+1]>='a' && subs[j+1]<='z'){
						E2[i+1] = s[i+1]+32;
						if(s[i] == subs[j] && E2[i+1] == subs[j+1]){
							return 0 ;
						}
					}
					else if (s[i+1]>='a' && s[i+1]<='z' && subs[j+1]>='A' && subs[j+1]<='Z'){
						E2[j+1] = subs[j+1] + 32;
						if(s[i] == subs[j] && s[i+1] == E2[j+1]){
							return 0 ;
						}
					}
					else if (s[i+1]>='a' && s[i+1] <= 'z' && subs[j+1]>='a' && subs[j+1]<='z' || s[i+1]>='A' && s[i+1] <='Z' && subs[j+1] >='A' && subs[j+1] <= 'Z'){
						if(s[i] == subs[j] && s[i+1] == subs[j+1]){
							return 0 ;
						}
					}
				}
				else if (s[i]>='a' && s[i] <='z' && subs[j]>='a' && subs[j] <='z'){
					if(s[i+1]>='A' && s[i+1] <='Z' && subs[j+1]>='a' && subs[j+1]<='z'){
						E2[i+1] = s[i+1] +32;
						if(s[i] == subs[j] && E2[i+1] == subs[j+1]){
							return 0 ;
						}
					}
					else if (s[i+1]>='a'&& s[i+1] <='z' && subs[j+1]>='A' && subs[j+1]<='Z'){
						E2[j+1] = subs[j+1] +32;
						if(s[i] == subs[j] && s[i+1] == *E2+1){
							return 0 ;
						}
					}
					else if (s[i+1]>='a' && s[i+1]<='z' && subs[j+1]>='a' & subs[j+1] <='z' || s[i+1]>='A' && s[i+1] <='Z' && subs[j+1]>='A' && subs[j+1]<='Z'){
						if (s[i] == subs[j] && s[i+1] == subs[j+1]){
							return 0 ;
						}
					}
				}
			}
			else {
				if(s[i] == subs[j] && s[i+1] == subs[j+1]){
					return 0 ;
				}
			}

		}
	}
	return 1;
}

char common_char(char *s){
	int max = 0 ;
	int freq[maxsize] = {0};
	char a[maxsize];
	int i;
	

	//convert from upper to lower
	
	int h = strlength(s);
	i = 0 ;
	for(i = 0 ; i < h;i++){
		a[i] = a[i];
		if (a[i] >='A' && a[i] <='Z')
			a[i] = a[i] +32;
		
	}

	a[i] = '\0';

	//inscrease +1 for string and if it the samr char will increase the same char by one 
	//for example Hello will be like this
	//{ h , e, l, o}
	//{ 1 , 1, 2, 1}
	i = 0;
	for(i =0 ; i < h; i++){
		freq[a[i]]++;
		
	}
	
	//check for the max of char
	i = 0 ;
	for (i = 0; i<h; i++){
		if(max<freq[a[i]]){
			max = freq[a[i]];
			cha = a[i];
		}
	}
	return 0;
}

// check if the input is integer or not
int int_check(char *s){
	int flag = 0 ;
	char *p ; 
	int i = 0 ;
	int x = strlength(s);
	for (p = s ; i <x; p++){
		if(*p > 57 || *p < 48)
			flag = 1 ;
		i++;
	}
	if ( flag != 1 ){
		return 0 ;
	}
	return 1;
}


char* sort_chars(char *s){
	char temp;
	char E[maxsize];
	char so[maxsize];
	char Ee[maxsize];
	int j =  0 ;
	int i ;

	
	for( i=0 ; i<strlen(s); i++){
		so[i] = s[i];
	}

	// remove any space
	//
	for( i=0; i<strlen(s); i++){


		if(so[i] != ' '){
			sort[j] = so[i];
			j++;
		}
		
	}
	
	// sort the char and check if the string is in upper case or lower case or digit 
	for ( i=0; i<strlen(sort)-1; i++){
		for( j=i+1; j<strlen(sort); j++){
			// check if it in upper case 
			if(sort[i]>='A' && sort[i]<='Z' || sort[j]>='A' && sort[j]<='Z'){
				if(sort[i]>='A' && sort[i]<='Z' && sort[j]>='A' && sort[j]<='Z'){
					E[i] = sort[i] +32; // convert sort[i] to lower
					Ee[j] = sort[j] +32; // convert sort[j] to lower
					if(E[i] > Ee[j]){
						temp = sort[i];
						sort[i] = sort[j];
						sort[j] = temp;
					}
				}
				else if(sort[i]>='A' && sort[i]<='Z' && sort[j]>='a' && sort[j]<='z'){
					E[i] = sort[i] +32; // convert sort[i] to lower case
					if(E[i] > sort[j]){
						temp =sort[i];
						sort[i] = sort[j];
						sort[j] = temp;
					}
				}
				else if(sort[i]>='a' && sort[i]<='z' && sort[j]>='A' && sort[j]<='Z'){
					Ee[j] = sort[j] +32; // convert sort[j] to lower
					if(sort[i] > Ee[j]){
						temp = sort[i];
						sort[i] = sort[j];
						sort[j] = temp;
					}
				}
			}
			// if it was lowercase
			else if(sort[i]>='a' && sort[i]<='z' || sort[j]>='a' && sort[j]<='z'){
				if(sort[i]>sort[j]){
					temp= sort[i];
					sort[i] = sort[j];
					sort[j] = temp;
				}
			}
			// if it was two digits
			else if(sort[i]>='0' && sort[i]<='9' && sort[j]>='0' || sort[j]<='9'){
				if(sort[i]>sort[j]){
					temp = sort[i];
					sort[i] = sort[j];
					sort[j] = temp;
				}
			}
			// if digit and char 
			//
			else if(sort[j] >='0' && sort[j]<='9' && sort[i]){
				temp = sort[i];
				sort[i] = sort[j];
				sort[j] = temp;
			}
		}
	}
	
	return sort;
}

char* join_str(char *s1, char *s2){
	int i ;
	char N[maxsize];

	printf("Joined String: ");
	 //save the string to new array
	 int p = strlength(s1);
	 for(i = 0  ; i<p; i++){
		 N[i] = s1[i];
		 printf("%c",N[i]);
	 }
	 // make space between two string
	 N[i] = ' ' ;
	 printf("%c", N[i]);

	 // increase the i to continue saving in the same array
	 i++;

	 // but the second string on the same array
	 for (int j = 0 ; j < strlen(s2) ; j++){
		 N[i] = s2[j];
		 printf("%c",N[i]);
		 i++;
	 }
	 printf("\n");

	 return 0 ;
}

// check the string by the ascii and convert it to lower and upper and set it to global variable 
void case_str(char *s){
	int x = strlength(s);
	for (int i = 0 ; i <x ; i++){
		if(s[i] >= 'a' && s[i] <= 'z')
			Upper[i] = s[i] -32;
		else if (s[i] >= 'A' && s[i] <= 'Z' || s[i] == ' ' || s[i]>='0' && s[i]<='9')
			Upper[i] = s[i];

		if(s[i] >= 'A' && s[i] <= 'Z')
			lower[i] = s[i] + 32;
		else if (s[i] >='a' && s[i] <= 'z' || s[i] == ' ' || s[i]>='0' && s[i]<='9')
			lower[i] = s[i];
	}
}

int main(){

	char B[maxsize];
	struct S x1, x2;
	x1.string = "My String!\0";
	x1.length = 12;
	printf("My String: %s\n", x1.string);

	printf("Enter an a String: \n");
	gets(B);

	x2.string = B;

	int z = strlength(x2.string);
	x2.length = z;
	printf("\nString length: %d\n", x2.length);

	reverse_str(x2.string);

	int L = substring(x1.string, x2.string);
	if (L == 0)
		printf("Substring: Found \n");
	else
		printf("Substring: Not Found \n");

	char Z = common_char(x2.string);
	printf("Most Common character: %c\n", Z);

	int y = int_check(x2.string);
	if(y==0)
		printf("Integer: Yes \n");
	else if (y== 1)
		printf("Integer: No \n");

	sort_chars(x2.string);
	printf("Sorted string: %s\n", sort);

	join_str(x1.string , x2.string);

	case_str(x2.string);
	printf("Upper Case: %s\n", Upper);
	printf("Lower Case: %s\n", lower);


	return 0 ;
}
