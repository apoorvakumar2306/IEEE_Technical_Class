#include<stdio.h>
#include<conio.h>
int main()
{
int n,var,binary=0,i=1,re;
printf("Enter number");
scanf("%d",&n);
var=n;
while(n!=0)
{
re=n%2;
n=n/2;
binary=binary+(re*i);
i=i*10;
}
printf("Binary equivalent of %d is %d",var,binary);
getch();
return 0;}
