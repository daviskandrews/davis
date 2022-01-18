#include<stdio.h>
int main()
{
	int n,sum=0,rem;
	printf("enter a number ");
	scanf("%d",&n);
	while(n)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("sum of digits is %d",sum);
	return 0;
}
