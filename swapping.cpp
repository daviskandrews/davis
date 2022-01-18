#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a \n");
	scanf("%d",&a);
	printf("enter b\n");
	scanf("%d",&b);
	printf(" \nthe values before swapping \na=%d \nb=%d",a,b);
	c=a;
	a=b;
	b=c;
	printf(" \nthe values after swapping \na=%d \nb=%d",a,b);
}
