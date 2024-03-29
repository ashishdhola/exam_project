/*
reverse a 3 digit number 

*/
#include <stdio.h>

int main() {

  int n, reverse = 0, rem;

  printf("Enter an integer: ");
  scanf("%d", &n);

  while (n != 0) {
    rem = n % 10;
    reverse = reverse * 10 + rem;
    n /= 10;
  }

  printf("Reversed number = %d", reverse);

  return 0;
}