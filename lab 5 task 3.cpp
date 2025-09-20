#include<stdio.h>
int main(){
	int year;
	printf(" enetr age which you want to check if it is a leep year or not: ");
	scanf("%d", &year );
	
	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0){
		printf(" leep year");
	} else {
		printf(" not a leep year");
	}
	return 0;
}
