#include <stdio.h>
#include <stdlib.h>

int main()

{
    int decimal, remainder;
    printf("Please enter your decimal number: ");
    scanf("%d", &decimal);

    while(decimal != 0)
    {
        remainder = decimal % 16;
        if(remainder >= 10)
        {
            printf("%c", 55+remainder);
            decimal=decimal/16;
            continue;
        }
        printf("%d", remainder);
        decimal=decimal/16;

    }

    return 0;
}
