#include<stdio.h>
#include<math.h>
void main()
{
	int n,i=0,sum=0;
	scanf("%d",&n);
	while(n!=0)
	{	
		int a=n%10;
		if(a)
			sum+=pow(2,i);
		i++;
		n/=10;
	}
	printf("%d",sum);
}