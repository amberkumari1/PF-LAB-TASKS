#include<stdio.h>
int main(){
	int stock[10];
	int i,search_value;
	
	printf("Enter stock counts for 10 shelves : \n");
	for(i=1 ; i<=10 ; i++){
		printf("Shelf %d : ",i);
		scanf("%d",&stock[i]);
	}
	
	printf("-----Reverse Order-----\n");
	for (i=10 ; i>=1; i--){
		printf("Shelf %d : %d items\n",i,stock[i]);
	}
	
	printf("Enter stock count to search for : ");
	scanf("%d",&search_value);
	
	for(i=1 ; i<=10 ; i++){
		if(stock[i]==search_value){
			printf("Stock count %d found on Shelf Index %d\n",search_value,i);
			return 0;
		}
			
	}
		printf("Stock count %d is not found on the shelf.\n",search_value);
		return 0;
}
	
	
