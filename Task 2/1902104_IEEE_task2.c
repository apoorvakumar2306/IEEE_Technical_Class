#include<stdio.h>
void main()
{
  int n,i=o,k=0;
  char a[10];
  scanf("%d",&n); 
  if(n<0)
  {
     n=-n; 
     k++;
  }
  do
  {
     if(n%16>=10)
     a[i]='A'+n%16-10; 
     else
     a[i]=n%16+'0';
     n=n/16;
     i++;
  }while(n!=0);
  if(k==1)
  printf("-");
  for(i=i-1;i>=0;i--)
  {
      printf("%c",a[i]);
  }
}
