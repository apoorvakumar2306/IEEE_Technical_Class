#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float sum(float a, float b);
    float subtract(float c, float d);
    float multiply(float e, float f);
    float divide(float g, float h);
    float trigno(float i);
    float trig(float j);
    float logarithm(float k);


  int typ0;
  float a,b,c,d,e,f,g,h,i,j,k,result;
                                         printf("CALCULATOR BY ROHIT KUMAR SINGH");
    printf("\n\nPlease select the type of calculation.\n \n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n5.Sine value \n6.Cosine value \n7.Logarithm(log) \n\nYour Choice=");
    scanf("%d", &typ0);

switch (typ0)
{
    case 1:
           printf("For addition please select two first number=");
           scanf("%f",&a);
           printf("For addition please select two second number=");
           scanf("%f",&b);
           result= sum(a , b);
           printf("The addition of two numbers is = %f",result);
             break;
    case 2:
           printf("For subtraction please select two first number=");
           scanf("%f",&c);
           printf("For subtraction please select two second number=");
           scanf("%f",&d);
           result= subtract(c , d);
           printf("The subtraction of two numbers is = %f",result);
             break;
    case 3:
           printf("For multiplication please select two first number=");
           scanf("%f",&e);
           printf("For multiplication please select two second number=");
           scanf("%f",&f);
           result= multiply(e , f);
           printf("The multiplication of two numbers is = %f",result);
             break;
    case 4:
            printf("For division please select numerator=");
           scanf("%f",&g);
           printf("For division please select two denominator=");
           scanf("%f",&h);
           result= divide(g , h);
           printf("The division of two numbers is = %f",result);
             break;
    case 5:
           printf("For Trigonometric Operation\n For sine value please select an angle in radian=");
           scanf("%f",&i);
           result= trigno(i);
           printf("The sine value is = %f",result);
             break;
    case 6:
           printf("For cosine value please select an angle=");
           scanf("%f",&j);
           result= trig(j);
           printf("The cosine value is = %f",result);
             break;
    case 7:
           printf("Enter a number to calculate its natural logarithm (base = e)\n");
           scanf("%f", &k);
           result=logarithm(k);
           printf("Natural log  = %f\n",result);
             break;

    default:
           printf("INVALID CHOICE");
                }
  return 0;
}
     float sum(float a, float b)
     {
       float result;
       result= a+b;
       return(result);
     }

     float subtract(float c, float d)
     {
       float result;
       result= c-d;
       return(result);
     }

     float multiply(float e, float f)
     {
       float result;
       result= e*f;
       return(result);
     }

     float divide(float g, float h)
     {
       float result;
       result= g/h;
       return(result);
     }

     float trigno(float i)
     {
       float result;
       result= i-i*i*i/6 + i*i*i*i*i/120-i*i*i*i*i*i*i/5040;
       return(result);
     }

    float trig(float j)
     {
       float result;
       result= 1-j*j/2 + j*j*j*j/24 - j*j*j*j*j*j/720;
       return(result);
     }

     float logarithm(float k)
     {
     float result;
     result= log(k);
     return(result);
     }

