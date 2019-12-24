#include<stdio.h>
#include<stdlib.h>
int main()
{
int d,i=0,j;
long int a[100];
printf("enter any decimal number :\n");
scanf("%d",&d);
while(d!=0)
{
a[i]=d%2;
d=d/2;
i=i+1;
}
for(j=i-1;j>=0;j--)
{
printf("%1d",a[j]);
}
return 0;
}
