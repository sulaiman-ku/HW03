#include<stdio.h>

typedef struct 
{
    int length;
    char *st;

}strC220;
//--------------------------------------
int strlength(char *s)
{ 
     int count=0;
     for(int i=0;s[i]!='\0';i++)
           count++;

	return count;
}
//---------------------------------------
void reverse_str(strC220* rev)
{
    for(int i=rev->length-1;i>=0;i--)
	 printf("%c",rev->st[i]);
         printf("\n");
          

}

//----------------------------------------
int  substring(strC220* z1,strC220* z2)
{
	int chek;
        int j;
           for(int i=0;i<z1->length;i++)
            { 
        	for(j=0;j<z2->length;j++);
	              if(z1->st[i]==z2->st[j])
			{     
			     z1->length=z1->length-z2->length;

	  		     for(int h=0;h<z1->length;h++)
			     {     
				   for(int s=0;s<z2->length;s++)
                                        if(z1->st[h]==z2->st[s])
					     chek=1;
			                 else
                                             chek=0;
			     }
			
			}   


            }

	   return chek;

}
//------------------------------------------

char common_char(strC220* com)
{
    
    int count[256]={0};	    
	
    int max=0;
    char liter;

	for(int i=0;i<com->length;i++)
      {
                count[com->st[i]]++;
		if(max<count[com->st[i]])
		  {
                      
			max=count[com->st[i]];
			liter=com->st[i];
	          }

      }

    return liter;	
      
}
//------------------------------------------
int int_check(strC220* ar)
{
	for(int i=0;ar->st[i]!='\0';i++)
		if(ar->st[i]>='0'&&ar->st[i]<'9')
			return 1;
	         return 0;

}	
//___________________________________________

void sort_chars(strC220* lu)
{
	char temp;
      

      	for(int h=0;h<lu->length;h++)
      {
	for(int i=h+1;i<lu->length;i++)
	{
	 	if(lu->st[h]>lu->st[i])
		   { 
			   temp=lu->st[h];
		           lu->st[h]=lu->st[i];
			   lu->st[i]=temp;
		   
		   }

        }
        
      }

      for(int j=0;j<lu->length;j++)
	      printf("%c",lu->st[j]);


      //have some problem with upper and lower you shoud enter all uper or all lower
}

//--------------------------------------------
void join_str(strC220* s1,strC220* s2)
{
       char at[200];
	 int i;

	for(i=0;i<s1->length;i++)
	    {
                  at[i]=s1->st[i];
            }
	     at[i];
	for(int h=i;h<s2->length;h++)
	{
             at[h]=s2->st[h];
	}

	printf("\n");


}

void case_str(strC220* ch)
{
       printf("Upper case:");

	for(int i=0;i<ch->length;i++)
	{
		if(ch->st[i]>='a'&&ch->st[i]<='z')
		   {
			   ch->st[i]=ch->st[i]-32;
		   }	  


	   printf("%c",ch->st[i]);

	}




	printf("\n");
	printf("Lower case:");

	for(int i=0;i<ch->length;i++)
	{
		if(ch->st[i]>='A'&&ch->st[i]<='Z')
	          {
		  	ch->st[i]=ch->st[i]+32;
		  
		  }
	                        
	
	              
		printf("%c",ch->st[i]);
	
	}


      printf("\n");
}


int main()
{
   strC220 s1,s2;
   char se[500];  
  
  s1.st="My string!";
  printf("%s\n",s1.st);
  s1.length=strlength(s1.st);


 printf("Enter a string:");
 gets(se);

 s2.st=se; 
 s2.length=strlength(se); 
 printf("String length:%d \n",s2.length);

 printf("Reverse string:");
 reverse_str(&s2);
 printf("Substring :");
if(substring(&s2,&s1)==1)
  printf("found\n");
else
 printf("not found\n");

 printf("Most common character:%c",common_char(&s2));
 printf("\n"); 

 printf("Integer:");
 if(int_check(&s2)==1)
    printf("Yse");
 else
   printf("No");
 
 printf("\n");
 
printf("joined strings:");
join_str(&s1,&s2);

case_str(&s2);


printf("Sorted string:");
sort_chars(&s2);

 printf("\n");
 

 

return 0;
	
}
