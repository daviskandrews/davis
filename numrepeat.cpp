#include<stdio.h>
main()
{
int n,i,frequency[9],flag=0,temp,k;
printf("enter the number to check digit repeatation \n");
scanf("%d",&n);
temp=n;
for(i=0;i<10;i++)
{
frequency[i]=0;
}	
while(n>0)
{
	k=n%10;
	frequency[k]++;
	n=n/10;
}
for(i=0;i<10;i++)
{
	if(frequency[i]>1)
	{
		flag=1;
		printf("\n the digit %d is repeated %d times ",i,frequency[i]);
	}
}
if(flag==0)
{
	printf("\n there is no repeatation of digits in the number");
}
else
{
	printf("\n  there are some digits repeats in the number");
}

}
