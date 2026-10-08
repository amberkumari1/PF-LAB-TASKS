#include <stdio.h>
int main()
{
	int num; 
	printf("Enter a number : ");
	scanf("%d", &num);
	
	if (num%3 ==0 && num%5 ==0)
		printf("It is divisible by both 3 and 5");
	
	else
		printf("It is not divisible by both 3 and 5");
		
	}

