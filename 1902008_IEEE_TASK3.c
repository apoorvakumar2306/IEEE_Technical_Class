#include<stdio.h>
#include<math.h>
void main()
{
    int BinaryNumber,DecimalNumber=0,i=0,q,r;
    printf("Enter any binary number ");
    scanf("%d",&BinaryNumber);
    q=BinaryNumber;
    while(q!=0){
        r=q%10;
        q=q/10;
        DecimalNumber+=r*pow(2,i);
        i++;
    }
    printf("Decimal of %d is %d",BinaryNumber,DecimalNumber);
}
