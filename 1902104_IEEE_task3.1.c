#include<stdio.h>
#include<math.h>
int max(int a, int b) 
{
    if(a>=b) 
    return a; 
    else
    return b; 
}
void main()
{
   int i,j,k,n;
   scanf("%d",&n);
   for(i=-(n-1);i<=(n-1);i++)
   {
      for(j=-(n-1);j<=(n+1);j++)
      {
         for(k=1;k<=n;k++)
         {
            if(i==0&&j==0)
            {
              printf("1");
            }
            if((max(abs(i),abs(j))*2+1)*(max(abs(i),abs(j))*2+1)>(2*n-2*k-1)*(2*n-2*k-1))
            {
              printf("%d",n-k+1);
            }
         }
      }
      printf("\n");
  }
}
