#include<stdio.h>
#include<math.h>
main()
{
    int i,rem,bin,deci=0;
    printf("enter the binary number : ");
    scanf("%d",&bin);
    for(i=0;bin!=0;i++)
    {
        rem=bin%10;
    deci+=pow(2,i)*rem;
    bin/=10;
        }
    printf("The decimal number =%d",deci);
}