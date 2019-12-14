/*PURPOSE: sum of all the numbers in the Nth row of the below triangle.
            1 3 2 6 2 3 10 2 3 4 15 2 3 4 5     */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, sum=0;
    printf("Please enter the value of n:");
    scanf("%d", &n);

    for(i = 1; i <= n; ++i)
    {  sum=0;
        for(j = 1; j <= i; ++j)
        {
            if(j == 1)
                sum+=i*(i+1)/2;
            else
                sum+=j;
        }
    }
    printf("\nFor n = %d the sum is: %d\n", n, sum);
}
