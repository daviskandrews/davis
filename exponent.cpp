#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,pow=1;
	printf("enter the number of peoples  ");
	scanf("%d",&n);
	for(i=1;pow<=n;i++)
	{
		pow=pow*2;
	}
	printf("%d",pow);
	
	
	return 0;
}
