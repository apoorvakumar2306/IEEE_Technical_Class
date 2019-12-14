#include <stdio.h>
int main()
{
    int n=0;
    printf("enter no.:");
    scanf("%d",&n);
    n=n-1;
    int sum=0;
    int arr[5][5]={
                    {1,0,0,0,0},
                    {3,2,0,0,0},
                    {6,2,3,0,0},
                    {10,2,3,4,0},
                    {15,2,3,4,5}
                    };
    for(int i=0;i<5;i++)
    {
        sum=arr[n][i]+sum;
    }
    printf("For N=%d",n+1);
    printf(" answer will be %d", sum);
                   return 0;

}

