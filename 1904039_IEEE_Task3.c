#include<stdio.h>
#include<math.h>
int convert(long long n);
int main()
{
    long long n;
    printf("Enter a binary number\n");
    scanf("%lld",&n);
    printf("%lld in decimal is %d",n,convert(n));
    getch();
}
int convert(long long n) {
    int dec=0,i=0,rem;
    while (n!=0) {
        rem=n%10;
        n/=10;
        dec+=rem*pow(2,i);
        ++i;
    }
    return dec;
}
