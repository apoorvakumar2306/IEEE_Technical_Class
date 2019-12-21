#include <stdio.h>
#include <stdlib.h>

void main()
{
 int a[32],i,n;
 printf("Enter a decimal number:");
 scanf("%d",&n);
 for(i=0;n>0;i++)
 {
     a[i]=n%2;
     n/=2;

 }
   printf("\nThe corresponding binary number is");
  for(i=i-1;i>=0;i--)
  printf("%d",a[i]);
}



