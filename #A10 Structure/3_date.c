//3. Define a structure name Date having data members day, month & year. Write a main program to add two given Date.
#include <stdio.h>

struct date {
  int day,month,year;
};

int main() {
  struct date d[2];
  int y=0,m=0,da=0;
  for (int i=0; i<2; i++) {
    printf("\nNumber %c\n", 65+i);
    printf("Enter the day: ");
    scanf("%d", &d[i].day);
    printf("Enter the month: ");
    scanf("%d", &d[i].month);
    printf("Enter the year: ");
    scanf("%d", &d[i].year);
    da=da+d[i].day;
    m=m+d[i].month;
    y=y+d[i].year;
  }
  while (da>31) {
    da=da-31;
    m++;
  }
  while (m>12) {
    m=m-12;
    y++;
  }
  printf("The Sum of Dates is %d/%d/%d (Y/M/D).", y, m, da);
  return 0;
}
