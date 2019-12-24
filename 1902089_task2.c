#include <stdio.h>
int main(){

    int a;
     printf("Enter the number:");
    // read the number as decimal
    scanf( "%d", &a );
    printf("\n");
     printf("Equivalent hexadecimal value is :");
    // print the number in hex
    printf("%X", a );
    return 0;
}
