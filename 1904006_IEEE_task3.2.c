#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,s;
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,k=0,j=0;
   char sam[1000];

    printf("Enter a string including numbers: ");
    scanf("%s", sam);
    s=strlen(sam);
    for(i=0;i<=s;i=i+1){
        if (sam[i]=='0')
        a=a+1;
        else if(sam[i]=='1')
            b=b+1;
        else if(sam[i]=='2')
            c=c+1;
        else if(sam[i]=='3')
            d=d+1;
        else if(sam[i]=='4')
            e=e+1;
        else if(sam[i]=='5')
            f=f+1;
        else if(sam[i]=='6')
            g=g+1;
         else if(sam[i]=='7')
            h=h+1;
         else if(sam[i]=='8')
            k=k+1;
         else if(sam[i]=='9')
            j=j+1;
    }
    printf("%d",a);
    printf("%d",b);
    printf("%d",c);
    printf("%d",d);
    printf("%d",e);
    printf("%d",f);
    printf("%d",g);
    printf("%d",h);
    printf("%d",k);
    printf("%d",j);





    return 0;
}
