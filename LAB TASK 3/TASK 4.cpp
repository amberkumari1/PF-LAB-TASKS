#include <stdio.h>

int main()
{
	int num1,num2;
	int sum,difference,product,quotient,remainder;
	
	printf("Enter first number:");
	scanf("%d", &num1);
	printf("Enter second number:");
	scanf("%d", &num2);
	
	sum= num1+num2;
	difference= num1-num2;
	product= num1*num2;
	quotient= num1/num2;
	remainder= num1%num2;
	
	printf("The sum is %d\n",sum);
	printf("The difference is %d\n",difference);
	printf("The product is %d\n",product);
	printf("The quotient is %.2d\n",quotient);
	printf("The remainder is %d\n",remainder);
}
	
