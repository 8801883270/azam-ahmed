#include<stdio.h>
void main()
{
	int i,j,n,temp,a[20];
	printf("Enter no of elements\n");
	scanf("%d\n",&n);
	printf("Enter numbers in array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<(n-1);i++)
	{
		for(j=0;j<(n-i-1);j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		for(i=0;i<n;i++)
		{
			printf("%d\n",a[i]);
		}
	}
}
