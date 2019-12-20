//CALCULATOR that not only operates on two inputs, but on multiple inputs....


#include<stdio.h>
#include<math.h>

void sum(){
		char ch = 'y';
			int num[10];
        	int i = 0, res=0;
            while(ch =='y'){
                printf("\nEnter number: ");
                scanf("%d", &num[i]);
                res = res + num[i];
                printf("Wanna Enter another number (y/n): ");
                scanf(" %c", &ch);
                i++;
            }
            printf("\nSum is: %d", res);
}
void diff(){
		char ch = 'y';
			int num[10];
        	int i = 0;
            while(ch =='y'){
                printf("\nEnter number: ");
                scanf(" %d", &num[i]);
                if(i>0)
					num[0] = num[0] - num[i];            
                printf("Wanna Enter another number (y/n):  ");
                scanf(" %c", &ch);
                i++;
            }
            printf("\nDiffrence is: %d", num[0]);
}
void mult(){
	char ch = 'y';
			int num[10];
        	int i = 0, res=1;
            while(ch =='y'){
                printf("\nEnter number: ");
                scanf(" %d", &num[i]);   
				res = res*num[i];         
                printf("Wanna Enter another number (y/n): ");
                scanf(" %c", &ch);
                i++;
            }
            printf("\nproduct is: %d", res);
}
void div(){
	float res, a, b;
	printf("\nEnter Dividend: ");
	scanf("%f", &a);
	printf("Enter divisor: ");
	scanf("%f", &b);
	printf("\nDivision is: %f", a/b);
}
void sn(){
	float a, b;
	printf("\nEnter angle in degree: ");
	scanf("%f", &a);
	b = a*(3.14159/180);
	float res= sin(b);
	printf("Sin of %.2f degree is: %.4f", a, res);
}
void cs(){
	float a, b;
	printf("\nEnter angle in degree: ");
	scanf("%f", &a);
	b = a*(3.14159/180);
	float res= cos(b);
	printf("Cos of %.2f degree is: %.4f", a, res);
}
void lg(){
	float a;
	printf("\nEnter number: ");
	scanf("%f", &a);
	float res= log(a);
	printf("Log of %.2f is: %.4f", a, res);
}
int main()
{
    int n;
    printf("CALCULATOR");
    printf("\n===================") ;
    printf("\n\nCHOICES AVAILABLE:");
    printf("\n==========================\n\n");
    printf("1. ADDITON\n");
    printf("2. SUBTRACTION\n");
    printf("3. MULTIPLICATION\n");
    printf("4. DIVISION\n");
    printf("5. TRIGNOMETRY SIN\n");
    printf("6. TRIGNOMETRY COS\n");
    printf("7. LOGARATHIM\n");
    printf("\n===========================");
    printf("\n\n Enter your choice number: ");
    scanf("%d", &n);
    
    switch(n){
        case 1:
        	sum();
        	break;
    	case 2:
    		diff();
    		break;
    	case 3:
    		mult();
    		break;
    	case 4:
    		div();
    		break;
    	case 5:
    		sn();
    		break;
    	case 6:
    		cs();
    		break;
    	case 7:
    		lg();
    		break;
    	default: 
    		printf("Inavlid Choice.");
    		break;
	}
	printf("\n\n=======================================");
	printf("\nCode By: Asmit Vimal_1906147_CSE");
    return 0;
}
