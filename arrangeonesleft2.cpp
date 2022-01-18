#include<stdio.h>
#include<stdlib.h>
main()
{
	int size,i,onecount=0;
	printf("enter the size of the array");
	scanf("%d",&size);
	int arr[size];
	printf("enter 1's and 0's only");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		if(!( arr[i]==0 || arr[i]==1 ))
		{
			printf("enter either 1's and 0's only");
			exit(0);
		}
	}
	for(i=0;i<size;i++)
	{
		if(arr[i]==1)
		{
			onecount++;
		}
	}
	for(i=0;i<size;i++)
	{
		if(i>=onecount)
		{
			arr[i]=0;
		}
		else
		{
			arr[i]=1;
		}
	}
	for(i=0;i<size;i++)
	{
		printf("\t%d",arr[i]);	
	}
	
}
