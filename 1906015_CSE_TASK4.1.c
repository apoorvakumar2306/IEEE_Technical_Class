#include<stdio.h>
int main(){
	int n;
	printf("enter how many lines you want to print:");
	scanf("%d",&n);
	int a[n][n],i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			a[i][j]=0;
		}
	}
	for(i=0;i<n;i++){a[i][0]=1;}
	for(i=1;i<n;i++){
		for(j=1;j<n;j++){
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	for(i=0;i<n;i++){for(j=0;j<n-i;j++){printf(" ");}
		for(j=0;j<=i;j++){
			printf("%d ",a[i][j]);
		}printf("\n");
	}
	return 0;
}

