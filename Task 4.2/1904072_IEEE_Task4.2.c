#include<stdio.h>
int main()
{
int binarynum,octalnum=0,j=1,rem;
printf("enter the value of binary number:");
scanf("%ld",&binarynum);
while(binarynum!=0)
{
rem=binarynum%10;
octalnum+=rem*j;
j*=2;
binarynum/=10;
}
printf("equivalent octal value:%lo",octalnum);
return 0;
}




