#include<stdio.h>
int main(){
	int level;
	int hours=0;
	
	printf("Enter initial water tank level(in litres) : ");
	scanf("%d",&level);
	
	printf("Starting level : %d litres\n",level);
	
	while(level>1){
	
		hours++;
		if(level%2==0)
			level/=2;
		else
			level=(3*level)+1;
			
		printf("Hour %d : %d litres\n",hours,level);
	}
	
	printf("Tank reached 1 litre in %d hours",hours);
	return 0;	
}
