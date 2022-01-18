#include<stdio.h>
int main()
{
	int a,b,i,multiplication=0;
	printf("enter a,b \n");
	scanf("%d%d",&a,&b);
	if(b<0)
	{
		a=a+b;
		b=a-b;
		a=a-b;
	}
	if(a>=0)
		for(i=1;i<=a;i++)
			multiplication+=b;
	
	if(a<0)
		for(i=a;i<=-1;i)
			multiplication-+b;
	
	printf("multiplication of %d and %d = %d",a,b,multiplication);
}
