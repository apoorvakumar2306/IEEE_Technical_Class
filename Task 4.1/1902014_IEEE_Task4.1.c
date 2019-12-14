#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,k,j,v;
    printf("Enter a number :\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(k=1  ;k<=i;k++)
        {
            if(k==1||i==1)
            {
                v=1;
                printf("%d   ",v);
            }
            else
            {
                v=v*(i-k+1)/(k-1);
                printf("%d   ",v);
            }

        }
        printf("\n");
    }
    return 0;
}
