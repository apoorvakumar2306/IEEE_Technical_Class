#include<stdio.h>
#include<math.h>
#include<string.h>
int main ()
{
    int d=0,i;
    char a[32];
    printf("Enter the binary number ");
    scanf("%s",&a);
    for(i=0;i<strlen(a);i++){
        if(a[strlen(a)-i-1]=='1')
        d=d+pow(2,i);
    }
    printf("\n Required result is %d",d);
}
