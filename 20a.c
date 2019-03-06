#include<stdio.h>
void main()
{
	doMulti(32,5);
	doMulti(45,1);
}
void doMulti(int x,int y)
{
	int result=x*y;
	printf("%d\n",result);
}
