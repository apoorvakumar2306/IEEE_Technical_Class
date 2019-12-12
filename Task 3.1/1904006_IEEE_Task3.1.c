#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,k;
    printf("enter a no.: ");
    scanf("%d",&n);

    for(i=1;i<2*n;i=i+1){
            k=n;
    if (i<=n){
        for(j=1;j<2*n;j=j+1){
            printf("%d",k );
            if(i>j)
                k=k-1;
            else if(i+j>=2*n){
                k=k+1;
            }
        }

    }
    else if(i>n){
            for(j=1;j<2*n;j=j+1){
                printf("%d",k );
                if(i+j<2*n)
                    k=k-1;
                else if(j>=i)
                    k=k+1;
            }

    }

        printf("\n");
    }


    return 0;
}
