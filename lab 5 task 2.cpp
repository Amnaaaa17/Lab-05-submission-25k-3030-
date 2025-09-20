#include<stdio.h>
int main(){
	int age;
	
	printf("enter your age");
	scanf("%d", &age );
	
	if ( age >= 1 && age <= 12){
		printf("you fall into child categpry");
	} else if ( age >= 13 && age <= 18){
		printf(" you fall into teenager category");
	} else if ( age >= 19 && age <= 35) {
		printf(" you fall into adult category");
	} else {
		printf(" you fall into senior category");
	}
	 return 0;
}
