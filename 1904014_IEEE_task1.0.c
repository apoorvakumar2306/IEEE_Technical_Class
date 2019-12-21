#include <math.h>
#include <stdio.h>
int convert(long long m);
int main() {
    long long m;
    printf("Enter a binary number: ");
    scanf("%lld", &m);
    printf("%lld (in binary) = %d (in decimal)", m, convert(m));
    return 0;
}
int convert(long long m) {
    int dec = 0, j = 0, rem;
    while (m != 0) {
        rem = m % 10;
        m /= 10;
        dec += rem * pow(2, j);
        ++j;
    }
    return dec;
}
