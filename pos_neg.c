#include<stdio.h>
void main()
{
	int n;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int a[n],i,pos=0,neg=0,zero=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>0)
		{
			pos++;
		}
		else if(a[i]<0)
		{
			neg++;
		}
		else
		{
			zero++;
		}
	}

	printf("Total no. of positive=%d",pos);
	printf("\nTotal no. of negative=%d",neg);
	printf("\nTotal no. of zero=%d",zero);
}