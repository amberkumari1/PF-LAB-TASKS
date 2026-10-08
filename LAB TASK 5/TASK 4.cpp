#include <stdio.h>
int main(){
	int units;
	char type;
	float bill;
	
	printf("Enter units consumed : ");
	scanf("%d",&units);
	printf("Enter connection type (D for domestic, C for commercial) : ");
	scanf(" %c",&type);
	
	if(type=='D'){
	
		if(units>=0 && units<=100)
			bill=units*5;
		else if(units>=101 && units<=300)
			bill=100*5+(units-100)*8;
		else 
			bill=100*5+200*8+(units-300)*12;
		
		printf("The domestic bill is : %f",bill);
	}
	else if (type=='C'){
	
		if(units>=0 && units<=100)
			bill=units*10;
		else if(units>=101 && units<=300)
			bill=100*10+(units-100)*13;
		else 
			bill=100*10+200*13+(units-300)*16;
		printf("The commercial bill is : %f",bill);
	}
	else 
		printf("Invalid connection type");
	return 0;
}
