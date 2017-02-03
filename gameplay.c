#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int a[4][4],i,j,k;
	srand(time(NULL));
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			a[i][j]=rand()%16;
		}
	}
	system("cls");
	for(i=0;i<20;i++)
	{
		printf("-");
	}
	for(j=0;j<4;j++)
	{
		printf("\n| ");
		for(k=0;k<4;k++)
		{
			if(a[j][k]==0)
			{
				printf("    |",a[j][k]);
			}
			else if(a[j][k]<10)
			{
				printf(" %d  |",a[j][k]);
			}
			else
			{
				printf(" %d |",a[j][k]);
			}
		}
		printf("\n");
		for(i=0;i<20;i++)
		{
			printf("-");
		}
	}
	
	return 0;
	
}
	

	
