#include <stdio.h>

int main()
{
    int a,b,c,d,e,f;
    int n=0;
    printf("Enter number:");
    scanf("%d", &n);
    a=1;e=0;
    for(a=1;a<=n;a++)
    {
        for(b=1;b<=n;b++)
        {
            c=1;
            d=n;
            e=(n+1)/2;
           do
           {f=0;
            if(a==c || a==d || b==c || b==d)
            {
                printf("%d", e);
                f=f+1;
            }
            else
            {
                ++c;
                --d;
                --e;
            }
            }
            while(f!=1);
        }
        printf("\n");


    }
}
