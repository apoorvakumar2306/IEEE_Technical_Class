#include<stdio.h>
void main()
{
    printf("Enter any decimal number ");
    int num,q,r,i=1,bno=0;
    scanf("%d",&num);
    q=num;
    while(q!=0){
        r=q%2;
        q=q/2;
        bno=bno+r*i;
        i=i*10;
    }
    printf("Binary of %d is %d ",num,bno);
}