//seba alzaher
//2201114862
//hw3
//2.4


#include<stdio.h>
#include"funbitwise.h"
#include<stdlib.h>
#define TWOSHIFT 2
#define ONESHIFT 1


int main(int argc, char *argv[])
{
   int x,s;

   if(argc>3)
	  {
		printf("\n ERROR:Something worng with comand-line arguments\n\n");  
		return 0;
	  }	  
   x=atoi(argv[1]);
   s=atoi(argv[2]);
   
   if(s!=0)
   {
       
   	 printf("Addition:%d\n",addnum(x,s));
  	 printf("Multiplication:%d\n",multip(x,s));
   	 printf("Division:%d\n",divis(x,s));
  	 printf("Bitwise And:%d\n",x&s);
	 printf("Bitwise OR:%d\n",x|s);
	 printf("Bitwise NOT first number:%d\n",~x);
	 printf("Bitwise NOT two number:%d\n",~s);
	 printf("Right shift by two:%d\n",x>>TWOSHIFT);
	 printf("Right shift by one:%d\n",s<<ONESHIFT);
   }

  return 0;
}
