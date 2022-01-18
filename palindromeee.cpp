#include<stdio.h>
#include<conio.h>
int main()
{
	
	int n,rem,sum=0,temp,base=1;
	printf("enter a number convert from binary to decimal");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		rem=temp%10;
		sum=sum+rem*base;
		temp=temp/10;
		base=base*2;
	}
	
	
	printf("%d is the decimal number of %d",sum,n);
	
	return 0;
}
