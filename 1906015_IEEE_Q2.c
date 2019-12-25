#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,j,r;
   char c[100];
    printf("Enter any decimal number  \n");
    scanf("%d",&a);
    for(i=0;a!=0;i++)
    {
        r=a%16;
        a=a/16;
	if(r==0){c[i]='0';}
	else if(r==1){c[i]='1';}
	else if(r==2){c[i]='2';}
	else if(r==3){c[i]='3';}
	else if(r==4){c[i]='4';}
	else if(r==5){c[i]='5';}
	else if(r==6){c[i]='6';}
	else if(r==7){c[i]='7';}
	else if(r==8){c[i]='8';}
	else if(r==9){c[i]='9';}
	else if(r==10){c[i]='A';}
	else if(r==11){c[i]='B';}
	else if(r==12){c[i]='C';}
	else if(r==13){c[i]='D';}
	else if(r==14){c[i]='E';}
	else if(r==15){c[i]='F';};};
    for(j=i-1;j>=0;j--)
    {
        printf("%c",c[j]);
    }

    return 0;
}

