#include<stdio.h>
int main()
{
	int nodays,years,weeks,days;
	printf("enter the number of days");
	scanf("%d",&nodays);
	years=nodays/365;
	weeks=(nodays%365)/7;
	days=(nodays%365)%7;
	printf("%d days=%d years,%d weeks,%d days",nodays,years,weeks,days);
	
}
