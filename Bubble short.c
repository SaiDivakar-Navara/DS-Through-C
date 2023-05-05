#include<stdio.h>
int main()
{
	int n,i,j,t;
	scanf("%d",&n);
	int a[i];
	for(i=0;i<n;i++)
	{
		scanf("%d",a[i]);
	}
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=n-i-1;j++)
		{
			if(a[j]>a[j+1]&&a[0]>a[j+1])
			{
			    t=a[j];
			    a[j]=a[j+1];
			    a[j+1]=t;
			}
		}
		
	}
	for(i=1;i<=n;i++)
	{
	    printf("%d",a[i]);
	}
	
}
