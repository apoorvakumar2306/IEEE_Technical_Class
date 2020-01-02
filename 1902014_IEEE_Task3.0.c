#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long long int bin;
    int i=1,dec =0,r;
    printf("Enter any binary number: ");
    scanf("%lld",&bin);
    for(i=1;bin!=0;i=i*2)
    {
        r=bin%10;
        dec = dec + r*i;
        bin=bin/10;
    }
    printf("\nThe decimal value is: %d\n",dec);

    return 0;
}
