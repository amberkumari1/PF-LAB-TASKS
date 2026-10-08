#include<stdio.h>
int main(){
	int marks,n;
	float average,score=0;
	
	printf("Enter the number of students : ");
	scanf("%d",&n);
	
	for(int i=1 ; i<=n ; i++){
		
		printf("Enter the marks(out of 100) : ");
		scanf("%d",&marks);
		score+=marks;	
	}
	printf("The total score of class is %f\n",score);
	average=score/n;
	printf("The average of the class is %f",average);
	return 0;
}
