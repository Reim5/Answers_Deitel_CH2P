/*
 *2.20 (Converting from Seconds to Hours, Minutes, and Seconds) Write a program
that asks the user to enter the total time elapsed, in seconds, since an event occurred
and converts the time to hours, minutes, and seconds. The time should be displayed
as hours:minutes:seconds. [Hint: Use the modulus operator].
 *
 * 60s = 1m
 * 60m = 1h
 * 180s = 3m
 *
 */

#include <stdio.h>

int main(void) {
  int time_in_seconds = 0;
  int minutes;
  int hours;
  int seconds;
  printf("%s", "Enter the time in seconds: ");
  scanf("%d", &time_in_seconds);
  minutes = time_in_seconds / 60;
  hours = minutes / 60;
  seconds = time_in_seconds % 60;

  printf("converted output = %d:%d:%d\n", hours, minutes, seconds);
  return 0;
}
