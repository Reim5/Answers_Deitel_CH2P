/* 2.17 (Final Velocity) Write a program that asks the user to enter the initial velocity 
 * and acceleration of an object, and the time that has elapsed, places them in the 
 * variables u, a, and t, and prints the final velocity, v, and distance traversed, s, using the
 * following equations.
 * */
#include <stdio.h>
double pow2(double N);


int main(void) {
  double u_initV;
  double a_accel;
  double t_time;
  double final_velocity;
  double displacement;

  printf("Enter the initial velocity: ");
  scanf("%lf", &u_initV);
  printf("Enter the acceleration: ");
  scanf("%lf", &a_accel);
  printf("Enter the time elapsed: ");
  scanf("%lf", &t_time);
  puts("");

  final_velocity = u_initV + (a_accel * t_time);
  displacement  = (u_initV*t_time) + 0.5 * (a_accel * pow2(t_time));

  printf("Final Velocity: %f\n", final_velocity);
  printf("displacement: %f\n", displacement);
  return 0;
}

double pow2(double N) {
  return N * N;
}
