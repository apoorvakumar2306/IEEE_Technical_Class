#include <stdio.h>
#include <math.h>
main()
{
	int a,i,bin=0,num=0;
	printf("enter the number : ");
	scanf("%d",&num);
	for(i=0;num!=1;i++)
	{a=num%2;
		bin=a*pow(10,i)+bin;
		num=num/2;
	}
		bin=pow(10,i)+bin;
		printf("%bin=%d",bin);
}
