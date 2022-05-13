#include <stdio.h>
int main() {
   int i, space, rows, n = 0;
   printf("Enter integer: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i, n = 0) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
      }
      while (n != 2 * i - 1) {
         printf("* ");
         ++n;
      }
      printf("\n");
   }
   return 0;
}
