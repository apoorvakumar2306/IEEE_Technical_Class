#include<stdio.h>
#include<math.h>
void main()
{
	int n,dn,r,i=0;
	printf("Enter the binary number to be converted");
	scanf("%d",&n);
	while(n!=0)
	{
	r=n%10;
	n/=10;
	dn+=r*pow(2,i);
	i++;	
	}
printf("The converted decimal form is\t%d",dn);	
}
