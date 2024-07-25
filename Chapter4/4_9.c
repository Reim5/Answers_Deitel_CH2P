#include <stdio.h>

int main(void) {
	int num1, num2, num3, num4, num5, num6, num7;
	int sum;
	float avg;
	printf("Enter 7 integers separated by space: ");
	scanf("%d %d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6, &num7);
	sum = num1 + num2 + num3 + num4 + num5 + num6 + num7;
  avg =  ((float)sum / 7);
	printf("Sum: %d\nAverage: %.2f\n", sum, avg);
	return 0;
}
