#include <stdio.h>
int main()
{
 char str[]="";
 int n;
 printf("enter number:");
 scanf("%d",&n);
 while(n>0)
 {
     if(n%2==0)
     {
         strcat(str,"0");
         n=n/2;
     }
     else
     {
         strcat(str,"1");
         n=n/2;
     }
 }
 strrev(str);
printf("%s",str);
}
