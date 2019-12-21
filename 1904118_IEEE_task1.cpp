#include <stdio.h>
int main()
{
	int a, number, i = 1, j;
    printf("\n Enter any decimal number : ");
    scanf("%d", &number);
        
    while(number !=0)
    {
    a[i++] = number % 2;
	number = number / 2;
    }

    printf("\n Binary number of a decimal number = ");
    for(j = i-1; j > 0; j--)  {
    printf(" %d ", a[j]);
    }
    return 0;
}
