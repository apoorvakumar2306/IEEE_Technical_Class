#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    float a,b,result;
    int op;
    printf("\n ***********CALCULATOR************");
    printf("\n Choose the operation number :\n1.addition\n2.subtraction\n3.multiplication\n4.division\n5.sine\n6.cosine\n7.logarithm\n");
    scanf("%d",&op);


    switch(op)
    {
    case 1:
        printf(" Enter first number :\n");
        scanf("%f",&a);
        printf(" Enter second number :\n");
        scanf("%f",&b);

        result=a+b;
        printf("Result = %f",result);
        break;
    case 2:
        printf(" Enter first number :\n");
        scanf("%f",&a);
        printf(" Enter second number :\n");
        scanf("%f",&b);

        result=a-b;
        printf("Result = %f",result);
        break;
    case 3:
        printf(" Enter first number :\n");
        scanf("%f",&a);
        printf(" Enter second number :\n");
        scanf("%f",&b);

        result=a*b;
        printf("Result = %f",result);
        break;
    case 4:
        printf(" Enter first number :\n");
        scanf("%f",&a);
        printf(" Enter second number :\n");
        scanf("%f",&b);

        if(b==0)
            printf(" division error \n");
        else
            {result=a/b;
             printf("Result = %f",result);}
        break;
    case 5:
        printf(" Enter any number :\n");
        scanf("%f",&a);

        result=sin(a);
        printf("Result = %f",result);
        break;
    case 6:
        printf(" Enter any number :\n");
        scanf("%f",&a);

        result=cos(a);
        printf("Result = %f",result);
        break;
    case 7:
        printf(" Enter any number :\n");
        scanf("%f",&a);

        result=log(a);
        printf("Result = %f",result);
        break;
    default:
        printf("\n invalid operation");
    }


}
