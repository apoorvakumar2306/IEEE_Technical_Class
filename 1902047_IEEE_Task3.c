#include <stdio.h>
#include <stdlib.h>

int main()
{
    int binary, d=0, b = 1, rem, num;
    printf("Conversion of a number from binary to decimal.\nPlease enter your binary value:");
    scanf("%d", &binary);

    num = binary;
    while(binary != 0)
    {
        rem = binary % 10;
        d = d + rem*b;
        binary = binary / 10;
        b = b * 2;
    }
    printf("\nDecimal value of binary number %d is: %d\n", num, d);
    return 0;
}
