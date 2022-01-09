// Define a structure name Distance having data members feet & inch. Write a main program to add two given Distances .

#include <stdio.h>

struct distance {
  int inch,feet;
};

int main() {
  struct distance d[2];
  int f=0,in=0;
  for (int i=0; i<2; i++) {
    printf("\nNumber %c\n", 65+i);
    printf("Enter the inch: ");
    scanf("%d", &d[i].inch);
    printf("Enter the feet: ");
    scanf("%d", &d[i].feet);
    in=in+d[i].inch;
    f=f+d[i].feet;
  }
  while (in>=12) {
    in=in-12;
    f++;
  }
  printf("The Sum of Distance is %d ft %d in.", f, in);
  return 0;
}
