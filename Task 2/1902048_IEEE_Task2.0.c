#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("enter no.");
    scanf("%d",&n);
    char str[100];
    itoa(n,str,16);
    printf("\nresultant hexadecimal is:%s",str);
}
