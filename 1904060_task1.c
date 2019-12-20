#include<stdio.h>
int main ()
{
    int i,arr[32],n;
    printf("enter a number ");
    scanf("%d",&n);
    printf("required binary number is ");
    for(i=0;n>=1;i++)
    {
        arr[i]=n%2;
        n=n/2;
    }
    for (;i>0;i--)
    {
        printf("%d",arr[i-1]);
    }
}
