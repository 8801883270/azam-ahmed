#include<stdio.h>
void main()
{
	int i;
	int rollno[5];
	int least;
	printf("Read values for user\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&rollno[i]);
	}
	least=rollno[0];
	for(i=0;i<5;i++)
	{
		if(least>rollno[i])
		{
			least=rollno[i];
	
		}
	}
	printf("least=%d\n",least);
}
