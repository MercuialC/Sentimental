#include<stdio.h>
int main()
{
	int i,t,j;
	for(j=0;j<n;j++)
{	
		for(i=0,i<n-1;i++)
		{
			if(a[i]>a[i+1])
			{	
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
}
}
