#include<stdio.h>
void main()
{
   int i,n,sum=0;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      if(i==1)
      sum=sum+(n*(n+1))/2;
      else
      sum=sum+i;
   }
   printf("%d",sum);
}
