#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(void) {
	double radius;
	double diameter;
	double circumference;
	double area;
	printf("Enter radius value: ");
	scanf("%lf", &radius);
	diameter = 2 * radius;
	printf("Diameter: %.2f\n", diameter);
	circumference = 2 * PI * radius;
	printf("Circumference: %.2f\n", circumference);
	area = PI * pow(radius, 2);
	printf("Area: %.2f\n", area);
	return 0;
}
