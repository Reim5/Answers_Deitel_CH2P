#include <stdio.h>

int main(void) {
  int hours_worked;
  double rate;
  double salary;
  while (hours_worked != -1) {
    printf("Enter # of hours worked (-1 to end): ");
    scanf("%d", &hours_worked);
    if (hours_worked == -1) {
      break;
    }
    printf("Enter hourly rate of the worker ($0.00): ");
    scanf("%lf", &rate);
    salary = hours_worked * rate;
    printf("Salary is $%.2f\n", salary);
  }
	return 0;
}

