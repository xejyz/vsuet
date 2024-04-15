#include <iostream>
#include <Windows.h>

using namespace std;

int GeometrProgress(int a,int r, int n) {
	int s = a * (pow(r, n)) / (r - 1);
	cout << "Сумма геометрической прогрессии" << s;
	return s;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, r, n, s;
	cout << "Введите первый член: ";
	cin >> a;
	cout << "Введите знаменатель прогрессии: ";
	cin >> r;
	cout << "Введите кол-во членов прогрессии: ";
	cin >> n;
	GeometrProgress(a, r, n);
}


