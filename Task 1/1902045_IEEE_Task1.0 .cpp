#include<stdio.h>

int main()
{
    int n,i,a[10];

    printf("Enter the decimal:");
    scanf("%d",&n);

    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    printf("\n");
    printf("The binary equivalent of the entered decimal is:");

    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }

  return 0;
}
