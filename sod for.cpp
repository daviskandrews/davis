#include<stdio.h>
main()
{
	int rem,n,sum=0,temp;
	printf("enter the number too find sum pf digits \n");
	scanf("%d",&n);
	temp=n;
	for(;n>0;n=n/10)
	{
		rem=n%10;
		sum=sum+rem;
		
	}
	printf("sumof digits of %d is %d\n",temp,sum);
}

