#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    // Задаем размер массива
    int n;
    std::cout << "Введите размер массива: ";
    std::cin >> n;

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

    return 0;
}
