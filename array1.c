#include<stdio.h>
void main()
{
	int a[5],i;
	for(i=0;i<5;i++)
	{
		printf("Enter elements of array: ");
		scanf("%d",&a[i]);
	}

	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}


		printf("\nReverse array: ");

	for(i=4;i>=0;i--)
	{
		printf("\n%d",a[i]);
	}
}