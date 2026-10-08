#include <stdio.h>
int main(){
	float a,b,result;
	char op;
	printf("Enter two numbers and operator(+,-,*,/): ");
	scanf("%f %f %c", &a ,&b ,&op);
	
	switch(op){
		case '+':
			result= a+b;
			break;
		case '-':
			result= a-b;
			break;
		case '*':
			result= a*b;
			break;
		case '/':
			if(b!=0)
				result= a/b;
			else
				printf("Not possible\n");
				return 0;
			break;
		default:
			printf("Invalid operator\n");
		
	}
		printf("The result is %.2f",result);
}
