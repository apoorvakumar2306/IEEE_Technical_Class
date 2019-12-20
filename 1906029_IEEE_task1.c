#include<stdio.h>
void main()
{
int arr[32];
printf("Enter the number\n");
int n;
int p=0;
scanf("%d",&n);
if(n<p)
{
    n=-n;
    p=1;
}
int i=0;
while(n!=0)
{
arr[i++]=n%2;
n/=2;
}
i--;
if(p=0)
for(;i>=0;i--)
printf("%d",arr[i]);
if(p=1){
printf("\nNote:Done by 1\'s compliment--> \t ");
for(;i>=0;i--)
printf("%d",(arr[i]^1));
}
}
