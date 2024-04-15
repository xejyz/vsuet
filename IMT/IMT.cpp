#include <iostream>
#include <Windows.h>

using namespace std;

int IMT(int height, double weight) {
    double result = height / pow(weight, 2);
    if (result < 18.5) {
        cout << "Дефицит масса тела";
    }
    else if (result > 25) {
        cout << "Избыточная масса тела";
    }
    else {
        cout << "Ваш вес в норме";
    }
    return result;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int height; cout << "Введите свой вес в кг "; cin >> height;
    double weight; cout << "Введите свой рост в метрах "; cin >> weight;
    IMT(height, weight);
}

