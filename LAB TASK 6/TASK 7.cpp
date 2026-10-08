#include<stdio.h>
int main(){
	int choice;
	
	do{
		printf("Menu\n1.Add item\t2.Remove item\t3.View total\t4.Checkout\n");
		printf("Enter your choice(1-4) : ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1: 
				printf("You added an item to the order");
				break;
			case 2:
				printf("You removed an item to the order\n");
				break;
			case 3:
				printf("You are viewing total\n");
				break;
			case 4:
				printf("Checking out....Thank you!\n");
				break;
			default:
				printf("Invalid choice. Please select an option between 1 and 4\n");
				break;
		}
			
	}while(choice!=4);
	
	return 0;
}
