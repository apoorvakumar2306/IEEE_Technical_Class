#include <stdio.h>
 
int main()
{
    long dn, q, r;
    int i, j = 0;
    char hexadecimalnum[100];
 
    printf("Enter decimal number: ");
    scanf("%ld", &dn);
 
    q = dn;
 
    while (q != 0)
    {
        r = q % 16;
        if (r < 10)
            hexadecimalnum[j++] = 48 + r;
        else
            hexadecimalnum[j++] = 55 + r;
        q = q / 16;
    }
    for (i = j; i >= 0; i--)
            printf("%c", hexadecimalnum[i]);
    return 0;
}
