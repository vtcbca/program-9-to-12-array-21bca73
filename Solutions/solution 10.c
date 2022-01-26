#include<stdio.h>
#include<conio.h>
void main()
{

     int a[50],i,j,n,t;
     clrscr();
     printf("Enter array:");
     scanf("%d",&n);
     printf("Enter %d element one by one",n);
    
     for(i=0;i<n;i++)
   {

         scanf("%d",&a[i]);
   }

    printf("element s are \n");
     
      for(i=0;i<n;i++)
    
   {

        printf("%d\n",a[i]);
    }
    
       for(i=0;i<n-1;i++)
    
    {
    
         for(j=i+1;j<n;j++)
        
          {
              if(a[i]>a[j])
            
              {
            
                  t=a[i];
                  a[i]=a[j];
                  a[j]=t;
            
            
             }
          }
       }
    
      printf("sorting\n");
    
        for(i=0;i<n;i++)
       
         { 
        
            printf("%d\n",a[j]);
         }
        
        getch();
        
     }
        