#include <stdio.h>

int sum(int);

int main() {
  int n;
  printf("Enter the number to which sum is to be determined:");
  scanf("%d", &n);
  printf("The sum form 1 to %d is %d.",n,sum(n));
  return 0;
}

int sum(int x) {
  if (x==0) return 0;
  else return x+sum(x-1);
}
