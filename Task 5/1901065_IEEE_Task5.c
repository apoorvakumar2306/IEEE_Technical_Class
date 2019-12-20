#include<stdio.h>
#include<math.h>
void main()
{
	int N,res;
	printf("Enter the positive integer N");
	scanf("%d",&N);
	res=(N-1)+pow(N,2);
	printf("The sum of all no. in Nth row of triangle is%d",res);
}
