/*Purpose: To covert Binary number into octal.
Author: Rohit Kumar Singh*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int binary, decimal=0, base = 1, remainder, num;
    printf("Conversion of a number from binary to octal.\n\nPlease enter your binary value:");
    scanf("%d", &binary);

    num = binary;
    while(binary != 0)
    {
        remainder = binary % 10;
        decimal += remainder*base;
        binary /= 10;
        base *= 2;
    }
    printf("Decimal value of binary number %d is: %d\n", num, decimal);
    return 0;
}
