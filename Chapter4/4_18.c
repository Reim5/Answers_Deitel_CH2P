#include <stdio.h>
void char_print(char c, size_t length) {
  while (length) {
    putchar(c);
    length--;
  }
  puts("");
}

int main(void) {
  int user_input[5] = {0};
  int i = 0;
  printf("Enter number of bars: ");
  scanf("%d %d %d %d %d", user_input, user_input[1], user_input[2], user_input[3], user_input[4]);
  while (i < 5) {
    char_print('*', user_input[i]);
    i++;
  }
	return 0;
}
