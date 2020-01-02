#include<stdio.h>
#include<math.h>
#include<string.h>
void main()
{
char s[32];
printf("ENTER THE BINARY NUMBER ");
scanf("%s",&s);
int k=0,i=0,j;
for(j=strlen(s)-1;j>=0;j--,i++)
{
if(s[j]=='1')
k+=pow(2,i);
}
printf("\n RESULT IS %d",k);
}
