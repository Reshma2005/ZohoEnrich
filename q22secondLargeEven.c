/*Find the second biggest even number in a given array 

Input : [1, 3, 12, 10, 9, 7, 8, 2] 
output : 10 

Input : [2,4,6,8,22,12] 
output: 12*/

#include<stdio.h>

int main()
{
	int a[20],i,n,max1=-1,max2=-1,temp=-1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",(a+i));
	}
	for(i=1; i < n; i++)
	{
		if(a[i]%2 !=0)
		{
			continue;
		}		
		else 
		{
			if(temp == -1)
			{
				max1 = a[i];
				max2 = a[i];
				temp = a[i];
			
			}
			else
			{
				if(max2<a[i])
				{
					max2 = a[i];
				}
				if(max1<max2)
				{
					temp = max1;
					max1 = max2;
					max2 = temp;
				}
			}
		}	
		
		
	}
	if(max2 == -1)//If the array contains only odd numbers
	{
		printf("There is no even numbers\n");
		return 0;
	}
	if(max1 == max2)//if there is one only one even number or all the even numbers are same
	{
		printf("There is no second largest even number\n");
	}
	
	printf("The second largest even number is: %d\n",max2);
	return 0;
}
