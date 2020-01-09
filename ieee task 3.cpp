#include<stdio.h>
#include<math.h>
int main()
{						//to convert binary to decimal//
int j,n,i,old,c;
printf("enter the binary no.");
scanf("%d",&old);
c=old;
i=0;
j=0;
while(c!=0)
{
	n=(c%10)*(pow(2,i));
	j=j+n;
	i=i+1;
	c=c/10;
}
	 printf("the decimal form of the binary no. %d is %d",old,j);
	 return 0;
}
