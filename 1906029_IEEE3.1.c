#include<stdio.h>
void main()
{
int n;
printf("Enter the value of n: ");
scanf("%d",&n);
int g=2*n-1;
int i,j,k;
int a[g][g];
for(k=0;k<n;k++)
{
for(i=k;i<g-k;i++)
{
for(j=k;j<g-k;j++)
a[i][j]=n-k;
}
}
for(i=0;i<g;i++)
{
for(j=0;j<g;j++){
printf("%d",a[i][j]);
}
printf("\n");}
}
