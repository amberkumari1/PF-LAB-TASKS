#include<stdio.h>
int main(){
	float temp[8];
	int i;
	
	printf("Enter 8 hourly temperature readings(C): \n");
	
	for(i=0 ; i<8 ; i++){
		printf("Hour %d : ",i+1);
		scanf("%f",&temp[i]);
	}
	
	float hottest=temp[0];
	float coldest=temp[0];
	
	for(i=1 ; i<8 ; i++){
		if(temp[i]>hottest)
			hottest=temp[i];
		if(temp[i]<coldest)
			coldest=temp[i];
	}
	
	float second_hottest=coldest;
	
	for(i=0 ; i<8 ; i++){
		if(temp[i]> second_hottest && temp[i]<hottest)
			second_hottest=temp[i];
	}
	
	printf("Hottest Temperature : %.2f C\n",hottest);
	printf("Coldest Temperature : %.2f C\n",coldest);
	printf("Second Hottest Temperature : %.2f C\n",second_hottest);
	return 0;
}
