#include<stdio.h>
int main()
{
	int a=10,b=20,temp;
	printf(" before swap \n a=%d\n b=%d",a,b);
	temp=a;
	a=b;
	b=temp;	
	printf("\n after swap \n a=%d\n b=%d",a,b);
	return 0;
}

