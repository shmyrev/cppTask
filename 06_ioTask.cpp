/*
Задача №2941. Последняя цифра

Дано натуральное число. Выведите его последнюю цифру.
Входные данные

Вводится натуральное число.
Выходные данные

Выведите ответ на задачу.
Примеры
Входные данные
179

Выходные данные
9
*/

#include <iostream>

int main(){
    int a = 0;
    
    std::cout << "Enter number: \n";
    std::cin >> a;
    
    a = a < 0 ? - a : a; // invert negative in pasitive
    
    a %= 10;
    std::cout << "Last number: " << a << "\n";
    
    return 0;
}
