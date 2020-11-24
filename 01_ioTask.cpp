/*
 * Задача №2936. Гипотенуза

Дано два числа a и b. Найдите гипотенузу треугольника с заданными катетами.
Входные данные

В двух строках вводятся два числа (числа целые,положительные, не превышают 1000).
Выходные данные

Выведите ответ на задачу.
*/

#include <iostream>

int main(){
    int a, b, c = 0;
    std::cout << "Enter katet A: ";
    std::cin >> a;
    std::cout << "Enter katet B: ";
    std::cin >> b;
    c = (a * a) + (b * b);
    std::cout << "Summa kvadratov katetov C = " << c << "\n";
    return 0;
}
