#include <stdio.h>
int main(){
	int type,transaction;
	
	printf("Choose an account type\n('1' for Savings or '2' for Current)\nEnter type :  ");
	scanf("%d",&type);
	
	switch(type){
		case 1: 
			printf("Choose a transaction (1 for deposit, 2 for withdraw, 3 for check balance)\n Enter transaction : ");
			scanf("%d",&transaction);
			
			switch(transaction){
				case 1:
					printf("Depositing money into your saving account");
					break;
				
				case 2:
					printf("Withdrawing money from your saving account");
					break;
					
				case 3:
					printf("Displaying your saving account balance");
					break;
					
				default:
					printf("Invalid Transaction choice for saving account");
					break;
			}
			break;
			
			case 2:
				printf("Choose a transaction (1 for deposit, 2 for withdraw, 3 for check balance)\nEnter transaction : ");
				scanf("%d",&transaction);
				
				switch(transaction){
					case 1:
						printf("Depositing money into your current account");
						break;
						
					case 2:
						printf("Withdrawing money from your current account");
						break;
						
					case 3:
						printf("Displaying your current account balance");
						break;
						
					default:
						printf("Invalid transaction choice for current account");
						break;
					}
			break;
			default:
				printf("Invalid account type selected");
				break;	
		
	}
	return 0;
}
