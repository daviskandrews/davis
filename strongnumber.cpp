#include<stdio.h>
int factorial(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}

int main()
{	
	int n,rem,temp,sum=0;
	printf("enter a number to check strong or not\n");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rem=n%10;
		sum+=factorial(rem);
		n=n/10;
	}
	if(sum==temp)
	{
		printf("the entered number %d is a strong number ",temp);
	}
	else
	{
		printf("the entered number %d is not a strong number because sum of factorial of digits are %d",temp,sum);
	}
	return 0;
}
