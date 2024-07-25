#include <stdio.h>

int main(void) {
	double cels = 30.0, fahr;
	printf("Celsius\tFahrenheit\n");

	while (cels < (50 + 1)) {
		fahr = 32 + ((9 * cels) / 5);
		printf("%.2f\t%.2f\n", cels, fahr);
		cels += 1;
	}

	return 0;
}
