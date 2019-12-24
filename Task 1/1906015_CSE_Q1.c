#include<stdio.h>
int main()
{
	int a;
	printf("enter decimal no.");
	scanf("%d", &a);
	int i, r;
	long long unsigned int c = 0;
	for (i = 1; a != 0; i = 10 * i) {
		r = a % 2;
		a = a / 2;
		c = c + r * i;
	};
	printf("binary number for input no. is %llu", c);
	return 0;
}