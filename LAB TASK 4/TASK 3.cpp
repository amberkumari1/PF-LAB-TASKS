#include <stdio.h>
int main()
{ 
	int num1,num2;
	printf("Enter the first number : ");
	scanf("%d",&num1);
	printf("Enter the second number : ");
	scanf("%d",&num2);
	
	if(num1==num2)
		printf("Both numbers are equal.");
	else if (num1>num2)
		printf("%d is greater than %d",num1,num2);
	else 
		printf("%d is greater than %d",num2,num1);	
	
}
