/*
 *Write a C program that takes in a letter from user input, and displays both the letter
and the integer representation of the letter. For example, if the input is A, the output
should be A = 65.
 */
#include <stdio.h>

int main(void) {
	char uinput;
	printf("Enter a character: ");
	scanf("%c", &uinput);
	printf("%c = %d\n", uinput, uinput);
	return 0;
}

