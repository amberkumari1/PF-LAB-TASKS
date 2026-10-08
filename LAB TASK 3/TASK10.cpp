#include <stdio.h>

int main()
{
	float principalamount , interestrate , timeperiod ,simpleinterest;
	printf("Enter principal amount : ");
	scanf("%f",&principalamount);
	printf("Enter interest rate : ");
	scanf("%f",&interestrate);
	printf("Enter time period : ");
	scanf("%f",&timeperiod);
	
	simpleinterest= (principalamount*interestrate*timeperiod) /100;
	printf("The simple interest is : %.2f",simpleinterest);
	
	 
}
