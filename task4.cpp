#include <iostream>
#include <windows.h> // Для корректного отображения русского языка в консоли

int main() {
    // Включаем кодировку UTF-8 для вывода текста
    SetConsoleOutputCP(65001);

    int n;
    std::cout << "Введите N: ";
    std::cin >> n;

    // Используем long long, так как факториал быстро растет
    long long sumNumbers = 0;
    long long product = 1;
    long long sumSquares = 0;

    for (int i = 1; i <= n; ++i) {
        sumNumbers += i;       // Сумма чисел
        product *= i;          // Произведение (факториал)
        sumSquares += i * i;   // Сумма квадратов
    }

    std::cout << "Сумма: " << sumNumbers << "\n";
    std::cout << "Произведение (N!): " << product << "\n";
    std::cout << "Сумма квадратов: " << sumSquares << "\n";

    return 0;
}
