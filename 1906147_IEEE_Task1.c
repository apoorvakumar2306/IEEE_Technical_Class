#include <math.h>
#include <stdio.h>

long convert(int n);

int main() {
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("Binary of %d is: %ld", n, convert(n));
    return 0;
}
long convert(int n) {
    long bin = 0;
    int rem, i = 1;
    while (n != 0) {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}
