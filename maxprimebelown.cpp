#include<stdio.h>
main()
{
	int i,j,n,count,maxprime=1;
	printf("enter a number limit to find maXprime\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
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
			if(maxprime<i)
			{
				maxprime=i;
			}
		}
	}
	printf("\nthe maxmum prime number below %d is %d ",n,maxprime);
}
