#include<stdio.h>
int main()
{     int n,i,j=0,temp;
      char arr[50];
      printf("\n\t Enter a Decimal number to convert Decimal to Hexadecimal:");
      scanf("%d",&n);
      for(i=0;n>0;i++)
      {   j=n%16;
          if(j<10)
          { arr[i]=48+j;
		  }
		  if(j>=10)
		  { arr[i]=55+j;
		  }


		  n=n/16;
      }




	  for(j=i-1;j>=0;j--)
	     {printf("%c ",arr[j]);
		 }


		 return 0;

}








