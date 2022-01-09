#include <stdio.h>

int reverse(int);

int main() {
  int n ,rev;
  printf("Enter a number:");
  scanf("%d", &n);
  rev=reverse(n);
  printf("The reverse of %d is %d.",n ,rev);
  return 0;
}

int reverse(int a) {
  int rem;
  static int s=0;
  if(a!=0) 
  {
    rem=a%10;
    s=s*10+rem;
    reverse(a/10);
  }
  return s;

}