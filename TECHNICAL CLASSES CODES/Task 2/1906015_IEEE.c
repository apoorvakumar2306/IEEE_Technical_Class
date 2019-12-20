#include<stdio.h>
int main(){
	int n,i,j;
	printf("enter n to print pattern\n");
	scanf("%d",&n);
	for(i=0;i<(n-1)/2;i++){printf(" ");};
	printf("*\n");
	for(i=1;i<(n-1)/2;i++){
		for(j=0;j<=(n/2-i-1);j++){printf(" ");};
		printf("*");
		for(j=0;j<(i-1);j++){printf(" ");};
		printf("*");
		for(j=0;j<(i-1);j++){printf(" ");};
		printf("*\n");
	};
	for(j=0;j<n;j++){printf("*");};
	printf("\n");
	for(i=((n-3)/2);i>0;i--){
			for(j=0;j<=(n/2-i-1);j++){printf(" ");};
			printf("*");
			for(j=0;j<(i-1);j++){printf(" ");};
			printf("*");
			for(j=0;j<(i-1);j++){printf(" ");};
			printf("*\n");
		};
	for(i=0;i<(n-1)/2;i++){printf(" ");};
		printf("*\n");
	return 0;
}

