#include<stdio.h>
#include<math.h>
void main()
{
int i;float n1,n2,res;
printf("Select any one of the following mathematical operations:\n1:Addition\n2:Substraction\n3:Multiplication\n4:Division\n5:Sine\n6:Cosine\n7:logarithm");
scanf("%d",&i);
if((i>=5)&&(i<=6))
{
printf("Enter number for performing operations");
scanf("%f",&n1);
}
else
{
printf("Enter numbers for performing operations");
scanf("%f%f",&a,&b);
}
switch(i)
{
case 1:res=a+b;break;
case 2:if(a>b)
 {res=a-b;}
else
{res=b-a;}
break;
case 3:res=a*b;break;
case 4:res=a/b;break;
case 5:res=sin(a);break;
case 6:res=cos(a);break;
case 7:res=log(a);break;
default:printf("Invalid input");
}
printf("The output is%f",res);
}




