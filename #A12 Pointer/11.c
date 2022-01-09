// 11.WAP to read 10 elements in an array and sort them in descending order.

#include <stdio.h>

int main() {
  int a[10],descend;
  for (int i=0; i<10; i++) {
    printf("Enter a number: ");
    scanf("%d", (a+i));
  }
  descend=*(a+0);
  for (int i=0; i<10; i++) {
    for (int j=i; j<10; j++) {
      if (*(a+i)<*(a+j)) {
        descend=*(a+j);
        *(a+j)=*(a+i);
        *(a+i)=descend;
      }
    }
    printf("%d, ", *(a+i));
  }
  return 0;
}
