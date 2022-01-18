#include<stdio.h>
#include<stdlib.h>
main()
{
	int size,i,j,temp;
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
		for(j=i+1;j<size;j++)
		{	
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	

	for(i=0;i<size;i++)
	{
		printf("\n%d",arr[i]);	
	}
	
}
