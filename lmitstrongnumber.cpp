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
	int i,n,rem,temp1,temp2,sum=0;
	printf("enter a number to find all strong numbers between them\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum=0;
		temp1=i;
		temp2=i;
		while(temp1>0)
		{
			rem=temp1%10;
			sum+=factorial(rem);
			temp1/=10;
		}
	
		if(sum==temp2)
		{
			printf("\n %d is a strong number ",sum);
		}
		}
	return 0;
}
