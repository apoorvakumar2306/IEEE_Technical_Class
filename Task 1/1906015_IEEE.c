#include<stdio.h>
#include<math.h>
int main(){
float a,b;
char c;
printf("arithmetic operation\n a.addition\nb.subtraction\nc.multiplication\nd.division\ne.sine\nf.cosine\ng.log");
scanf("%c",&c);
if ((c == 'e') || (c == 'f') || (c == 'g')) {
	printf("enter number\n");
	scanf("%f",&a);
}
else{printf("enter two numbers");
     scanf("%f%f", &a, &b);};
switch(c){
case('a'):printf("%f",a+b);break;
case('b'):printf("%f",a-b);break;
case('c'):printf("%f",a*b);break;
case('d'):printf("%f",a/b);break;
case('e'):printf("%f",sin(a));break;
case('f'):printf("%f",cos(a));break;
case('g'):printf("%f",log(a));break;
}
return 0;
}

