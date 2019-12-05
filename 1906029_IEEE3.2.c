#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
char str[100];
char s[1];
printf("Enter the string \n");
scanf("%s",str);
int c,j;
int i,k;
int l=strlen(str);
for(i=0;i<10;i++)
{
    c=0;

    for(j=0;j<l;j++)
    {
        k=str[j]-'0';
        if(i==k)
            c++;
    }
    printf("%d ",c);
}
}
