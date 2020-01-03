#include<stdio.h>
#include<math.h>
int main()
{
	long long unsigned int b;
	printf("enter binary no.");
	scanf("%llu",&b);
	int i,c=0,r;
	for(i=1;b!=0;i=i*2){
		r=b%10;
		b=b/10;
	c=c+r*i;
	};
	printf("decimal for given binary is %d",c);
	return 0;
}

