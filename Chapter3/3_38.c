#include <stdio.h>

int get_place(int N, int place) {
  return (N / place) % 10;
}

int main(void) {
  int user_input;
  int cnt = 0;
  printf("Enter a nonnegative integer: ");
  scanf("%d", &user_input);
  cnt += (get_place(user_input, 1) == 9);
  cnt += (get_place(user_input, 10) == 9);
  cnt += (get_place(user_input, 100) == 9);
  cnt += (get_place(user_input, 1000) == 9);
  cnt += (get_place(user_input, 10000) == 9);
  printf("There are %d nines in the input number.\n", cnt);
	return 0;
}
