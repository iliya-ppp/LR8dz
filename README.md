## LR8

## Задание
 Вычислите для заданного натурального n и действительного x с использованием цикла for значение:


 cos x + cos x^2 + cos x^3 + ... + cos x^n 


## 1. Алгоритм
1. Начало.
2. Ввод данных: `n` — натуральное число (количество членов ряда).
3. Ввод данных: `x` — действительное число (аргумент функции).
4. Инициализация переменной для накопления суммы: `sum = 0`.
5. Запуск цикла `for` от `i = 1` до `n` (включительно):
   * Вычисление степени \(x^i\) с помощью функции `pow(x, i)`.
   * Вычисление косинуса от полученного значения: `cos(pow(x, i))`.
   * Прибавление результата к общей сумме: `sum += cos(pow(x, i))`.
6. Вывод результата `sum` с точностью до четырех знаков после запятой.
7. Конец.

## 2. Блок-схема
<img width="399" height="614" alt="image" src="https://github.com/user-attachments/assets/48b0f9a7-0679-425e-a137-660739467867" />

https://app.diagrams.net/#Llr8.drawio#%7B%22pageId%22%3A%22dN-ULCq-FuuFo31CVBfL%22%7D

## 3. Реализация программы
```c
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

    // Вычисление суммы: cos(x) + cos(x^2) + ... + cos(x^n)
    for (int i = 1; i <= n; i++)
    {
        sum += cos(pow(x, i));
    }

    printf("\nСумма: %.4lf\n", sum);
}
```
##4. Результаты работы программы
<img width="423" height="158" alt="image" src="https://github.com/user-attachments/assets/321b9e6e-5d37-49ef-911a-2cc0b303a3cd" />
##5. Выполнил
Мамонов Илья бИЦТ-261





