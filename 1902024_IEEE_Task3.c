#include <stdio.h>
#include <string.h>

int main()
{
    char bnum[1000];
    printf("Enter a Binary number!\n\n");
    scanf("%s", bnum);
    int len = strlen(bnum);
    int dnum = 0;
    for(int i = 0; i<len; i++){
        if(bnum[i]=='0'){dnum*=2;}
        else if(bnum[i]=='1'){dnum=(dnum*2)+1;}
    }
    printf("%d", dnum);
}
