#include<stdio.h>
void main()
{
	doAdd(23,33);
	doAdd(31,45);
	doAdd(45,12);
}
void doAdd(int x,int y)
{
	int result;
	result=x+y;
	printf("%d\n",result);
}
