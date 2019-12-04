#include<stdio.h>

int main() {
    int i, j, n, w=0,r;
    printf("Enter an odd number :\n");
    scanf("%d",&r);
    n=r-4;


    for(i = 1; i <=n; i++) {


        for(j = 1; j <= n-i; j++) {
           printf(" ");
        }


        while(w != (2*i-1)) {
         if(w == 0 || w==2*i-2 ||w==i-1)
                printf("*");
        else if(j==1)
                printf("*");
        else
                printf(" ");
                w++;
        }
        w=0;

        printf("\n");

    }
    n--;
    for(i = n;i >= 1; i--) {

        for(j = 0; j <= n-i; j++) {
           printf(" ");
        }

        w = 0;
        while(w != (2*i - 1)) {
         if(w == 0 || w==2*i-2||w==i-1)
                printf("*");
         else
                printf(" ");
            w++;

        }
        printf("\n");


    }

    return 0;
}
