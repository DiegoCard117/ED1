#include <stdio.h>

void calc(double a, double *c, double *k) {
    *c = (a * 1.8) + 32;
    *k = a + 273.15;
}

int main() {
    double a, c, k;
    scanf("%lf", &a);
    calc(a, &c, &k);
    printf("%.2lf %.2lf", c, k);
    return 0;
}
