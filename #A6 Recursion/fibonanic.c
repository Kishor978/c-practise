#include <stdio.h>

int fibonacci(int);

int main()
{
  int n;
  printf("Enter a require term :");
  scanf("%d", &n);
  printf("The %dth term fibonacci series is %d.", n, fibonacci(n));
  return 0;
}

int fibonacci(int x)
{
  if (x == 0)
    return 0;
  else if (x == 1)
    return 1;
  else
    return fibonacci(x - 1) + fibonacci(x - 2);
}
