#include <Windows.h>
#include <iostream>

using namespace std;


int copyArary(int arr[], int arr2[], const int& size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr2[i];
        cout << " " << arr[i];
    }
    return arr[size];
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int size = 5;

    int array[size]{ 1,2,3,4,5 };
    int array2[size]{ 6,7,8,9,10 };
    cout << "Массив до копирования" << endl;
    for (int i = 0; i < size; i++) {
        cout << " " << array[i];
    }
    cout << endl;
    for (int i = 0; i < size; i++) {
        cout << " " << array2[i];
    }
    cout << endl << "Выводим 1 массив" << endl;
    copyArary(array, array2, size);
}
