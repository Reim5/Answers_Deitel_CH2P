#include <stdio.h>
double calculate_charges(int hours) {
	double cost = 25.;
	double service_fee = 0.5 * (double) hours;

	if (hours >= 24) {
		cost = service_fee + + (50 * (hours / 24)) + (5 * (hours % 24));

	} else {
		cost = 25 + service_fee + (5 * (hours % 7));
	}

	return cost;
}

int main(void) {
	int user_hour[10] = {0};
	int car = 0;
	int total_hours = 0;
	double total_charges = 0.;
	int i = 0;

	do {
		printf("Car %d, enter hours render: ", car + 1);
		car++;
	} while (scanf("%d", &user_hour[car - 1]) != EOF);
  --car;
	puts("");
	printf("Car\tHours\tCharge\n");

	for (i = 0; i < car; i++) {
		total_hours += user_hour[i];
		total_charges += calculate_charges(user_hour[i]);
		printf("%d\t%d\t%.2f\n", i + 1, user_hour[i], calculate_charges(user_hour[i]));
	}

	printf("TOTAL\t%d\t%.2f\n", total_hours, total_charges);
	return 0;
}
