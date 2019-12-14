#include<stdio.h>
int main()
{
	int sum=0;
	for(int i=1;i<=5;i++)
	{
		sum=sum+i;
		for(int j=1;j<=i;j++)
		{
		if(j==1)
		{
		printf("%d",&sum);
	}
		else
		{
			printf("%d",&j);	
		}
	}
	printf("\n");	
	}
	return 0;
}
