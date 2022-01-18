#include<stdio.h>
int main()
{	
	int n,i=3,count ,c;
	printf("enter the number of prime numbers \n");
	scanf("%d",&n);
	
	if(n>=1)
	{
		printf("first %d prime numbers are \n");
		printf("2\n");
	}
	for(count=0;count<=n;)
	{
		for(c=2;c<=i-1;c++)
		{
			if(i%c==0)
			break;
		}
		if(c==i)
		{
			printf("%d\n",i);
			count++;
		}
		i++;
	}
	
	return 0;
}
