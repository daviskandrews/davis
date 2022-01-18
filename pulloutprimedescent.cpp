#include<math.h>
#include<stdio.h>
int isprime(int n)
{
	int flag,i,j=i/2;
	for(i=2;i<=j;i++)
	{
		if(n%i==0)
			flag=1;
			break;
	}
	if (flag==1)
	return 0;
	else return 1;
}

int main(){
	int a[10],temp,j,i,count=0,n;
	printf("enter a number of elements\n");
	scanf("%d",&n);
	
	printf("enter the array elements\n");
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(isprime(a[i]))
		{
			for(j=i;j<n;j++)
			{
				a[j]=a[j+1];	
			}
			j--;
			n--;
		}
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
	
	printf("array after prime lemination and descend sorting\n");
	for(i=0;i<n;i++){
	printf("\n%d",a[i]);
	}
	
	
	return 0;	
}
