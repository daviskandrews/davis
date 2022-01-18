#include<stdio.h>
main()
{
	int i,num,count=0,count2=0,j;
	printf("enter a number limit\n");
	scanf("%d",&num);
	printf("the prime numbers upto %d are\n",num);
	for(i=1;i<=num;i++)
	{	count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
		printf("\n %d is prime",i);
		count2++;
		}
		
	}
	printf("\nthere are %d prime numbers between 1 and %d",count2,num);
	
}
