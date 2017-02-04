#include<stdio.h>
int checkPrime(int p,int n);

int main()
{
	int num,rem,next_prime=0,num1;
	printf("Enter the number:\n");
	scanf("%d",&num);
	if(num<3)
	{
		if(num<2)
		{
			next_prime=3;
		}
		else
		{
			next_prime=3;
		}
	}
	rem=num%6;
	if(rem!=0)
	{
		num1=num+(6-rem);
	}
	else
	{
		num1=num;
	}
	while(next_prime==0)
	{
		if(num1>num)
		{
			next_prime=checkPrime((num1-1),num);
		}
		if(next_prime==0)
		{
			next_prime=checkPrime((num1+1),num);
		}
		num1=num1+6;
	}
	printf("\nThe next Prime Number: %d\n",next_prime);
	return 0;
}

int checkPrime(int p, int n)
{
	int i;
	for(i=6;i<n;i=i+6)
	{
		if(p%(i-1)==0)
		{
			return 0;
		}
		if(p%(i+1)==0)
		{
			return 0;
		}
	}
	return p;
}
