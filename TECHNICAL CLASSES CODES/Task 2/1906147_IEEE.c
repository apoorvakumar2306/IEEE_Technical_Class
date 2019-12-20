#include <stdio.h>
int main(){
	printf("===========\n");
	printf("PATTERN");
	printf("\n===========\n");
	int n, i, j, k;
	printf("Enter any odd number: ");
	scanf("%d", &n);
	for(i=0; i<n/2; i++){
		printf(" ");
	}
	printf("*\n");
	
	for(i=1; i<n/2; i++){
		for(j=0; j<n/2-i; j++){
			printf(" ");
		}
		printf("*");
		for(j=0; j<(i-1); j++){
			printf(" ");
		}
		printf("*");
		for(j=0; j<(i-1); j++){
			printf(" ");
		}
		printf("*\n");	
	}
	
	for(j=0; j<n; j++){
		printf("*");
	}
	printf("\n");
	
	for(i=(n/2)-1; i>=1; i--){
		for(j=0; j<(n/2)-i; j++){
			printf(" ");
		}
		printf("*");
		for(j=0; j<i-1; j++){
			printf(" ");
		}
		printf("*");
		for(j=0; j<i-1; j++){
			printf(" ");
		}
		printf("*\n");
	}
	for(i=0; i<n/2; i++){
		printf(" ");
	}
	printf("*");
	
	printf("\n===============================\n");
	printf("CODE BY: ASMIT_VIMAL_1906147_CSE");
	printf("\n=================================");
return 0;
}

