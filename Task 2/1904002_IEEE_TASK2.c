#include<stdio.h>
void main(){
int a,i,b,arr[8]={0,0,0,0,0,0,0,0};
	printf("enter the number which is to be converted from decimal to hexadecimal\n\n");
	printf("please enter non negative and integer values only\n\n");
	scanf("%d",&a);
	if(a)
	if(a<0){
		printf("sorry.......it works only for non negative decimal values");
		exit(0);
	}
 if(a==0){
		printf("the resultant Hexadecimal number is %d",a);
		exit(0);
	}
	if(a>0){
	for(i=0;a!=0;i++){
	arr[i]=a%16;
	a=a/16;
}
for(i=0;i<7;i++){
	if(arr[7-i]!=0){
		b=i;
		break;
	}}
for(i=0;i<(8-b);i++){{
		if(arr[7-b-i]<10){
		printf("%d",arr[7-b-i]);
	}
	else{
		printf("%c",(arr[7-b-i]+55));
	}}}}}


