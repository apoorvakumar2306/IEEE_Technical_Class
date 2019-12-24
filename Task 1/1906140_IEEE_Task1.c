#include<stdio.h>
#include<math.h>	//there is no bound on checking +ve numbers
#define BITS 8		//Multiscalable code...to check larger -ve numbers please change the BITS macro 
short int bin_num[BITS]={0};//to the appropriate number of "bits" required to hold the number
void recn(int n);
int c1=0;
void recp(int n)
{ 	c1++;
	if(n==0 && c1==1)
		printf("0");
	else if(n==0)
		;
	else
	{
	int p=n%2;
	recp(n/2);
	printf("%d",p);
	}
}
int count=-1;
void recn(int n)
{
	if(n==0)
		;
	else
	{	count++;
		int p=n%2;
		bin_num[BITS-1-count]=(short int)p;
		recn(n/2);
	}
}
void main()
{
	int n;
	scanf("%d",&n);
	if(n>=0)
	recp(n);
	else if(n>=(int)-1*pow(2,BITS-1))
	{
		n=-1*n;
		recn(n);
		for(int i=0;i<BITS;i++)
		{
			switch(bin_num[i])
			{
				case 0:
				bin_num[i]=1;
				break;
				case 1:
				bin_num[i]=0;
			}
		}
	if(bin_num[BITS-1]==0)
	{
		bin_num[BITS-1]=1;
	}
	else
	{ short int carry=1;
		for(int i=BITS-1;i>=0;i--)
		{
			if(bin_num[i]+carry==1)
			{
				bin_num[i]=1;
				break;
			}
			else
			{
				bin_num[i]=0;
				carry=1;

			}
		}
	}
	for(int i=0;i<BITS;i++)
		printf("%d",bin_num[i]);
	}
	else
	{
		printf("NOT SUFFICIENT BITS");
	}
}

