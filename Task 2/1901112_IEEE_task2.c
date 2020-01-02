#include<stdio.h>
int main()
{
 long decimal, quotient, remainder;
 int i, j = 0;
 char hexadecimal[100];
 
 printf("Enter decimal number: \t");
 scanf("%ld", &decimal);
 printf("%ld \n",decimal);
 
 quotient = decimal;
 
 while (quotient != 0)
 {
 remainder = quotient % 16;         
 if (remainder < 10)
 hexadecimal[j++] = 48 + remainder;  
 else
 hexadecimal[j++] = 55 + remainder;   
 quotient = quotient / 16;            
 }
 
 printf("Equivalent hexadecimal value of decimal number %ld:",decimal);
 
 
 for (i = j; i >= 0; i--)
 printf("%c", hexadecimal[i]);
 return 0;
}
