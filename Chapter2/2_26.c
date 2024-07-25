/*
 *Write a C program that takes in a letter from user input, and displays both the letter
and the integer representation of the letter. For example, if the input is A, the output
should be A = 65.
 */
#include <stdio.h>

int main(void) {
	int uinput;
	printf("Enter a number: ");
	scanf("%d", &uinput);
	printf("%d = %c\n", uinput, uinput);
	return 0;
}

