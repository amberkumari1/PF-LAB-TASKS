#include <stdio.h>
int main(){
	 int price=500;
	 
	 printf("Show Number\tTicket price\n");
	 printf("------------------------------\n");
	 
	 for(int show=1 ; show<=10 ; show++){
	 		printf("Show %d\t\tRs. %d\n",show,price);
	 		price+=50;
	 }
	 return 0;
}
