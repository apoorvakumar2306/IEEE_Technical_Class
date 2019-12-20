#include<stdio.h>
int comb(int i, int j) 
{
  int prod1=1,prod2=1,k;
  if(j<0)
  return 0;
  else if(j>i)
  return 0;
  else if(j==0)
  return 1;
  else
  {
    for(k=1;k<=j;k++)
    {
      prod1=prod1*i;
      i--; 
    }
    while(j!=0)
    {
       prod2=prod2*j;
       j--; 
    }
  }
}
void main()
{
  int i,j,n;
  printf("Enter number of rows");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
     for(j=-(n-1);j<=(n-1);j++)
     {
       if(comb(i,i+j)!=0)
       printf("%d ",comb(i,i+j));
       else
       printf(" ");
     }
     printf("\n");
  }
}
