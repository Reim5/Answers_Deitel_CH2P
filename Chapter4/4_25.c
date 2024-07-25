#include <stdio.h>
int dec2bin(int N) {
  int bin = 0, place = 1;
  while (N) {
    bin += (N % 2) * place;
    N /= 2;
    place*=10;
  }
  return bin;
}

int main(void) {
  int i = 0;
  printf("Decimal\tBinary\tOctal\tHexadecimal\n");
  for (i = 0; i < 256;i++) {
    printf("%d\t%d\t%o\t%x\n", i,dec2bin(i),i,i);
  }
	return 0;
}
