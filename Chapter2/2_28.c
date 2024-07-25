/*
 * 2.28 (Target Heart-Rate Calculator) While exercising, you can use a heart-rate
monitor to see that your heart rate stays within a safe range suggested by your doctors
and trainers. According to the American Heart Association (AHA) (http://bit.ly/
AHATargetHeartRates), the formula for calculating your maximum heart rate in beats per
minute is 220 minus your age in years. Your target heart rate is 50–85% of your maximum
heart rate. Write a program that prompts for and inputs the user’s age and calculates and
displays the user’s maximum heart rate and the range of the user’s target heart rate.
 */

#include <stdio.h>

int main(void) {
  unsigned int uage;
  int ltarget;
  int utarget;
  printf("Enter your age in years: ");
  scanf("%u", &uage);
  ltarget = 0.5 * (220 - uage);
  utarget = 0.85 * (220 - uage);
  printf("You target heart rate is: %d - %d\n", ltarget, utarget);
  return 0;
}
