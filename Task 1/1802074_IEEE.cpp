#include<stdio.h>
#include<conio.h>
#include<math.h>
 int main()
{
	float a,b,e;
	int c;
	float f,g;
	printf("ENTER THE NUMBERS");
	scanf("%f %f",&a,&b);
	printf("ENTER THE VALUE OF OF CHOICE");
	scanf("%d",&c);
	switch(c)
	{
		case 1 :
		
			e=a+b;
			printf("the sum is %f",e);
			break;
	     
		 case 2 :
	        	
			e=a-b;
			printf("the difference is %f ",e);
	        break;
			
	    case 3 :
		
			e=a*b;
			printf("the product is %f ",e);
	       break;
		 
		case 4 :
		
			e=a/b;
			printf("the quotient is %f",e);
	       break;
		    
		case 5 :
	        f=log(a);	
    		g=log(b);	
			printf("log vale of a %f log value of b %f", f,g);
	     break;
		 	
     case 6 :
			
	     f=sin(a);
		 g=cos(b);	
			printf("%f \n %f", f,g);
	     break;
		 
		delfault :
		 
		  printf("Wrong choice......");
		break;	  	
	
	}
  getch();	
}
