#include<stdio.h>
#include<math.h>
void main()
{
   int n, sum=0,i=0;
   scanf("%d",&n); 
   do
   {
      sum=sum+n%10*pow(2,i);
      n=n/10;
      i++;
   }while(n!=0);
   printf("%d",sum); 
}
