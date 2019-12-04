#include<stdio.h>
void main()
{
 int i, j, n; 
 scanf("%d",&n); 
 for(i=0;i<=(n-1)/2;i++)
 {
    for(j=1;j<=n; j++)
    {
       if((n-1)/2==i) 
        {
          printf("*");
        }
       else if((n+1)/2==j||(n+1-2*i)/2==j||(n+1+2*i)/2==j)
       {
          printf("*");
       }
       else 
       { 
          printf(" ");
       }
    }
    printf("\n");
 }
 for(i=1;i<=(n-1)/2;i++)
 {
    for(j=1;j<=n; j++)
    {
        if((n+1)/2==j||(i+1)==j||(n-i)==j) 
        {
           printf("*");
        }
        else 
        {  
           printf(" ");
        }
     }
     printf("\n");
  }
  }
