#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i=0,j,k[20],dec;
    printf("Enter a number for binary conversion:");
    scanf("%d",&dec);

    while(dec!=0)
    {
        k[i]=dec%2;
        dec = dec/2;
        i=i+1;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d ",k[j]);
    }

    return 0;
}
