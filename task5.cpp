#include <iostream>
#include <windows.h> // Для корректного отображения русского языка в консоли

int main() {
    // Включаем кодировку UTF-8
    SetConsoleOutputCP(65001);

    int n;
    std::cout << "Введите число: ";
    std::cin >> n;

    int original = n;
    int count = 0;          // Количество цифр
    int total = 0;          // Сумма цифр
    int product = 1;        // Произведение цифр
    int reversedNum = 0;    // Перевернутое число

    // Пока число больше нуля
    while (n > 0) {
        int digit = n % 10;               // Получаем последнюю цифру
        ++count;                          // Увеличиваем счетчик цифр
        total += digit;                   // Добавляем к сумме
        product *= digit;                 // Умножаем для произведения
        reversedNum = reversedNum * 10 + digit; // Формируем перевернутое число
        n /= 10;                          // Убираем последнюю цифру из исходного числа
    }

    // Выводим результаты
    std::cout << "Количество цифр: " << count << "\n";
    std::cout << "Сумма цифр: " << total << "\n";
    std::cout << "Произведение цифр: " << product << "\n";
    std::cout << "Перевернутое число: " << reversedNum << "\n";

    return 0;
}