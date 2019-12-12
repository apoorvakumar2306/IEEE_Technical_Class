#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    long long int bin;
    int oct=0,i=1,rem,rem1,j=1,dec=0;
    printf("Enter a binary number :\n");
    scanf("%lld",&bin);
    while(bin!=0)
    {
        rem = bin%10 ;
        dec = dec+rem*i;
        i=i*2;
        bin = bin/10;
    }
    while(dec!=0)
    {
        rem1 = dec%8;
        oct = oct+(rem1*j);
        dec = dec/8;
        j*=10;
    }
    printf("%d",oct);


    return 0;
}
