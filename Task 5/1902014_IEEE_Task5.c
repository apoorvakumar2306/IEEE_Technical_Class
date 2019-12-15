#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,Answer;
    printf("Enter any number :\n");
    scanf("%d",&n);

    Answer = (n*(n+1))/2+((n*(n+1))/2 -1);

    printf("The required answer is %d",Answer);

    return 0;
}
