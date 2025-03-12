#include <stdio.h>

void intFrac(double number, int *inteiro, double *fracionario) {
  *inteiro = number / 1;
  *fracionario = number - *inteiro;
}

int main() {
  double number, fracionario;
  int inteiro;
  printf("Digite um numero: ");
  scanf("%lf", &number);
  intFrac(number, &inteiro, &fracionario);
  printf("%d %lf", inteiro, fracionario);
  return 0;
}