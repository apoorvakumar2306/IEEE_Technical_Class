#include<stdio.h>//Used 2's complement
#include<math.h>//there is no bound on checking +ve numbers.
#define BITS 8	//Multiscalable code...to print larger -ve numbers please change the BITS macro 
int cp=0;		//to the appropriate number of "bits" required to hold the number
//While changing the bits please change them by multiples of 4 only
short int bin_num[BITS]={0};
void recp(int n)
{	cp++;
	if(n==0 && cp==1)
		printf("0");
	else if(n==0)
		;
	else
	{	int a=n%16;
		recp(n/16);
		if(a>=10 && a<=15)
			printf("%c",a+55);
		else
			printf("%d",a);

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
	{
		recp(n);
	}
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
		int sum=0;
		for(int i=0;i<BITS;i+=4)
		{
			sum=8*bin_num[i]+4*bin_num[i+1]+2*bin_num[i+2]+bin_num[i+3];
			if(sum>=10 && sum<=15)
				printf("%c",sum+55);
			else
				printf("%d",sum);
			sum=0;

		}
	}
	else
	{
		printf("NOT SUFFICIENT BITS");
	}
}