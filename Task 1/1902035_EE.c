#include<stdio.h>
#include<math.h>
main()
{
    int i ,j=0,bin=0 ,no=0;
    printf(" Enter a number which you want to change into binary\n");
    scanf("%d",&no);
    int num = no;
    while(no!=1&&no!=0)
    { 
        i=no%2;
        bin=i*pow(10,j)+bin;
        no=no/2;
        j++;
    }
    bin=no*pow(10,j)+bin;
    printf("Binary of %d is %d ",num,bin);
    return 0;
}