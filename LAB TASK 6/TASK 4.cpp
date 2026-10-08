#include<stdio.h>
int main(){
	int pin,sum=0;
	int reversed_pin=0;
	
	printf("Enter a 4-to-6 digits pin : ");
	scanf("%d",&pin);
	
	int temp=pin;
	
	while(temp>0){
		int digit=temp%10;
		sum+=digit;
		reversed_pin=(reversed_pin*10)+digit;
		temp=temp/10;
	}
		printf("Sum of digits is %d\n",sum);
		printf("Reversed PIN : %d\n",reversed_pin);
		return 0;
}
