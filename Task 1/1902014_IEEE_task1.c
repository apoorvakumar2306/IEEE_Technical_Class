#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dec,i=0,j;
    long int k[50];
    printf("Enter any decimal number: \n");
    scanf("%d",&dec);

    while(dec!=0)
    {
        k[i]= dec%2;
        dec= dec/2;
        i+=1;
    }

    for(j=i-1;j>=0;j--)
    {
        printf("%ld ",k[j]);
    }
    return 0;
}
