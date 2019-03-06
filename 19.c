#include<stdio.h>
void main()
{
	char *ptr1;
	char name[20];
	printf("Enter a string\n");
	scanf("%s",&name);
	ptr1=name;
	while(*ptr1!='\0')
	{
		ptr1++;
		printf("%s\n",ptr1);
	}
}
