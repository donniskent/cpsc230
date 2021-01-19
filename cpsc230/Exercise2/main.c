#include <stdio.h>
#include "utility.h"
int main() {

/* 1. choose a max and minimum to pass into the utility 
 * 2. Call the utility, it will return an int 
 * 3. pass the returned int into a print statement. 
 * */
	int number = userNumber(1, 100);
	for(int i = number; i >= 0; i--) {
	printf("%d\n", i);
	
	}





}
