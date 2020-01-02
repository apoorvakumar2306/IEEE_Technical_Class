
#include <stdio.h>
main()																	
{
	long b,p;
	int r,i=1;
	printf("Enter a binary number \n");
	scanf("%ld",&b);
	while (b!=0)
	{
		r=b%10;
		p=p+r*i;
		b=b/10;
		i=i*2;
	}
	printf("Decimal number = %ld",p);
	return 0;
}

