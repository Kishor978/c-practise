// Define a structure name Time having data members second, minute & second. Write a main program to add two given Time.

#include <stdio.h>

struct time {
  int second,minute,hour;
};

int main() {
  struct time d[2];
  int h=0,m=0,s=0;
  for (int i=0; i<2; i++) {
    printf("\nNumber %c\n", 65+i);
    printf("Enter the second: ");
    scanf("%d", &d[i].second);
    printf("Enter the minute: ");
    scanf("%d", &d[i].minute);
    printf("Enter the hour: ");
    scanf("%d", &d[i].hour);
    s=s+d[i].second;
    m=m+d[i].minute;
    h=h+d[i].hour;
  }
  while (s>=60) {
    s=s-60;
    m++;
  }
  while (m>=60) {
    m=m-60;
    h++;
  }
  printf("The Sum of Time is %d:%d:%d.", h, m, s);
  return 0;
}
