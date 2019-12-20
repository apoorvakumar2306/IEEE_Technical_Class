#include <stdio.h>
#include <stdlib.h>

int main()
{
      float num1,num2;
      char c[5];

      printf("Enter a no: ");
    scanf("%f", &num1);
    printf("Enter operator: ");
    scanf("%s", &c);
    if(strcmp(c,"+")==0||strcmp(c,"-")==0||strcmp(c,"/")==0||strcmp(c,"*")==0)
    {
        printf("Enter another no: ");
    scanf("%f", &num2);
    if(strcmp(c,"+")==0){
        printf("%f", num1+num2);

    }
    else if(strcmp(c,"-")==0){
        printf("%f", num1-num2);


    }
    else if(strcmp(c,"/")==0){
        printf("%f", num1/num2);

    }
        else if(strcmp(c,"*")==0){
        printf("%f", num1*num2);

    }
}
    else if(strcmp(c,"sin")==0||strcmp(c,"log")==0){
        if(strcmp(c,"sin")==0){
    printf("%f",sin(num1));
            }
            else if(strcmp(c,"log")==0){
                printf("%f",log(num1));
            }
    }








    return 0;
}
