#include <stdio.h>
#include <stdlib.h>

int num1, num2;
char operator;
char answer;

void input();
void listen();
void question();

int main() {
  do {
    input();
    listen();
    question();
  } while(answer == 'N' || answer == 'n');
}

void input() {
  printf("Operation: ");
  scanf( "%i %c %i", &num1, &operator, &num2);
}

void listen() {
  if (operator == '+') {
    printf("Result: %i\n", num1 + num2);
  } else if (operator == '-') {
    printf("Result: %i\n", num1 - num2);
  } else if (operator == '/') {
    printf("Result: %i\n", num1 / num2);
  } else if (operator == '*') {
    printf("Result: %i\n", num1 * num2);
  } else {
    printf("Operator not supported\n");
  }
}

void question() {
  printf("Exit: ");
  scanf(" %c", &answer);
}
