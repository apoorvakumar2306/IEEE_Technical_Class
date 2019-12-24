#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no,b,i=1,binary=0;
    printf("Enter a no: ");
    scanf("%d", &no);

    while(no!=0){
        b=no%2;
        no=no/2;
        binary=binary+(b*i);
        i=i*10;
    }
    printf("%d", binary);







    return 0;
}
