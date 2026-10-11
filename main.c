#include <stdio.h>

int main() {
    double x, y;

    printf("Введите координаты точки (x y): ");
    scanf("%lf %lf", &x, &y);

    if ((y >= 0) && (x * x + y * y <= 36.0) && (x <= 0 || x * x + y * y >= 9.0)) {
        printf("Точка принадлежит области\n");
    } else {
        printf("Точка не принадлежит области\n");
    }

    return 0;
}