#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int binary[5],sum=0,i;


    for(i=4;i>=0;i=i-1){
            printf("Enter the digits one by one of the 5 digit binary no.: ");


    scanf("%d",&binary[i]);
        sum=sum+binary[i]*pow(2,i);
    }
    printf("%d",sum);
    return 0;
}
