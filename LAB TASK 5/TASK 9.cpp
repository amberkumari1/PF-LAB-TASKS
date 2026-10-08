#include<stdio.h>
int main(){
	char light,pedbutton;
	
	printf("Enter Traffic Light color(Y for yellow, R for red, G for green) : ");
	scanf(" %c",&light);
	
	switch(light){
		case 'r':
		case 'R':
			printf("Is the pedestrian button pressed ? (Y for yes, N for no) : ");
			scanf(" %c",&pedbutton);
			
				switch(pedbutton){
					case 'y':
					case 'Y':
						printf("Stop! Pedestrian are crossing.");
						break;
						
					case 'n':
					case 'N':
						printf("Stop and wait for yellow light");
						break;
					default:
						printf("Invalid pedestrian button");
						break;
					}
		break;
		
				
		case 'y':
		case 'Y':
			printf("Slow down and prepare to start");
		break;
			
		case 'g':
		case 'G':
			printf("Is the pedestrian button pressed ? (Y for yes, N for no) : ");
			scanf(" %c",&pedbutton);
			
			switch(pedbutton){
					case 'y':
					case 'Y':
						printf("Go but watch for pedestrain");
						break;
					case 'n':
					case 'N':
						printf("Go! Proceed with normal traffic");
						break;
					default:
						printf("Invalid pedestrian button");
						break;
					}
			break; 
			default : 
				printf("Invalid traffic light entered");
				break;
	}
	return 0;
	
}

