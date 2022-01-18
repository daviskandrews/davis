#include<stdio.h>
int main()
{
	int temp,decimal,binary=0,rem,i=1;
	printf("enter the decimal number");
	scanf("%d",&decimal);
	temp=decimal;
	while(temp!=0)
	{	
		rem=temp%2;
		binary=binary+rem*i;
		temp=temp/2;
		i=i*10;		
	}
	printf("the binary number of %d is %d ",decimal,binary);
	return 0;
}
