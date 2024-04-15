#include <iostream>

const int MAX_SIZE = 100; // Максимальный размер массива

// Функция для удаления повторяющихся элементов из массива
int removeDuplicates(int arr[], int size) {
    int newSize = 0;

    for (int i = 0; i < size; ++i) {
        bool isDuplicate = false;

        // Проверяем, есть ли элемент arr[i] среди первых newSize элементов
        for (int j = 0; j < newSize; ++j) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }

        // Если элемент не является дубликатом, добавляем его в новый массив
        if (!isDuplicate) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    return newSize;
}

int main() {
    int originalArray[MAX_SIZE] = { 2, 5, 2, 8, 7, 5, 3, 8, 2, 9 };
    int size = 10; // Размер исходного массива

    // Выводим исходный массив
    std::cout << "Исходный массив: ";
    for (int i = 0; i < size; ++i) {
        std::cout << originalArray[i] << " ";
    }
    std::cout << std::endl;

    // Удаляем повторяющиеся элементы
    size = removeDuplicates(originalArray, size);

    // Выводим массив без повторяющихся элементов
    std::cout << "Массив без повторений: ";
    for (int i = 0; i < size; ++i) {
        std::cout << originalArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
