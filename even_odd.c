#include<stdio.h>
void main()
{
	int n;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int a[n],i,even=0,odd=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}

	printf("Even numbers:%d",even);
	printf("\nOdd numbers:%d",odd);
}