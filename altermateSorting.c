#include <stdio.h>
#include<string.h>
#include<stdlib.h>

void rearrange(int arr[], int n)
{
    
    int temp[n],i;
 
    int small=0, large=n-1;
    int flag = 1;
    for (i=0; i<n; i++)
    {
        if (flag)
        {
            temp[i] = arr[large--];
        }
        else
        {
            temp[i] = arr[small++];
        }
 
        flag = !flag;
    }
 
    
    for (i=0; i<n; i++)
    {
        arr[i] = temp[i];
    }
}

int main(void) {
    int a[50],i=0,n=0,j,k,t;
    char str[100];
    char * pch;
    scanf("%[^\n]s",str);
    pch = strtok (str," ,.-");
    while (pch != NULL)
    {
        a[n] = atoi(pch);
        pch = strtok (NULL, " ,.-");
        n++;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    rearrange(a,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
	return 0;
}

