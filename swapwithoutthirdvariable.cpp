#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a \n");
	scanf("%d",&a);
	printf("enter b\n");
	scanf("%d",&b);
	printf(" \nthe values before swapping \na=%d \nb=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf(" \nthe values after swapping \na=%d \nb=%d",a,b);
}
