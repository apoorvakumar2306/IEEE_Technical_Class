#include<stdio.h>
long rev(long n)
{
   long s=0;
   do
   {
      s=s*10+n%10;
      n=n/10;
   }while(n!=0);
   return s;
}
int main()
{
   long n,t=0,s=0,k=0,m=0;
   scanf("%ld",&n);
   if(n<0)
   {
      n=-n;
      k++;
   }
   do
   {
      if(t==0&&n%2==0&&m==0)
      {
         s=10;
         t++;
      }
      else
      {
         s=s*10+n%2;
         m++;
      }
      n=n/10;
   }while(n!=0);
   if(t==1&&k==1)
   printf("%ld",-rev(s)/10);
   else if(k==1)
   printf("%ld",-rev(s));
   else if(t==1)
   printf("%ld",rev(s)/10);
   else
   printf("%ld",rev(s));
return 0;
}
