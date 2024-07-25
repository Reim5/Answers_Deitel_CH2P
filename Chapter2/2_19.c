/*
 * 2.19 (Arithmetic, Largest Value and Smallest Value) Write a program that inputs
three different integers from the keyboard, then displays the sum, the average, the
product, and the smallest and the largest of these numbers. Use only the single-selection
form of the if statement you learned in this chapter. The screen dialogue should ap-
pear as follows:

Enter three different integers: 13 27 14
Sum is 54
Average is 18
Product is 4914
Smallest is 13
Largest is 27
 */
#include <stdio.h>

int main(void) {
	int a;
	int b;
	int c;
	int largest;
	int smallest;
	printf("Enter three different integers: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("Sum is %d\n", a + b + c);
	printf("Average is %d\n", (a + b + c) / 3);
	printf("Product is %d\n", (a * b * c));
	smallest = a;

	if (b < smallest) {
		smallest = b;
	}

	if (c < smallest) {
		smallest = c;
	}

	printf("Smallest: %d\n", smallest);
	largest = a;

	if (b > largest) {
		largest = b;
	}

	if (c > largest) {
		largest = c;
	}

	printf("Largest: %d\n", largest);
	return 0;
}
