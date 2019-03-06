#include<stdio.h>
void main()
{
	char ch[20];
	char *ptr1,*ptr2;
  printf("Enter a character\n");
  scanf("%s",&ch);
  ptr1=ch;
  ptr2=ch;
  while(*ptr2!='\0')
  {
  	ptr2++;
  }
  ptr2--;
  printf("%c\n",*ptr1);
  printf("%c\n",*ptr2);
  
}
