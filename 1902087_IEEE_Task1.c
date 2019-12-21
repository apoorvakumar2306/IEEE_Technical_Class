#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,arr[100];
    int i=0;
    printf("Enter a decimal number:");
    scanf("%d",&n);
    printf("\nDecimal Number: %d",n);
    while(n>0)
    {
        arr[i]=n%2;
        n=n/2;
        i++;
    }
    printf("\nBinary Value:");

     for(int j=i-1;j>=0;j--)
    {
        printf("%d ",arr[j]);
    }
    return 0;


}
