#include<stdio.h>
main()
{
	int i,sum=0,a,b;
	printf("enter first number\n");
	scanf("%d",&a);
	printf("enter seceond number\n");
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
	}
	printf("the sum of all even numbers betweeb %d and %d is %d	",a,b,sum);
}
