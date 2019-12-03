#include <stdio.h>
#include <stdlib.h>

int main()
{
    char o;
    float a,b,res;
     printf("\nselect any arithmetic operation (+,-,*,/,s,c,l)--  ");
     scanf("%c", &o);
    if ((o=='s')||(o=='c')||(o=='l')){
        printf("\nenter a number--");
        scanf("%f" , &a);
    }
    else{printf("\nenter two numbers--");
    scanf("%f%f", &a, &b);
    }
    if (o=='+'){
        printf("your answer %f", a+b);}
        else if (o=='-'){
        printf("your answer %f", a-b);}
        else if (o=='*'){
        printf("your answer %f", a*b);}
        else if (o=='/'){
        printf("your answer %f", a/b);}
        else if (o=='s'){
        printf("your answer %f", sin(a));}
        else if (o=='c'){
        printf("your answer %f", cos(a));}
        else if (o=='l'){
        printf("your answer %f", log(a));}

        else{ printf("invalid input");}

    return 0;
}
