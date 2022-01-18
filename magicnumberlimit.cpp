#include<stdio.h>
int sumOfDigits(int n)
{	
	int rem,sum=0;
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	return sum;
}

int reverseOfDigits(int n)
{
	int rem,reverse=0;
	while(n>0)
	{
		rem=n%10;
		reverse=(reverse*10)+rem;
		n=n/10;
	}
	return reverse;
}

main()
{
	int n,i,temp1,temp2;
	printf("enter a number to check it is magic number or not \n");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		
		if(sumOfDigits(i)*reverseOfDigits(sumOfDigits(i))==i)
		{
			printf("\n%d is a magic number",i);
		}
	}
}
