#include <Windows.h>
#include <iostream>

using namespace std;

class Matrix {
public: 
    Matrix(int array[2][2], int array2[2][2]) {

    }
    void additionMatrix(int arrayMatrix[2][2], int arrayMatrix2[2][2]) {
        int result[2][2];
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                result[i][j] = arrayMatrix[i][j] + arrayMatrix2[i][j];
            }
        }
        showMatrix(result);
    }
    void subtractionMatrix(int arrayMatrix[2][2], int arrayMatrix2[2][2]) {
        int result[2][2];
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                result[i][j] = arrayMatrix[i][j] - arrayMatrix2[i][j];
            }
        }
        showMatrix(result);
    }
    void transportMatrix(int arrayMatrix[2][2]) {
        int result[2][2];
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                result[j][i] = arrayMatrix[i][j];
            }
        }
        showMatrix(result);
    }
    void showMatrix(int result[2][2]) {
        for (int i = 0; i < 2; i++) {
            cout << "\n";
            for (int j = 0; j < 2; j++) {
                cout << " " << result[i][j];
            }
        }
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int array[2][2] = { {10,44} ,{69,77} };
    int array2[2][2] = { {14,99}, {9,7} };
    Matrix matrix(array, array2);
    cout << "Первая матрица";
    matrix.showMatrix(array);
    cout << "\n" << "Вторая матрица";
    matrix.showMatrix(array2);
    cout << "\n" << "Сложение матриц";
    matrix.additionMatrix(array, array2);
    cout << "\n" << "Вычитание матриц";
    matrix.subtractionMatrix(array, array2);
    cout << "\n" << "Транспонирование матрицы";
    matrix.transportMatrix(array);
}

