#include <stdio.h>
int main(){
	int n,i,j,k;
	printf("Enter the value of n\t");
	scanf("%d",&n);
	for(i=0;i<n/2;i++){
		for(j=0;j<n/2-i;j++){
			printf(" ");
		}
		if(i>0)
		printf("*");
		if(i>1){
			for(j=0;j<i-1;j++){
				printf(" ");
			}
		}
		printf("*");
		if(i>1){
			for(j=0;j<i-1;j++){
				printf(" ");
			}
			
	}
	if(i>0)
			printf("*");
			printf("\n");
	
}
	for(i=0;i<n;i++)
	printf("*");
	printf("\n");
	/*asdfghj*/
	
	for(i=0;i<n/2;i++){
		for(j=0;j<=i;j++){
			printf(" ");
		}
		if(i<n/2-1)
		printf("*");
		for(j=0;j<n/2-i-2;j++){
			printf(" ");
		}
		printf("*");
		for(j=0;j<n/2-i-2;j++){
			printf(" ");
		}
		if(i<n/2-1)
		printf("*");
		printf("\n");
	}
	return 0;
	}
