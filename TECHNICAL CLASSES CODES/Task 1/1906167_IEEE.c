#include <stdio.h>
#include <math.h>
void sum(float a,float b){
	
	printf("%f",(a+b));
}
void sub(float a,float b){
	printf("%f",a-b);
}
void div(float a,float b){
	printf("%f",a/b);
}
void mul(float a,float b){
	printf("%f",a*b);
}
void lg(float a){
	printf("%f",log(a));
}
void to(){
	printf("Choose your operation\n");
	printf("1.sin(x)\n2.cos(x)\n3.tan(x)");
	int c;
	float x;
	printf("Enter your choice\n");
	scanf("%d",c);
	printf("NOTE:Provide x in radians\nEnter x\n");
	scanf("%f",&x);
	
	switch(c){
		case (1):printf("%f",sin(x));
		case (2):printf("%f",cos(x));
		case (3):printf("%f",tan(x));
		default:printf("INVALID CHOICE");
	}
}



int main(){
	printf("\t\tCALCULATOR\n");
	printf("____________________________________\n");
	printf("\t\tMENU\n");
	printf("1.Summation\n");
	printf("2.Subtraction\n");
	printf("3.Division\n");
	printf("4.Multiplication\n");
	printf("5.Logarithm\n");
	printf("6.Trignometric Operation\n");
	printf(":::::::::::::::::::::::::::::::::::::\n");
	int c;
	float a,b;
	printf("Enter your choice\t");
	scanf("%d",&c);
	printf("---------------------------------------\n");
	
	switch(c){
		case(1)	:	printf("Enter the numbers\n");
					scanf("%f  %f",&a,&b); 
					sum(a,b);
					break;
		case (2):printf("Enter the numbers\n");
					scanf("%f  %f",&a,&b); 
					sub(a,b);
					break;
		case(3):printf("Enter the numbers\n");
					scanf("%f  %f",&a,&b); 
					div(a,b);
					break;
		case(4):printf("Enter the numbers\n");
					scanf("%f  %f",&a,&b); 
					mul(a,b);
					break;
		case (5):printf("Enter the number\n");
					scanf("%f",&a);
					lg(a);
					break; 												
		case(6):to();
				break;
		default : printf("INVALID CHOICE\n");
					break;}
					return 0;		
				
}
