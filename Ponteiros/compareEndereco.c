#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%p\n", &a);
    printf("%p\n", &b);

    if (&a > &b) {
        printf("%d", a);
    } else {
        printf("%d", b);
    }
    return 0;
}