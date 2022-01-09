#include <stdio.h>

int main() {
  int n,s;
  printf("Enter a Natural Number:\n");
  scanf("%d", &n);
  for (int i=1; i<n/2; i++) {
    s=n%(i+1);
    if (n==0) break;
  }
  if (n==1) printf("1 is neither composite nor prime\n");
  else if (n<1) printf("The number is not natural number.\n");
  else if (s==0) printf("The number %d is not a prime number.\n", n);
  else printf("The number %d is a prime number.\n", n);
  return 0;
}
