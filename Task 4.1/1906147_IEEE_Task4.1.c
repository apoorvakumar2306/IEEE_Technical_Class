#include <stdio.h> 
  
int binomial(int n, int k); 

void main() 
{
	int i, j, n;
	printf("Enter Number: ");
	scanf("%d", &n);
    for (i = 0; i < n; i++) 
    {
    	for(j=0; j<n-i; j++){
    		printf(" ");
		}
        for (j = 0; j <= i; j++) 
            printf("%d ", binomial(i, j)); 
        printf("\n"); 
    } 
}  

int binomial(int n, int k) 
{ 
    int i, res = 1; 
    if (k > n - k) 
    k = n - k; 
    for (i = 0; i < k; ++i) 
    { 
        res *= (n - i); 
        res /= (i + 1); 
    }      
    return res; 
} 
