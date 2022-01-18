#include<stdio.h>
int main()
{
	float salary,bonus;
	char gender;
	printf("enter the gender male or female (M/F)");
	scanf("%c",&gender);
	printf("enter salary");
	scanf("%f",&salary);
	if(gender=='M' || gender=='m')
	{
		if (salary>10000)
			bonus=(salary*0.05);
		else
			bonus=(salary*0.07);
	}
	
	if(gender=='F' || gender=='f')
	{
		if (salary>10000)
			bonus=(salary*0.1);
		else
			bonus=(salary*0.12);
	}
	salary=salary+bonus;
	printf("\n bonus=%f \n salary=%f",bonus,salary);


}
