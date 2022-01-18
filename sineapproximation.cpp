#include<stdio.h>
#include<math.h>
int factorial(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
main()
{
	int accuracy,count=0,k=1;
	float x,temp,sine=0;
	printf("please enter the value of x in degrees to find sin x valuem\n");
	scanf("%f",&x);
	temp=x;
	x=x*(3.14159/180);
	printf("enter the value to get more accurate\n 3 f or least or more for more accuracy\n");
	scanf("%d",&accuracy);
	do
	{
		if(count%2==0)
		{
			sine=sine+pow(x,k)/factorial(k);
		}	
		if(count%2==1)
		{
			sine=sine-pow(x,k)/factorial(k);
		}
		count++;
		k=k+2;
	}while(count<=accuracy);
	printf("sine(%f) is calculated mathematically is %f\n",temp,sine);
	printf("sine(%f) is calculated using library function %f\n",temp,sin(x));

}

