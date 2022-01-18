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
	printf("Basic Pay =%f \n",basicPay);
	printf("Dearness Allowance =%f \n",dearnessAllowance);
	printf("House Rent Allowance =%f \n",houseRentAllowance);
	printf("Provident Fund =%f \n",providentFund);
	printf("Gross Salary =%f \n",grossSalary);
}
