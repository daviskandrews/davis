#include<stdio.h>

int main(){
	int temp,n,rem,rev=0;
	printf("enter a number to checck amstrong");
	scanf("%d",&n);
	temp=n;
	while(n)
	{
		rem=n%10;
		rev=rev+rem*rem*rem;
		n=n/10;
	} 
	
	if (temp==rev)
		printf("the given number is  amstrong");
	else 
		printf("the given number is not amstrong");
	return 0;
	return 0;	
}
