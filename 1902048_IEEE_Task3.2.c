#include <stdio.h>
int main()
{
    char str[100];
    printf("enter string:");
    scanf("%s", str);
    int l=strlen(str);
    int d=0;
    int n;
    for(int i=0;i<=9;i++)
    {
        int c=0;
        for(int j=0;j<=l;j++)
        {
            n=str[j]-'0';
            if(n==d)
            {
                ++c;
            }
        }
        printf("%d", c);
        ++d;
    }
}


