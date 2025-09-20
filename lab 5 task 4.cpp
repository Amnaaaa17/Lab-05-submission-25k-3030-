#include<stdio.h>
int main (){
	int amount;
	
	printf("enter withdrawl amount: ");
	scanf("%d", &amount);
	
	if (amount <= 500 && amount % 20 == 0){
		printf(" withdrawl approved");
	} else {
		printf(" withdrawl denied");
	}
	return 0;
}
