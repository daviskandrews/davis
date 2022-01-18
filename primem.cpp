#include<stdio.h>
int main(){
	int n,count,i=2,c;
	printf("enter the number of digits");
	scanf("%d",&n);
	if(n>=1)
{
	printf("the first %d prime numbers are \n");
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
