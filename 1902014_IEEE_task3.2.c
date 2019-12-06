#include <stdio.h>
#include <stdlib.h>

int main()
{
    char k[500];
    int i,num1=0,num2=0,num3=0,num4=0,num5=0,num6=0,num7=0,num8=0,num9=0,num0=0;
    printf("ENTER A STRING(including numbers) :\n");
    scanf("%s",k);
    for(i=0;k[i]!='\0';i++)
    {
        if(k[i]=='1')
           num1++;
        else if(k[i]=='2')
           num2++;
        else if(k[i]=='3')
            num3++;
        else if(k[i]=='4')
            num4++;
        else if(k[i]=='5')
            num5++;
        else if(k[i]=='6')
            num6++;
        else if(k[i]=='7')
            num7++;
        else if(k[i]=='8')
            num8++;
        else if(k[i]=='9')
            num9++;
        else if(k[i]=='0')
            ++num0;





    }
    printf("%d",num0);
    printf("%d",num2);
    printf("%d",num3);
    printf("%d",num4);
    printf("%d",num5);
    printf("%d",num6);
    printf("%d",num7);
    printf("%d",num8);
    printf("%d",num9);
    printf("%d",num1);
    return 0;
}
