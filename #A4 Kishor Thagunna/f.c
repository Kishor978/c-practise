// Wap to generate.
// ABCDEFGFEDCBA
// ABCDEF FEDCBA
// ABCDE   EDCBA
// ABCD     DCBA
// ABC       CBA
// AB         BA
// A           A
#include <stdio.h>
int main()
{
  int i, j;
  char x, y;
  for (i = 0; i < 7; i++)
  {
    for (j = 0; j < 7; j++)
    {
      if (j < 7 - i)

        printf("%c ", x = j + 65);
      else
        printf("  ");
    }
    for (j = 0; j < 6; j++)
    {
      if (j > i - 2)
        printf("%c ", y = 70 - j);
      else
        printf("  ");
    }
    printf("\n");
  }
  return 0;
}
