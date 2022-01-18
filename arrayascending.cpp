#include<stdio.h>
int main(){
	int a[10],i,j,temp,n;
	printf("enter a number of elements\n");
	scanf("%d",&n);
	
	printf("enter the array elements\n");
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		
	}
	printf("enter a number of elements\n");
	for(i=0;i<n;i++){
	printf("\n%d",a[i]);
	}
	
	
	return 0;	
}
