#include<stdio.h>
void main()
{
	int n;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int a[n],i,b[n],j;
	for(i=0;i<n;i++)
	{
		scanf("%d",a[i]);
		for(i=1;i<n;i++)
		{
			if(a[0]<a[i])
			{
				a[i]=b[j];
			}
		}
	}
}