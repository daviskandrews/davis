#include<stdio.h>
int main()
{
	int i,arr[100];
	for(i=1;i<=100;i++)
	{
	arr[i]=i;
	printf("%d \n",arr[i]);
	}
	
	for(i=1;i<=100;i++)
	{
	if(arr[i]%2==0)
		arr[i]=0;
	}	
	printf("\n");
	for(i=1;i<=100;i++)
	{
	if(arr[i]!=0)
		printf("%d \n",arr[i]);
	}	
	
	return 0;
	
}
