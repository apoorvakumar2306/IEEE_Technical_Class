#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dec,i=0,j;
    int k[50];
    printf("Enter any decimal number  \n");
    scanf("%d",&dec);
    for(i=0;dec!=0;i++)
    {
        k[i]=dec%16;
        dec=dec/16;
    }
    printf("Hexadecimal Value is ");
    for(j=i-1;j>=0;j--)
    {
        printf("%d",k[j]);
    }
    printf(",and if possible after conversions ");
    for(j=i-1;j>=0;j--)
    {
        printf("%X",k[j]);
    }
    return 0;
}
