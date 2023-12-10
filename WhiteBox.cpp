#include <iostream>
#include <stdexcept>

// Функция для проверки размера массива
int getArraySize() {
    int n;
    std::cout << "Введите размер массива: ";
    std::cin >> n;

    // Проверка, что n больше нуля
    if (n <= 0 || n > 15) {
        throw std::invalid_argument("Размер массива находится вне допустимого диапазона");
    }

    return n;
}

int main() {
    setlocale(LC_ALL, "RU");
    try {
        // Задаем размер массива
        int n = getArraySize();

        // Выделяем динамический массив
        int* arr = new int[n];

        // Заполняем массив
        std::cout << "Введите элементы массива:\n";
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }

        // Вычисляем сумму положительных элементов
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            if (arr[i] > 0) {
                sum += arr[i];
            }
        }

        // Выводим результат
        std::cout << "Сумма положительных элементов массива: " << sum << std::endl;

        // Освобождаем выделенную память
        delete[] arr;
    }
    catch (const std::exception& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
    }

    return 0;
}
