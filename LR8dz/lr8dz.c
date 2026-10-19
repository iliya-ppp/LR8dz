#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <locale.h>
#include <math.h>

void main() {
    int n;
    double x;
    double sum = 0; 

    setlocale(LC_ALL, "RUS");

    puts("Введите n (натуральное число):");
    scanf("%d", &n);

    puts("Введите x (действительное число):");
    scanf("%lf", &x);

    for (int i = 1; i <= n; i++) 
    {
        sum += cos(pow(x, i));
    }

    printf("\nСумма: %.4lf\n", sum);
}
