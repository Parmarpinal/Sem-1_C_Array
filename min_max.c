#include<stdio.h>
void main()
{
	int n;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int a[n],i,sum=0,max,min,count=0;
	float avg;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
		if(count==0)
		{
			max=a[i];
			min=a[i];
		}

		if(max<a[i])
		{
			max=a[i];
		}

		if(min>a[i])
		{
			min=a[i];
		}

		count++;
	}

	avg=(float)sum/count;

	printf("min=%d",min);
	printf("\nmax=%d",max);
	printf("\nsum=%d",sum);
	printf("\navg=%f",avg);
}