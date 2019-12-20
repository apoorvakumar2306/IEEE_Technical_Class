#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float input1,input2,ans;
    int option;
    float ans1;
    char input;
 do{
    printf(">>>>>>>>>>>WELCOME TO THE WORLD OF CALCULATORS<<<<<<<<<<<<<<<\n");
    printf("THE AVAILABLE OPERATIONS ARE\n");
    printf("1.Addition\n2.Substraction\n3.multiplication\n4.Division\n5.Trigo_sin\n6.Trigo_cos\n7.logrithmic\n");
    printf("Which operation do you want:");
    scanf("%d",&option);
    printf("Enter first number :\n");
    scanf("%f",&input1);
    if((option<5)&&(option>0)){
	printf("Enter second number :\n");
    	scanf("%f",&input2);};
    switch(option)
    {
      case 1:ans = (input1 +input2);
             printf("THE SUM IS %f",ans);
             break;

      case 2:ans = (input1-input2);
             printf("THE DIFFERENCE IS %f",ans);
             break;

      case 3:ans = (input1*input2);
             printf("THE MULTIPLICATION IS %f",ans);
             break;

      case 4:ans = (input1/input2);
             printf("THE DIVISION IS %f",ans);
             break;

      case 5:ans1 = sin(input1);
             printf("THE ANSWER IS %f",ans1);
             break;

      case 6:ans1 = cos(input1);
             printf("THE ANSWER IS %f",ans1);
             break;

      case 7:ans1 = log(input1);
             printf("THE ANSWER IS %f",ans1);
             break;

      default:printf("ERROR");


    }
    printf("\n Do you want to continue y/n? \n");
	scanf("\n");
	scanf("%c", &input);
 }while(input == 'y');



    return 0;

}
