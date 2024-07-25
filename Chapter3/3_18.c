#include <stdio.h>

int main(void) {
  double sales_in_USD;
  double salary;
  while (sales_in_USD != -1) {
    printf("Enter sales in dollars (-1 to end): ");
    scanf("%lf", &sales_in_USD);
    if (sales_in_USD == -1) {
      break;
    }
    salary = 200 + (sales_in_USD * 0.09);
    printf("Salary is: %.2f\n", salary);
  }
	return 0;
}
