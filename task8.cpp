#include <iostream>
#include <string> // Необходимо для использования std::string

int main() {
    int x, y;

    // выводим заголовок таблицы
    std::cout << "x\ty" << std::endl;

    // выводим разделительную линию
    std::cout << std::string(12, '-') << "\n";

    // цикл перебирает значения x от -5 до 5
    for (x = -5; x <= 5; x++) {
        y = x * x - 2 * x + 1; // вычисляем значение функции
        std::cout << x << "\t" << y << std::endl; // выводим x и y
    }

    return 0;
}