#include<stdio.h>
int main(){
	int rating;
	
//	printf("5: Excellent, 4: Good, 3: Average, 2: Poor, 1: Terrible.\n");
	
	printf("how will you rate loin king on a scale of (1-5): ");
	scanf("%d", &rating);
	
	if (rating == 5){
		printf(" Excellent");
	} else if (rating == 4){
		printf("Good");
	} else if ( rating == 3){
		printf("average");
	} else if (rating == 2){
		printf(" poor");
	} else {
		printf(" Terrible");
	}
	return 0;
}
