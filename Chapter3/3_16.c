/*
 *3.16 (Sales Tax) Sales tax is collected from buyers and remitted to the government.
A retailer must file a monthly sales tax report that lists the sales for the month and the
amount of sales tax collected, at both the county and state levels. Develop a program
that will input the total collections for a month, calculate the sales tax on the collec-
tions, and display the county and state taxes. Assume that states have a 4% sales tax,
and counties have a 5% sales tax. 
Here is a sample input/output dialog:
Enter total amount collected (-1 to quit): 45678
Enter name of month: January
Total Collections: $45678.00
Sales: $41906.42
County Sales Tax: $2095.32
State Sales Tax: $1676.26
Total Sales Tax Collected: $3771.58
Enter total amount collected (-1 to quit): 98000
Enter name of month: February
Total Collection: $98000
Sales: $89908.26
County Sales Tax: $4495.41
State Sales Tax: $3596.33
Total Sales Tax Collected: $8091.74
 */
#include <stdio.h>
#include <string.h>


int main(void) {
  double uamount;
  double state_tax;
  double county_tax;
  double sales;
  while (uamount != -1) {
    /* Setting the subscript of month[10] to nine(9) is paramount to have space for the
     * terminating character, '\0'. The longest string of month is september with nine chars.
     * Setting it to nine(9) yields 9 + 1
     * */
    char month[10];
    memset(month, 0, sizeof(month));
    printf("Enter the amount collected (-1 to quit): ");
    scanf("%lf", &uamount);
    if (uamount < 0) {
      break;
    }
    printf("Enter name of month: ");
    scanf("%s", month);
    sales = uamount / 1.09;
    state_tax = sales * 0.04;
    county_tax = sales * 0.05;
    printf("Total Collections: $%.2f\n", uamount);
    printf("Sales: $%.2f\n", sales);
    printf("Count Sales Tax: $%.2f\n", county_tax);
    printf("State Sales Tax: $%.2f\n", state_tax);
    printf("Total Sales Tax Collected: $%.2f\n", county_tax + state_tax);
  }
  return 0;
}
