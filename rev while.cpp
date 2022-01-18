#include<stdio.h>
int main()
{
	int n,temp,sum=0,rem;
	printf("enter a number to find reverse ");
	scanf("%d",&n);
	temp=n;
	while(n)
	{
		rem=n%10;
		sum=(sum*10)+rem;
		n=n/10;
	}
	printf("reverse of %d is %d",temp,sum);
	return 0;
}
