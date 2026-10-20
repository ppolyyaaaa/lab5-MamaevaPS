#include <iostream>
#include <windows.h> // Для корректного отображения русского языка в консоли

int main() {
    // Включаем кодировку UTF-8
    SetConsoleOutputCP(65001);

    int n;
    std::cout << "Введите N: ";
    std::cin >> n;

    // Начальные значения последовательности (0 и 1)
    long long a = 0, b = 1;

    std::cout << "Первые " << n << " чисел Фибоначчи:\n";

    // Итеративный способ вычисления
    for (int i = 0; i < n; ++i) {
        std::cout << a << " ";
        
        // Сдвигаем значения вперед
        long long temp = a + b;
        a = b;
        b = temp;
    }
    
    std::cout << "\n";

    return 0;
}
