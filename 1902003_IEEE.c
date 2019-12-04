#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Please enter a odd number.\n\n");
    scanf("%d",&n);
    if(n%2==0){
        printf("Please enter a valid odd number.");
    }
    else{
        patternPrinter(n);
    }
}

void patternPrinter(int n){
    for(int i = 1;i<(n+1)/2;i++){{
        for(int j = 1;j<=n;j++){
            int n1= ((n+1)/2)-i+1;
            int n2= ((n+1)/2);
            int n3= ((n+1)/2)+i-1;
            if(j==n1||j==n2||j==n3){
                printf("*");
            }
            else{
                printf(" ");
            }

        }
        printf("\n\n");
    }

    }
    for(int i=1;i<=n;i++){
        printf("*");
    }
    printf("\n\n");

    for(int i=((n+1)/2)+1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int n1= i-((n+1)/2)+1;
            int n2= ((n+1)/2);
            int n3= n-i+((n+1)/2);
            if(j==n1||j==n2||j==n3){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n\n");
    }
    int rating;
    printf("Please provide any rating to my program!!!\n");
    scanf("%d",&rating);
}
