#include<stdio.h>
#include<Math.h>
int main()
{
	int num,rem,sum=0,i=0;
	printf("enter a binary number");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		sum=sum+(pow(2,i))*rem;
		i=i+1;
		num=num/10;
	}
	printf("decimal number is %d:",sum);
	return 0;
}
