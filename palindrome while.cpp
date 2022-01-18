#include<stdio.h>
int main()
{
	int n,temp,sum=0,rem;
	printf("enter a number to check palindrome ");
	scanf("%d",&n);
	temp=n;
	while(n)
	{
		rem=n%10;
		sum=(sum*10)+rem;
		n=n/10;
	}
	
	if(sum==temp)
	{
	printf("the number is palindrome");
	}
	else
	{
		printf("the number is not palindrome");
	
	}
	return 0;
}
