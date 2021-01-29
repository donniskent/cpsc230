#include <stdio.h>
#include <string.h> 
#include <stdbool.h> 
void main(int argc, char argv[]) {
	char word[51]; 
	while(true) {
	printf("Enter a word: "); 
	 
	scanf("%50s", word); 	
	if(strcmp(word, "quit") == 0) {
	break; }
	printf("The length of your word is %d\n ", strlen(word)); 	
	 
	}


} 
