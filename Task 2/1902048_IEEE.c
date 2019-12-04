#include <stdio.h>
int main()
{
    int n;
    printf("enter the number:");
   scanf("%d", &n);
    int a,b,c,d,e,f;
    int space=n-1;
    f=1;
    int g=n-2;
    for(a=1;a<=n-1;a++)
    {
        for(b=1;b<=space;b++)
        {
            printf(" ");
        }
        d=b;
        e=n;
        for(int c=d;c<=n;c++)
        {
            if(c==d || c==e)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        --space;
        if(a>1)
        {
            for(int i=1;i<=f;i++)
            {
                if(i==f)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            f=f+1;
        }
        printf("\n");
        }
        for(int i=1;i<=2*n-1;i++)
        {
            printf("*");
        }
        printf("\n");
        space=1;
        for(a=n-1;a>=1;a--)
        {
            for(b=1;b<=space;b++)
               {
                printf(" ");
               }
               c=b;
               d=n;
               for(int i=c;i<=n;i++)
               {
                   if(i==c || i==d)
                   {
                       printf("*");
                   }
                   else
                   {
                       printf(" ");
                   }
               }
               ++space;
               if(a>1)
               {
               for(int i=1;i<=g;i++)
               {
                   if(i==g)
                   {
                       printf("*");
                   }
                   else
                   {
                       printf(" ");
                   }
               }
               g=g-1;
               }
               printf("\n");
        }
    }

