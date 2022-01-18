#include<stdio.h>
main()
{
	int rem,i,n,sum=0,temp;
	printf("enter the number too find sum pf digits \n");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("sumof digits of %d is %d\n",temp,sum);
}

