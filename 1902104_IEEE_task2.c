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
     if(n%16==10)
     a[i]='A'; 
     else if(n%16==11)
     a[i]='B'; 
     else if(n%16==12)
     a[i]='C'; 
     else if(n%16==13)
     a[i]='D'; 
     else if(n%16==14)
     a[i]='E'; 
     else if(n%16==15)
     a[i]='F'; 
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
