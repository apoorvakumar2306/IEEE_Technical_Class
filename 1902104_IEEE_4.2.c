#include<stdio.h>
#include<math.h>
long rev(long a) 
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
  long n,temp,s=0,t=0,p=0;
  scanf("%ld",&n);
  temp=n;
  do
  {
    s=s+(temp%10)*pow(2,t);
    temp=temp/10;
    t++;
  }while(temp!=0);
  temp=s;
  t=0;
  do
  {
     if(temp%8==0&&t==0)
     {
       p=10;
       t++;
     }
     else
     {
        p=p*10+temp%8;
     }
     temp=temp/8;
  }while(temp!=0);
  if(t==1)
  printf("%ld",rev(p)/10);
  else
  printf("%ld",rev(p));
}
