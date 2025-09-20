#include<stdio.h>
int main (){
	char color;
	
	printf("enter red(R) for stop, enter yellow(Y) for caution and enter green(G) for go.\n ");
	printf("enter a colour: ");
	scanf("%C", &color );
	
	if ( color == 'R' || color == 'r' ){
		printf(" stop");
	} else if ( color == 'G' || color == 'g'){
		printf(" Go");
	} else if (color == 'Y' || color == 'y' ){
		printf(" Caution");
	} else {
		printf(" invalid input");
	}
	return 0;
}
