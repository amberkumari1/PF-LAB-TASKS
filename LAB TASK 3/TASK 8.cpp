#include <stdio.h>

int main()
{
	int rollnumber;
	float marks, percentage;
	
	printf("Enter Roll number, Marks, Percentage : ");
	scanf("%d %f %f",&rollnumber, &marks, &percentage);
	
	printf("\n----Student details----\n");
	printf("The roll number is : %d\n",rollnumber);
	printf("The marks are : %.2f\n",marks);
	printf("The percentage is : %.3f %%\n",percentage);
	}
