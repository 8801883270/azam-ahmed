#include<stdio.h>
void main()
{
	int x;
	int *y;
	x=10;
	y=&x;
	printf("%d\n",x);
	printf("%p\n",&x);
	printf("%d\n",*y);
	printf("%p\n",y);
}
