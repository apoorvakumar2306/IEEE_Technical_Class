#include <stdio.h>

int main()
{
    int i,j,n;

    printf("Please enter your an odd=",n);
    scanf("%d",&n);

    if(n % 2 == 0)
        printf("%d is an even number.\nPlease enter an odd number to get the pattern.", n);
    else
    {
    int x=n;
    int y=n;

    for(i=1;i<=(n-1)/2;i++)
    {
        for(j=1;j<2*n;j++)
           {
              if(j==x || j==y ||j==n)
                printf("*");
              else
                printf(" ");
           }
              x++;
              y--;
              printf("\n");

     }
        for(i=(n+1)/2;i<(n+3)/2;i++)
        {
        for(j=1;j<2*n;j++)
        {
            if(j==x || j==y || j>(n-1)/2 && j<(3*n+1)/2)
                printf("*");
            else
                printf(" ");
        }
        }
     for(i=(n+1)/2;i<n+1;i++)
        {
        for(j=1;j<2*n;j++)
            {
              if(j==x || j==y ||j==n)
                printf("*");
              else
                printf(" ");
             }
              x--;
              y++;
             printf("\n");
        }
    }

}
