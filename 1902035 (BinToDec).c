#include<stdio.h>
#include<string.h>
#include<math.h>
int num=0;
main()
{
    printf("Enter binary number\n");
    char ch[1000];
    gets(ch);
    int len =strlen(ch);int bin[len];
   for(int i=(len-1),j=0;i>=0;i--,j++)
    {
        if(ch[i]=='1')
         bin[j]=1;
        else if(ch[i]=='0')
         bin[j]=0;
        else
        { printf("ERROR,The entries may contain elements other than 0,1");break;}
    }
    for(int i=0;i<len;i++)
     num+=bin[i]*(pow(2,i));
    printf("Entered binary number is %s & its decimal number is %d",ch,num);
    }