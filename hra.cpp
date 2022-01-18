#include<stdio.h>
int main()
{
	float basicPay,dearnessAllowance,houseRentAllowance,providentFund,grossSalary;
	printf("enter the basic salary");
	scanf("%f",&basicPay);
	houseRentAllowance=basicPay*.2;
	dearnessAllowance=basicPay*.4;
	providentFund=basicPay*.12;
	grossSalary=basicPay+dearnessAllowance+houseRentAllowance+providentFund;
	printf("Basic Pay =%.2f \n",basicPay);
	printf("Dearness Allowance =%.2f \n",dearnessAllowance);
	printf("House Rent Allowance =%.2f \n",houseRentAllowance);
	printf("Provident Fund =%.2f \n",providentFund);
	printf("Gross Salary =%.2f \n",grossSalary);
}
