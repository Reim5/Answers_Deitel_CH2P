/*
 * 2.16. (Arithmetic) Write a program that reads two integers from the user then displays
 * their sum, product, difference, quotient and remainder.
 */
#include <stdio.h>

int main(void) {
	/* read two integers from users */
	int inp1 = 0;
	int inp2 = 0;
	printf("%s", "Input first integer: ");
	scanf("%d", &inp1);
	printf("%s", "Input second integer: ");
	scanf("%d", &inp2);
	printf("%d + %d = %d\n", inp1, inp2, inp1 + inp2);
	printf("%d - %d = %d\n", inp1, inp2, inp1 - inp2);
	printf("%d * %d = %d\n", inp1, inp2, inp1 * inp2);
	printf("%d / %d = %d\n", inp1, inp2, inp1 / inp2);
	printf("%d mod %d = %d\n", inp1, inp2, inp1 % inp2);
	return 0;
}
