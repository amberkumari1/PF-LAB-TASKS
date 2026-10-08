#include <stdio.h>
int main()
{
	float units, bill, rate= 7.0;
	printf("Enter units consumed : ");
	scanf("%f",&units);
	
	bill=units*rate;
	if(units<100)
		bill=bill-(bill*0.1);
	printf("Total bill : %.2f\n",bill);
	
	
}
