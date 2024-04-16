#include <Windows.h>
#include <iostream>

using namespace std;

class RectangleSimple {
public:

    RectangleSimple(int width, int height) {
        
    }
    int Perimetr(int width, int height) {
        int P = (width + height) + (width + height);
        cout << "Периметр прямоугольника " << P;
        return P;
    }
    int Square(int width, int height) {
        int S = width * height;
        cout << "Площадь прямоугольника " << S;
        return S;
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int width, height;

    cout << "Введите высоту прямоугольника "; 
    cin >> height;
    cout << "Введите ширину прямоугольника "; 
    cin >> width;

    RectangleSimple rectangle(width, height);
    rectangle.Perimetr(width,height);
    cout << "\n";
    rectangle.Square(width, height);
    
    
}

