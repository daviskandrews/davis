#include<stdio.h>
#include<stdlib.h>
main()
{
	int size,i,left,right;
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
	
	left=0;
	right=size-1;
	while(left<right)
	{
		while(arr[left]==1 && left<right)
		{
			left++;
		}
		while(arr[right]==0 && left<right)
		{
			right--;
		}
		if(left<right)
		{	
			arr[left]=1;
			arr[right]=0;		
			left++;
			right--;
			
		}
	}

	for(i=0;i<size;i++)
	{
		printf("\n%d",arr[i]);	
	}
	
}
