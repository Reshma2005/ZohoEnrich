#include<stdio.h>
#include<string.h>

void swap(char* str1,char* str2)
{
	char temp[8];
	strcpy(temp,str1);
	strcpy(str1,str2);
	strcpy(str2,temp);
}
 
 void check(char* str1,char* str2,int l)
 {
 	int i;
 	for(i=0;i<l;i++)
 	{
 		if(str1[i]>str2[i])
 		{
 			swap(str1,str2);
 			break;
		}
	}
 }
 
 
int main()
{
	int i,j,n,len1,len2;
	char str[20][8];
	printf("Enter the number of elememts:\n");
	scanf("%d",&n);
	printf("Enter the numbers seperated by a space:\n");
	for(i=0;i<n;i++)
	{
		scanf("%s",str[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			len1=strlen(str[i]);
			len2=strlen(str[j]);
			if(len1>len2)
			{
				swap(str[i],str[j]);
			}
			else if(len1==len2)
			{
				check(str[i],str[j],len1);
			}
		}
	}
	printf("{");
	for(i=0;i<n;i++)
	{
		printf("%s",str[i]);
		if(i<n-1)
		{
			printf(", ");
		}
	}
	printf("}");
	return 0;
}
