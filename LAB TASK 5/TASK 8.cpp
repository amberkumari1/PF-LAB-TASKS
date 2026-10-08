#include <stdio.h>
int main(){
	int category,item;
	
	printf("Select category\n1.Beverages\t2.Main course\t3.Desserts\nEnter your choice : ");
	scanf("%d",&category);
	
	switch(category){
		case 1: 
			printf("----Beverages----\n1.Soda\t2.Coffee \t3.Tea\nEnter the choice : ");
			scanf("%d",&item);
			
			switch(item){
			
				case 1: 
					printf("You have ordered Soda.\nPrice=$4.0");
					break;
				case 2: 
					printf("You have ordered Coffee.\nPrice=$7.0");
					break;
				case 3: 
					printf("You have ordered Tea.\nPrice=$5.0");
					break;
				default:
					printf("Invalid choice entered");
					break;
			}
		break;
		
		case 2:	
			printf("----Main Course----\n1.Burger\t2.Pizza \t3.Pasta\nEnter the choice : ");
			scanf("%d",&item);
				switch(item){
					
				case 1: 
					printf("You have ordered Burger.\nPrice=$10.0");
					break;
				case 2: 
					printf("You have ordered Pizza.\nPrice=$15.0");
					break;
				case 3: 
					printf("You have ordered Pasta.\nPrice=$15.0");
					break;
				default:
					printf("Invalid choice entered");
					break;	
				}
		
		break;
		
		case 3:
			printf("----Desserts----\n1.Icecream \t2.Cake \t3.Brownie\nEnter the choice : ");
			scanf("%d",&item);
			
			switch(item){
				case 1: 
					printf("You have ordered Icecream.\nPrice=$4.0");
					break;
				case 2: 
					printf("You have ordered Cake.\nPrice=$15.0");
					break;
				case 3: 
					printf("You have ordered Brownie.\nPrice=$8.0");
					break;
				default:
					printf("Invalid choice entered");
					break;
				}
				break;
		default:
			printf("Invalid category entered");
			break;
	}
	return 0;
}
