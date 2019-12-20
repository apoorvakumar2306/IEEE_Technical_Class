#include<stdio.h>
void main()
{
int n;
printf("Enter a number");
scanf("%d",&n);
int i,j,mul,r,k=0;
mul=(2*n)-2;
r=mul;
int ar[mul+1][mul+1];
for(j=k;j<=mul;j++)
{
for(i=j;i<=mul;i++)
{
ar[j][i]=ar[i][j]=ar[mul][i]=ar[i][mul]=ar[mul][mul]=n;
}
n--;
k++;
mul--;
}
for(i=0;i<=r;i++)
{
for(j=0;j<=r;j++)
{
printf("%d\t",ar[i][j]);
}
printf("\n");
}
}


