#include<stdio.h>
int main() 
{

    int n,i,j;
	printf("enter n to print pattern\n");
	scanf("%d",&n);
      for(i=n;i>0;i--){
        for(j=n;j>i;j--){
            printf("%d ",j);};
        for(j=0;j<i-1;j++){
            printf("%d ",i);
        };
        for(j=0;j<i-1;j++){
            printf("%d ",i);
           };
        for(j=i;j<=n;j++){
            printf("%d ",j);};
        printf("\n");
    };
    for(i=2;i<=n;i++){
        for(j=n;j>i;j--){
            printf("%d ",j);};
        for(j=0;j<i-1;j++){
            printf("%d ",i);
            };
        for(j=0;j<i-1;j++){
            printf("%d ",i);
            };
        for(j=i;j<=n;j++){
            printf("%d ",j);};
        printf("\n");
    }
    return 0;
}


