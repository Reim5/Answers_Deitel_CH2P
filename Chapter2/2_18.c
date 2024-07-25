/*
 *2.18 (Comparing Values) Write a program that asks the user to enter the highest
rainfall ever recorded in one season for a country, and the rainfall in the current year
for that country, obtains the values from the user, checks if the current rainfall
exceeds the highest rainfall, and prints an appropriate message on the screen. If the
current rainfall is higher, it assigns that value as the highest rainfall ever. Use only the
single-selection form of the if statement you learned in this chapter
 */
#include <stdio.h>

int main(void) {
  double highest_rainfall = 0.0;
  double current_highest_rainfall = 0.0;

  while (1) {
    printf("Enter the highest rainfall record in one season for a country: ");
    scanf("%lf", &highest_rainfall);
    printf("Enter the current rainfall record in that country: ");
    scanf("%lf", &current_highest_rainfall);

    if (current_highest_rainfall > highest_rainfall) {
      highest_rainfall = current_highest_rainfall;
      printf("Current rainfall is higher prepare umbrellas!\n");
    }
  }

  return 0;
}
