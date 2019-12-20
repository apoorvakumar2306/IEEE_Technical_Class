#include<stdio.h>
void sum()
{
    float a,b;
    printf("enter the values :");
    scanf("%f%f",&a,&b);
    printf("\n%f",a+b);
}
void diff()
{
    float a,b;
    printf("enter the values :");
    scanf("%f%f",&a,&b);
    printf("\n%f",a-b);
}
void pro()
{
    float a,b;
    printf("enter the values :");
    scanf("%f%f",&a,&b);
    printf("\n%f",a*b);
}
void div()
{
    float a,b;
    printf("enter the values of numerator and denominator :");
    scanf("%f%f",&a,&b);
    printf("\n%f",a/b);
}
void sin()
{
    float a,b;
    printf("enter the value :");
    scanf("%f",&a);
    b=a-((a*a*a)/6.0)+((a*a*a*a*a/120.0));
    printf("\n%f",b);
}
void cos()
{
    float a,b;
    printf("enter the value :");
    scanf("%f",&a);
    b=1-((a*a)/2.0)+((a*a*a*a/24.0));
    printf("\n%f",b);
}
void log()
{
    float a,b,c;
    printf("enter the value :");
    scanf("%f",&a);
    c=(a-1)/a;
    b=c+(c*c/2.0)+(c*c*c/3.0);
    printf("\n%f",b);
}
void main()
{
    int c;
    printf("enter 1 for addition:\n enter 2 for subtraction:\nenter 3 for multiplication:\nenter 4 for division:\nenter 5 for sine:\n enter 6 for cosine:\nenter 7 for logarithm:\n");
    scanf("%d",&c);
    switch(c){
    case(1):{sum();
            break;}
    case(2):{diff();
            break;}
    case(3):{pro();
            break;}
    case(4):{div();
            break;}
    case(5):{sin();
            break;}
    case(6):{cos();
            break;}
    case(7):{log();
            break;}
    default:printf("Wrong choice");
    }
}
