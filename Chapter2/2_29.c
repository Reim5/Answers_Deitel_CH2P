/*
 *2.29 (Sort in Ascending Order) Write a program that inputs three different numbers
from the user. Display the numbers in increasing order. Recall that an if statement’s
body can contain more than one statement. Prove that your script works by running
it on all six possible orderings of the numbers. Does your script work with duplicate
numbers? [This is challenging. In later chapters you’ll do this more conveniently and
with many more numbers.]
 * head, mid, tail
 * head <- min value
 * mid - mid value
 * tail <- mav value
 *
 * solving with 6 inputs is difficult due to the number of iterations needed to be done.
 */
#include <stdio.h>

int main(void) {
	int inp1, inp2, inp3;
	int head, mid, tail;
	int tmp;
	printf("Enter three integers: ");
	scanf("%d %d %d", &inp1, &inp2, &inp3);
	head = inp1;
	mid = inp2;
	tail = inp3;

  if (head > mid) {
    tmp = head;
    head = mid;
    mid = tmp;
  }

  if (mid > tail) {
    tmp = mid;
    mid = tail;
    tail = tmp;
    if (head > mid) {
      tmp = head;
      head = mid;
      mid = tmp;
    }
  }

	printf("Ascending Order: %d %d %d\n", head, mid, tail);
	return 0;
}
