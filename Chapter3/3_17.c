/*
 */
#include <stdio.h>

int main(void) {
	double mortgage_amount;
	unsigned int mortgage_term;
	double interest_rate;
	double monthly_payable;
	printf("Enter mortgage amount in dollars: ");
	scanf("%lf", &mortgage_amount);
	printf("Enter Mortgage term (in years): ");
	scanf("%u", &mortgage_term);
	printf("Enter interest rate: ");
	scanf("%lf", &interest_rate);
  monthly_payable = mortgage_amount * ((interest_rate/100) / 12);
  printf("Mortage Payable Interest is: %.2f\n", monthly_payable * mortgage_term);
	return 0;
}
