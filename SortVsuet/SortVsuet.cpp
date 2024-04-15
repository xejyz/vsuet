#include <iostream>
#include <Windows.h>

using namespace std;


int MaxToSmall(int list[], int listLength) {
	int temp = 0;
	for (int i = 1; i < listLength; i++) {
		for (int j = 0; j < listLength - i; j++) {
			if (list[j] < list[j + 1]) {
				int temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;	
			}
		}
	}
	return temp;
}
// Сортировка выбором
int smallSort(int list[], int startPosition, int listLeight) {
	int smallestPosition = startPosition;
	for (int i = startPosition; i < listLeight; i++) {
		if (list[i] < list[smallestPosition]) {
			smallestPosition = i;	
		}
	}
	return smallestPosition;
}
void selectionSort(int list[], int listLenght) {
	for (int i = 0; i < listLenght; i++) {
		int smallestPosition = smallSort(list, i, listLenght);
		swap(list[i], list[smallestPosition]);
	}
	return;
}


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int list[5]{10,2,5,200,50};
	cout << "Массив без сортировки";
	for (int i = 0; i < 5; i++) {
		cout << " " << list[i];
	}
	selectionSort(list, 5);
	cout << "\n" << "Сортировка по возрастанию";
	for (int i = 0; i < 5; i++) {
		cout << " " << list[i];
	}
	MaxToSmall(list, 5);
	cout << "\n" << "Сортировка по убыванию";
	for (int i = 0; i < 5; i++) {
		cout << " " << list[i];
	}
}

