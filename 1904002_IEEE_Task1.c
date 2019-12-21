#include<stdio.h>
#include<conio.h>

void main(){
	
	int arr[16]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},a,i;
	printf("enter a number\n");
	scanf("%d",&a);
	if(a>0){
		
	for(i=0;a > 0;i++){
		arr[i]=a%2;
		a=a/2;
	}
	for(i=0;i<16;i++){
		printf("%d",arr[15-i]);
	}}
	else{
		a = a*(-1);
	for(i=0;a > 0;i++){
		arr[i]=a%2;
		a=a/2;
	}
	for(i=0;i<16;i++){
		if(arr[i]==0){
			arr[i]=1;
		}
		else{
			arr[i]=0;
		}}
		for(i=0;i<16;i++){
			arr[i]=arr[i]+1;
			if(arr[i]==1){
				break;
			}
			else{
				arr[i]=0;
				
			}
		}
		
			for(i=0;i<16;i++){
		printf("%d",arr[15-i]);
	
}}}
			
			
			
			
			
			
			
			
			
			
			
		
		
		
		
		
		
		
		
		
		
		
		
	
	

