#include<stdio.h>
#include<math.h>
int main()
{
	long long unsigned int b;
	printf("enter binary no.");
	scanf("%llu",&b);
	int i,c=0,r,d=0,j;
	for(i=1;b!=0;i=i*10){
		for(j=0;j<3;j++){
		r=b%10;
		b=b/10;
	d=d+r*pow(2,j);
	};
		c=c+d*i;
		d=0;
};
	printf("octal for given binary is %d",c);
	return 0;
}

