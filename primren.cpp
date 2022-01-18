#include<stdio.h>
int main()
{
	int i=3,n,count,c;
	printf("enter the limit");
	scanf("%d",&n);
	
	if(n>=1){
		printf("first %d prime numbers are :\n",n);
		printf("2\n");
	}
	for(count=2;count<=n;)
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
