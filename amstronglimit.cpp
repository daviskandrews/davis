#include<stdio.h>
#include<math.h>
main()
{
	long num,i,j,temp1,temp2,sum=0;
	printf("enter a number to know all amstrong numbers between them amstrong \n");
	scanf("%d",&num);
	printf("the amstrong numbers are \n");
	for(i=1;i<num;i++)
	{
		sum=0;
		temp1=i;
		temp2=i;
		while(temp1>0)
		{
			j=temp1%10;
			sum+=pow(j,3);
			temp1/=10;
		}
		if(sum==temp2)
		{
			printf("%d\n",sum);
		}
	}	
}
