#include <stdio.h>
int main(){
	char dept;
	int semester;
	
	printf("Enter your department('C' for CS, 'E'for EE, 'B' for BUSINESS) : ");
	scanf(" %c",&dept);
	
	switch(dept){
		case 'c':
		case 'C':
			printf("Enter semester (1,2,3) : ");
			scanf("%d",&semester);
			
			switch(semester){
				case 1:
					printf("Department : Computer Science\nCourse : Programming Fundamentals");
					break;
				case 2:
					printf("Department : Computer Science\nCourse : Object Oriented Programming");
					break;
				case 3 :
					printf("Department : Computer Science\nCourse : Data structures");
					break;
				default:
					printf("Invalid Semester For CS Department");
					break;
			}
		break;
		
		case 'e':
		case 'E':
			printf("Enter semester (1,2,3) : ");
			scanf("%d",&semester);
			
			switch(semester){
				case 1:
					printf("Department : Electrical Engineering\nCourse : Linear Circuit Analysis");
					break;
				case 2:
					printf("Department : Electrical Engineering\nCourse : Digital Logic Design");
					break;
				case 3:
					printf("Department : Electrical Engineering\nCourse : Electronic Devices and Circuits");
					break;
				default:
					printf("Invalid Semester For EE Department");
					break;
				}
			break;
			
			case 'b':
			case 'B':
				printf("Enter semester (1,2,3) : ");
				scanf("%d",&semester);
				
				switch(semester){
					case 1:
						printf("Department : Business\nCourse : Principles of Management ");
						break;
					case 2:
						printf("Department : Business\nCourse : Financial Accounting ");
						break;
					case 3:
						printf("Department : Business\nCourse : Principles of Marketing ");
						break;
					default:
					printf("Invalid Semester For Business Department");
					break;
				}
				break;
				default:
					printf("Invalid Department character");
					break;
	}
	return 0;
	
}

