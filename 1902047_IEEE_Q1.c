#include <stdio.h>
#include <stdlib.h>

int main()
{
    int decimal;
    printf("Please enter any decimal value: ");
    scanf("%d", &decimal);

    int i, remainder;
    long long unsigned int binary=0;
    for(i = 1; decimal != 0; i*=10)
    {
        remainder = decimal % 2;
        decimal /= 2;
        binary += i*remainder;

    }
    printf("\nThe binary number for the given decimal number is %llu\n", binary);

    return 0;
}
