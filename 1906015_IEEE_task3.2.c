#include <stdio.h>
#include <string.h>
int main() {
    char s[1000];
    int a[10],i;
	printf("enter string:\n");
    scanf("%s",s);
    for(i=0;i<10;i++){
        a[i]=0;
    };
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='0'){a[0]+=1;}
        else if(s[i]=='1'){a[1]+=1;}
        else if(s[i]=='2'){a[2]+=1;}
        else if(s[i]=='3'){a[3]+=1;}
        else if(s[i]=='4'){a[4]+=1;}
        else if(s[i]=='5'){a[5]+=1;}
        else if(s[i]=='6'){a[6]+=1;}
        else if(s[i]=='7'){a[7]+=1;}
        else if(s[i]=='8'){a[8]+=1;}
        else if(s[i]=='9'){a[9]+=1;};
    }
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
