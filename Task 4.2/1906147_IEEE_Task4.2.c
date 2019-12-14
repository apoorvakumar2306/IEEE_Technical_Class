#include <math.h>
#include <stdio.h>
int convert(long bin);
int main() {
    long bin;
    printf("Enter a binary number: ");
    scanf("%ld", &bin);
    printf("Octal of binary %ld is: %ld", bin, convert(bin));
    return 0;
}
int convert(long bin) {
    int oct = 0, dec = 0, i = 0;
    while (bin != 0) {
        dec += (bin % 10) * pow(2, i);                                  // bin to dec
        ++i;
        bin /= 10;
    }
    i = 1;
    while (dec != 0) {
        oct += (dec % 8) * i;                                           //dec to oct
        dec /= 8;
        i *= 10;
    }
    return oct;
}
