#include <stdio.h>

int main() {
    int a, b, sum;
    printf("¬ведите два целых числа: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("—умма чисел %d и %d равна %dn", a, b, sum);
    return 0;
}