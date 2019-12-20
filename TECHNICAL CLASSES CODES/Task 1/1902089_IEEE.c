#include <stdio.h>
#include <math.h>
 
void main()
{      
    char ch;
    float a,b,result;
    printf("Enter A for addition \n S for substraction \n M for multiplication \n D for division \n T for sine \n C for cosine \n L ");
    scanf("%c", &ch );
 
    switch(ch)
    {
        case 'A':
            scanf("%f%f",&a, &b);
            result = a + b;
            printf("Result = %f", result);
            break;
        case 'S':
            scanf("%f%f",&a, &b);
            result = a - b;
            printf("Result = %f", result);
            break;
        case 'M':
            scanf("%f%f",&a, &b);
            result = a * b;
            printf("Result = %f", result);
            break;
        case 'D':
            scanf("%f%f",&a, &b);
            result = a / b;
            printf("Result = %f", result);
            break;         
        case 'T':
           scanf("%f",&a);
           result=sin(a);
           printf("Result = %f", result);
           break;
        case 'C' :
          scanf("%f",&a);
          result=cos(a);
printf("Result = %f", result);
          break;
        case 'L':
           scanf("%f",&a);
           result=log(a);
           printf("Result = %f", result);
           break;
       default:
       printf("Invalid choice!!");
    }
    
        
    
}