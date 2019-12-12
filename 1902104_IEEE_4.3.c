#include<stdio.h>

long rev(long)
{
   long temp=a,s=0;
   do
   {
      s=s*10+temp%10;
      temp=temp/10;
   }while(temp!=0);
   return s; 
}
void main()
{
   long n,s=0,temp,t=0;
   scanf("%ld",&n);
   temp=n;
   do
   {
      if(t==0&&temp%2==0)
      {
         s=10;
         t++;
      }
      else
      {
          s=s*10+temp%2;
      }
      temp=temp/2;
    }while(temp!=0);
    if(t==1)
    printf("%ld",rev(s)/10);
    else
    printf("%ld",rev(s));
}
