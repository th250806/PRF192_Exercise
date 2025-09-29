#include <stdio.h>
void swap(double *a, double *b) {
    double n = *a;
    *a = *b;
    *b = n;
}
int main() {
    double x, y;
    scanf("%lf %lf", &x, &y);
    swap(&x, &y);
    printf("%.2lf %.2lf\n", x, y);
    return 0;
}