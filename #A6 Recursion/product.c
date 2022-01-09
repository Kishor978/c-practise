#include <stdio.h>

int product(int, int);

int main() {
  int a,b;
  printf("Enter a first number:");
  scanf("%d", &a);
  printf("Enter second number:");
  scanf("%d", &b);
  printf("The product  %d and %d is %d.",a,b,product(a,b));
  return 0;
}

int product(int i, int j) {
  if (j==1) return i;
  else return i+product(i,j-1);
}
