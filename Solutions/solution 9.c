#include<stdio.h>
#include<conio.h>
void main()
{

     int a[10],n,i,j;
    
     printf("Enter the size of array:");
     scanf("%d",&n);
    
     for(i=0;i<n;i++)
  { 

     printf("Enter elements:");
     scanf("%d",&a[i]);
  }
 
      
      for(j=0;j<n;j++)
  
   { 
  
      printf("%d\t",a[j]);
    
    
    
   }

       getch();
  }