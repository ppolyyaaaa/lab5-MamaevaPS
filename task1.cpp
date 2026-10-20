#include <iostream>
#include <cmath>
#include <iomanip> // Для форматированного вывода (setw, setprecision)

int main() {
    // Вывод заголовка таблицы
    std::cout << std::setw(8) << "x" << std::setw(10) << "sin(x)" << "\n";
    std::cout << std::string(20, '-') << "\n";

    // Настройка точности для чисел с плавающей точкой
    std::cout << std::fixed << std::setprecision(4);

    // Цикл от 0 до 10 включительно (это даст 11 итераций для шага pi/10)
    for (int i = 0; i <= 10; ++i) {
        double x = i * M_PI / 10.0;
        double y = std::sin(x);
        
        // Вывод значений с выравниванием
        std::cout << std::setw(8) << x << std::setw(10) << y << "\n";
    }

    return 0;
}