#include <stdio.h>
int main(){
	float a,b,c;
	
	printf("Enter the value of sides of three sides of triangle : ");
	scanf("%f %f %f",&a, &b, &c);
	
	if(a+b>c && b+c>a && a+c>b){
	
		if(a==b && b==c)
			printf("Equilateral Triangle");
		else if (a==b || b==c || a==c)
			printf("Isosceles Triangle");
		else
			printf("Scalene Triangle");
		}
	else 
		printf("Not a valid triangle");
		return 0;
	}
