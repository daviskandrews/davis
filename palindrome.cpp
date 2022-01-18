#include<stdio.h>
#include<math.h>
int ispalindrome(int n)
{	int rem,rev=0;
	int temp=n;
	while(n)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	} 
	
	if (temp==rev)
	return 1;
	else return 0;
}

int main(){
	int i,n;
	printf("enter a number to checck palindrome");
	scanf("%d",&n);
	if(ispalindrome(n)==0)
	printf("the given number is not palindrome");
	else 
	printf("the given number is palindrome");
	return 0;	
}
