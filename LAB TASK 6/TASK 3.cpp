#include<stdio.h>
int main(){
	int amount;
	float years,growth_factor;
	
	printf("Enter the principal amount : ");
	scanf("%d",&amount);
	
	printf("Enter annual growth factor : ");
	scanf("%f",&growth_factor);
	
	printf("Enter number of years : ");
	scanf("%f",&years);
	
	printf("Year\t\tUpdated Amount\n");
	printf("------------------------------\n");
	
	for(int i=1 ; i<=years ; i++){
		amount*=growth_factor;
	printf("Year %d\t\tRs. %d\n",i,amount);
		
	}
	return 0;
}
