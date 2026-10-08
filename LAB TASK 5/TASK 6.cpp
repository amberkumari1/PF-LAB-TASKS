#include <stdio.h>
#include <math.h>
int main(){
	int mode;
	float result;
	printf("Select Mode: \n");
	printf("1. Basic arithmetic\n");
	printf("2.Power/Root operations\n");
	printf("Enter the choice : ");
	scanf("%d",&mode);
	
	switch(mode){
		case 1:
			char op;
			float num1,num2;
			
			printf("Enter two numbers : ");
			scanf("%f %f",&num1,&num2);
			
			printf("Enter the operator(+,-,*,/) : ");
			scanf(" %c",&op);
			
			switch(op){
				case '+':
				result=num1+num2;
				printf("Result = %f",result);
				break;
				
				case '-':
				result=num1-num2;
				printf("Result = %f",result);
				break;
				
				case'*' :
				result= num1*num2;
				printf("Result = %f",result);
				break;
				
				case'/':
					if(num2==0)
						printf("operation not possible");
					else {
						result=num1/num2;
						printf("Result : %f",result);}
					break;
					
				default:
					printf("Invalid arithmetic operator");
					break;
				}
					
		break;
		
		case 2:
			char choice;
			float num;
			
			printf("Enter operation('s' for square, 'r' for square root) : ");
			scanf(" %c",&choice);
			
			switch(choice){
				case 's':
				case 'S':
					printf("Enter a number : ");
					scanf("%f",&num);
					result=num*num;
					printf("Square of %f is %f",num,result);
					break;
					
				case 'r':
				case 'R':
					printf("Enter a number : ");
					scanf("%f",&num);
					
					if(num>=0){
						result=sqrt(num);
						printf("Square root of a %f is %f", num,result);
					}
					else 
						printf("Square root of negative number is not possible");
				break;
				default:
					printf("Invalid operator choice");
					break;	
				}
			break;
			default:
				printf("Invalid mode selected");
				break;
				}
			return 0;
	}

