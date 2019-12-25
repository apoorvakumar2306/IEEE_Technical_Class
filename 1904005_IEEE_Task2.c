/* c program to convert decimal to hexadecimal */
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main()
{
    char x[15];
    int dec,y,i=0;
    printf("Enter a decimal number:");
    scanf("%d",&dec);
    while(dec!=0)
    {
        y=dec%16;
        if(y>9)
          x[i]=(char)(y+55);
        else
          x[i]=(char)(y+48);

        dec=dec/16;
        i++;
    }
    x[i]='\0';
    strrev(x);
    printf("\n Hexadecimal number of decimal number is %s",x);
    return 0;
}
