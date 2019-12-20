#include<stdio.h>
void main()
{
	int n,sum=0;
	scanf("%d",&n);
	for(int i=n;i>=2;i--)
	{	
		sum+=i;
	}
	sum=2*sum+1;
	printf("%d",sum);

}