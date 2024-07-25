#include <stdio.h>

void print_square_row(char c, size_t len) {
  size_t i = 0;
  for (i = 0; i < len; i++) {
    putchar(c);
  }
}

int main(void) {
  int side_length = 0;
  int i = 0;
  char st='*';
  printf("Enter side length: ");
  scanf("%d", &side_length);
  for (i = 0; i < side_length;i++) {
    print_square_row(st, side_length);
    puts("");
  }
	return 0;
}
