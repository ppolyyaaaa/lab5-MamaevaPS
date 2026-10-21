#include <iostream>
#include <windows.h> // Для корректного отображения русского языка в консоли

int main() {
    // Включаем кодировку UTF-8
    SetConsoleOutputCP(65001);

    int n;
    std::cout << "Введите число: ";
    std::cin >> n;

    int original = n;       // Сохраняем исходное число для сравнения
    int reversedNum = 0;    // Сюда будем собирать перевернутое число
    int temp = n;           // Временная переменная, которую будем изменять в цикле

    // Переворачиваем число
    while (temp > 0) {
        int digit = temp % 10;                  // Получаем последнюю цифру
        reversedNum = reversedNum * 10 + digit; // Добавляем ее к перевернутому числу
        temp /= 10;                             // Отбрасываем последнюю цифру
    }

    // Сравниваем исходное и перевернутое число
    if (original == reversedNum) {
        std::cout << original << " - палиндром\n";
    } else {
        std::cout << original << " - не палиндром\n";
    }

    return 0;
}