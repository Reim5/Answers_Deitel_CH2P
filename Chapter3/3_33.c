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
  char sp=' ';
  printf("Enter side length: ");
  scanf("%d", &side_length);
  for (i = 0; i < side_length;i++) {
    if (i == 0 || i == (side_length-1)) {
      print_square_row(st, side_length);
    } else {
      print_square_row(st,1);
      print_square_row(sp,side_length-2);
      print_square_row(st,1);
    }
    puts("");
  }
	return 0;
}
