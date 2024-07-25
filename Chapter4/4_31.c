#include <stdio.h>

void char_print(char c,int len) {
	while (len) {
		putchar(c);
		len--;
	}
}

void row_print(char a, char b, int lena, int lenb) {
  char_print(a, lena);
  char_print(b, lenb);
  char_print(a, lena);
  puts("");
}

int main(void) {
	char st = '*';
	char sp = ' ';
  int i = 0;
  int c_st = 1;
  int c_sp = 4;
  for (i = 0; i < 9;i++) {
    row_print(sp, st, c_sp, c_st);
    if (i < 4) {
      c_sp -= 1;
      c_st += 2;
    } else {
      c_sp += 1;
      c_st -= 2;
    }
  }
  return 0;
}
