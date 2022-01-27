#include<stdio.h>
#include<conio.h>
void main()
{
	char s1[10],s2[10];
	clrscr();
	printf("\n Enter first string:");
	gets(s1);
	printf("\n Enter second string:");
	gets(s2);
	if(strcmp(s1,s2)==0)
	{
		printf("\n You entered the same string two time:");
	}
	else
	{
		printf("\n You Entered string are not same:");
	}
	getch();
}

     

 
 
    
    