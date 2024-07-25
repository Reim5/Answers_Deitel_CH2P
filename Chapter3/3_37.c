#include <stdio.h>

int main(void) {
  int i = 0;
  while (i < 500) {
    if (i == !(i % 50)) {
      puts("");
    }
    printf("%c ", '$');
    i++;
  }
  puts("");
	return 0;
}
