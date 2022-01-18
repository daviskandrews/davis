#include<stdio.h>
main()
{
	int n,i,sum=0;
	printf("enter the number to check perfect or not");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(n==sum)
	{
		printf("\n %d is a perfect number",n);
	}
	else
	{
		printf("\n %d is not a perfect number because the sum of its factors is %d",n,sum);
	}
}
