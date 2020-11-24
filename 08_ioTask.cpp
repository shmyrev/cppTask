/*
Задача №2943. Число десятков

Дано неотрицательное целое число. Найдите число десятков в его десятичной записи (то есть вторую справа цифру его десятичной записи).
Входные данные

Вводится неотрицательное целое число.
Выходные данные

Выведите ответ на задачу.
Примеры
Входные данные
179

Выходные данные
7
*/

#include <iostream>

int main(){
    int a = 0;
    
    std::cout << "Enter number: \n";
    std::cin >> a;
    
    a = a < 0 ? - a : a; // invert negative in pasitive
    
    a /= 10;
    a %= 10;
    
    std::cout << "Second number: " << a << "\n";
    
    return 0;
}