#include <stdio.h>

int factorial(int);

int main() {
  int fact,n;
  printf("Enter a number:");
  scanf("%d", &n);
  fact=factorial(n);
  printf("The factorial of %d is %d.", n, fact);
  return 0;
}

int factorial(int x) {
  if (x==0) return 1;
  return x*factorial(x-1);
}
