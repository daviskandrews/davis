#include<stdio.h>
main()
{
	int i,n,factorial=1;
	printf("enter a number to find factorial\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		factorial*=i;
	}
	printf("factorial of %d is %d",n,factorial);
}
