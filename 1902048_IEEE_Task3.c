#include <stdio.h>
int main()
{
    int n;
    printf("enter no.:");
    scanf("%d",&n);
    int sum=0;
    int n1=1;
    while(n>0)
    {
        int d=n%10;
        sum=sum+d*n1;
        n1=n1*2;
        n=n/10;
    }
    printf("The resultant no. is:%d",sum);

}
