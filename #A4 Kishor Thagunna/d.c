// Wap to generate.
// *****
//  ****
//   ***
//    **
//     *
#include <stdio.h>

int main()
{
  int i, j, k;
  for (i = 1; i <= 5; i++)
  {
    for (j = 0; j < i; j++)
      printf(" ");
    for (j = 6; j > i; j--)
      printf("*");
    printf("\n");
  }
  return 0;
}
