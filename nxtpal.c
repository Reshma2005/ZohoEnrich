#include<stdio.h>

void check(int x,int *a,int max);

int main()
{
	
	int num,a[10],i,j,max=0,m,l,r,palindrome=0;
	printf("Enter the number:\n");
	scanf("%d",&num);
	
	do
	{
		a[max]=num%10;
		num=num/10;
		max++;
	}while(num!=0);
	
	m=max/2;
	
	if(max%2!=0)
	{
		l=1;
		r=1;
		
		if(a[m-1]>=a[m+1])
		{
			if(a[m]<9)
			{
			a[m]++;
			}
			else
			{
				a[m]=0;
				
				check(m+1,a,max);
			}
		}
	}
	
	else
	{
		l=1;
		r=0;
		if(a[m]<=a[m-1])
		{
			check(m,a,max);
		}
	}
	
	while(l<=m)
	{
		a[m-l]=a[m+r];
		l++;
		r++;
	}
	
	for(i=max-1;i>=0;i--)
	{
		palindrome=palindrome*10+a[i];
	}
	
	if(palindrome!=0)
	{
		printf("\nNext Palindrome: %d\n",palindrome);
	}
	
	else
	{
		printf("\nNext Palindrome: 1");
		for(i=1;i<max;i++)
		{
			printf("0");
		}
		printf("1\n");
	}
	
	return 0;
}

void check(int x,int *a,int max)
{
	int i;
	for(i=x;i<max;i++)
	{
		if(a[i]==9)
		{
			a[i]=0;
		}
		else
		{
			a[i]++;
			break;
		}
	}
}

