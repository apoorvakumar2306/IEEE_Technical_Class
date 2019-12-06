#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,j;
    printf("ENTER A NUMBER :\n");
    scanf("%d",&n);
    int m =n*2-1;
    int arr[100][100];

    for(i=0;i<m;i++)
    {
        for(j=i;j<=m-i-1;j++)
        {
            arr[i][j]=n;
        }
        for(j=i+1;j<=m-i-1;j++)
        {
            arr[j][m-i-1] =n;
        }
        for(j=m-i-2;j>=i;j--)
        {
            arr[m-i-1][j]=n;
        }
        for(j=m-2-i;j>i;j--)
        {
            arr[j][i]=n;
         }
        n--;
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
