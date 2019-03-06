#include<stdio.h>
void main()
{
	int count;
	char *y;
	char name[10];
	printf("Enter name\n");
	scanf("%s",&name);
	y=name;
	count=0;
	while(*y!='\0')
	{
		count++;
		y++;
	}
	printf("%d\n",count);
}
