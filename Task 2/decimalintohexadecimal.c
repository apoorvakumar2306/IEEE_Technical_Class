#include<stdio.h>
main()
{
    int i=1,x,num,j;
    char hexa[100];
    printf(" entet the number : ");
    scanf("%d",&num);
    while(num!=0)
    {
        x= num%16;
        if(x<10)
            x= 48 + x;
        else
        x= 55 + x;
        hexa[i++]=x;
        num/=16;}
        printf("hexadecimal number : ");
        for(j=i-1;j>0;j--)
        {
            printf("%c",hexa[j]);
        }
  
  
}