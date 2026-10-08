#include<stdio.h>
int main(){
	int marks;
	
	do{
		printf("Enter students marks(out of 100) : ");
		scanf("%d",&marks);
		
		if(marks<0 || marks>100)
			printf("Invalid marks.Please enter a value between 0 and 100\n");
			
	}while(marks<0 || marks>100);
	
	if(marks>=50)
		printf("Pass\n");
	else 
		printf("Fail\n");
	return 0;
}
