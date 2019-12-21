#include <stdio.h>

int main()
{
    int b;
    printf("Enter the number!\n\n");
    scanf("%d", &b);
    int c = b;

    int size = 0;
    while(c>=1){
        c=c/2;
        size++;
    }
    int ar1[size];
    int e = 0;
    while(b>=1){
        ar1[e] = b%2;
        b = b/2;
        e++;
    }
    for(int i = (size-1); i>=0; i--){
        printf("%d ", ar1[i]);
    }
    return 0;
}
