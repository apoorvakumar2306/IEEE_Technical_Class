#include<stdio.h>
#include<string.h>

 main()
{

    char a[100];
    scanf("%s",a);
    int i,k=0;
    char j;
    for(j='0';j<='9';j++)
    {
        for(i=0;i<strlen(a);i++)
        {
            if(a[i]==j)
                k++;
        }
        printf("%c repeated %d times.\n",j,k);
        k=0;
    }
    getch();
}
