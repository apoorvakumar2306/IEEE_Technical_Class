#include <math.h>
#include <stdio.h>
int convert(long long a);
int main()
{
    long long a;
    printf("Enter a binary number: ");
    scanf("%lld", &a);
    printf("%lld in binary = %d in decimal", a, convert(a));
    return 0;
}
int convert(long long a) {
    int dec = 0, i = 0, rem;
    while (a!= 0) {
        rem = a % 10;
        a/= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}
