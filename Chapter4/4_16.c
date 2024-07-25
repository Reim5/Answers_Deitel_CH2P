#include <stdio.h>
void char_print(char c, size_t length) {
  while (length) {
    putchar(c);
    length--;
  }
}

int main(void) {
  size_t i = 0;
  size_t N = 10;
  char st = '*';
  char sp = ' ';
  printf("%s", "(A)");
  char_print(sp, N);
  putchar('\t');
  printf("%s", "(B)");
  char_print(sp, N);
  putchar('\t');
  printf("%s", "(C)");
  char_print(sp, N);
  putchar('\t');
  printf("%s", "(D)");
  puts("");
  while (i < N) {
    char_print(st, i+1);
    char_print(sp, (N-1)-i);
    putchar('\t');
    char_print(st, N-i);
    char_print(sp, i);
    putchar('\t');
    char_print(sp, i);
    char_print(st, N-i);
    putchar('\t');
    char_print(sp, (N-1)-i);
    char_print(st, i+1);
    puts("");
    i++;
  }
	return 0;
}
