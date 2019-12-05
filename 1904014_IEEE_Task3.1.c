#include <stdio.h>
#include <stdlib.h>
int main()
{

    int n,m,a;
	printf("please enter a value to print pattern\n");
	scanf("%d",&n);
      for(m=n;m>0;m--){
        for(a=n;a>m;a--){
            printf("%d ",a);};
        for(a=0;a<m-1;a++){
            printf("%d ",i);
        };
        for(a=0;a<m-1;a++){
            printf("%d ",m);
           };
        for(a=m;a<=n;a++){
            printf("%d ",a);};
        printf("\n");
    };
    for(m=2;m<=n;m++){
        for(a=n;a>m;a--){
            printf("%d ",a);};
        for(a=0;a<m-1;a++){
            printf("%d ",m);
            };
        for(a=0;a<m-1;a++){
            printf("%d ",m);
            };
        for(a=m;a<=n;a++){
            printf("%d ",a);};
        printf("\n");
    }



    return 0;
}
