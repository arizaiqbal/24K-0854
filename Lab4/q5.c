/*Write a C program to input a character from the user and check whether the
given character is a small alphabet, capital alphabet, digit, or special character,
using if else.*/

#include <stdio.h>

int main(){
	
	char alpha;
	printf("Input a character:");
	scanf(" %c", &alpha);
	
	if (alpha>='a' && alpha <= 'z'){
		printf(" character is a small alphabet");
	}
	else if (alpha>='A' && alpha <= 'Z'){
		printf(" character is a capital alphabet");
	}
	else if (alpha>='0'){
		printf(" character is a digit");
	}

	else{
		printf("It is a special character");
	}

	
	return 0;
}