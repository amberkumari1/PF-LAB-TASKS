#include <stdio.h>
int main(){
	int age,price;
	char day;
	
	printf("Enter your age : ");
	scanf("%d",&age);
	printf("Enter day ('W' for weekday, 'H' for weekend/holiday) : ");
	scanf(" %c",&day);
	
	if(age<12 || age>60){
		if(day=='W')
			price=400;
		else 
			price=500;
		}
	
	else {
	
		if (day=='W')
			price=500;
		else 
			price=600;
		}
	printf("Ticket price is : %d",price);
	return 0;

}
