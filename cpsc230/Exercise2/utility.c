#include <stdio.h>


int userNumber(int min, int max) {
	int num;
	while(1 == 1){
	printf("Enter a number between %d and %d: ", min, max);
	scanf("%d", &num);
	if(num < min || num > max) {
	printf("Enter a valid number. ");
	continue; 
	}
	else {
	return num; 
	}




	}

}

