#include<stdio.h>
#include<math.h>
void main()
{	
	unsigned long long int n;
	int i=0,sum=0;
	scanf("%llu",&n);
	while(n)
	{	
		if(n%10)
			sum+=pow(2,i);
		i++;
		n/=10;
	}
	printf("%d",sum);
}
