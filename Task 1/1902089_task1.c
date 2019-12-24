#include <stdio.h>
int main(){
	int arr[32];
	int a;
	int i, j;
	printf("Enter a number in decimal \n");
	scanf("%d",&a);
	for( i=a,j=0;i>0;i=i/2){
		arr[j]=i%2;
		j++;
	}
	printf("Binary equivalent of the number is: \t");
	for(;j>=0;j--){
		printf("%d",arr[j]);
	}
}
