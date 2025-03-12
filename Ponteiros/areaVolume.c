#include <stdio.h>
#include <math.h>

void areaVolume(double raio, double *volume, double *area) {
  double pi = 3.14159;
  *area = 4 * pi * pow(raio, 2);
  *volume = (4.0/3.0) * pi * pow(raio, 3);
}

int main(){
  double raio, volume, area;
  printf("Digite o raio da esfera: ");
  scanf("%lf", &raio);
  areaVolume(raio, &volume, &area);
  printf("Area = %.2lf\n", area);
  printf("Volume = %.2lf", volume);
  return 0;
}