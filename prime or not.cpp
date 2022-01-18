#include<stdio.h>
main()
{
	int i,num,count=0;
	printf("enter a number to check whether it is prime or not \n");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("the entered number %d is prime",num);
	}
	else
	{
		printf("the entered number %d is not prime because it is divisible by",num);
		for(i=1;i<=num;i++)
		{
		if(num%i==0)
		{
			printf("\n%d\n",i);
		}
		}
	}
}
