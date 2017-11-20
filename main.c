#include <stdio.h>
#include <stdlib.h>

int main() {
  int num1, num2;
  char operator;
  char quit;

  do {
    printf("Operation: ");
    scanf( "%i %c %i", &num1, &operator, &num2);

    if (operator == '+') {
      printf("Result: %i\n", num1 + num2);
    } else if (operator == '-') {
      printf("Result: %i\n", num1 - num2);
    } else if (operator == '/') {
      printf("Result: %i\n", num1 / num2);
    } else if (operator == '*') {
      printf("Result: %i\n", num1 * num2);
    } else {
      printf("operator not supported\n");
    }

    printf("Exit: ");
    scanf(" %c", &quit);
  } while(quit == 'N' || quit == 'n');
}
