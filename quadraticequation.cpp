#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
	float A,B,C,root1,root2;
	float	real,imaginary,discriminant;
	printf("enter the values of A and B and C\n");
	scanf("%f%f%f",&A,&B,&C);
	if(A==0 && B==0 && C==0)
	{
		scanf("\n roots cannot be determined");
	}
	else
	{
		discriminant=B*B-(4.0*A*C);
		if(discriminant<0)
		{
			printf("IMAGINARY ROOTS\n");		
			real=-B/(2.0*A);
			imaginary=sqrt(abs(discriminant))/(2.0*A);
			printf("root1= %f + i %f \n",real,imaginary);
			printf("root2= %f - i %f \n",real,imaginary);
		}
		else if(discriminant==0)
		{	
			printf("REAL AND EQUEAL ROOTS\n");		
			root1=-B/(2.0*A);
			root2=root1;
			printf("root1= %f \n",root1);
			printf("root2= %f\n",root2);
		}
		else if(discriminant>0)
		{	
			printf("REAL AND DISTINCT ROOTS\n");		
			root1=(-B+sqrt(discriminant))/(2.0*A);
			root2=(-B-sqrt(discriminant))/(2.0*A);
			printf("root1= %f \n",root1);
			printf("root2= %f\n",root2);
		}
	}
	
}
