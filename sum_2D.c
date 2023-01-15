#include<stdio.h>
void main()
{
	int a[3][3],b[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter elements of 1st array:");
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter elements of 2nd array:");
			scanf("%d",&b[i][j]);
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d",a[i][j]+b[i][j]);
		}

		printf("\n");
	}
}