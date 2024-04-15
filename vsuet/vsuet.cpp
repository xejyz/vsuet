#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class Book {
private:
    string author;
    string title;
    string publisher;
    int year;
    int numPages;

public:
    Book(string author, string title, string publisher, int year, int numPages)
        : author(author), title(title), publisher(publisher), year(year), numPages(numPages) {}

    string getAuthor() const { return author; }
    string getTitle() const { return title; }
    string getPublisher() const { return publisher; }
    int getYear() const { return year; }
    int getNumPages() const { return numPages; }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "ru");
    const int numBooks = 3; // Размер массива книг

    // Создание массива книг
    Book books[numBooks] = {
        Book("Автор1", "Название1", "Издательство1", 2000, 300),
        Book("Автор2", "Название2", "Издательство2", 2010, 250),
        Book("Автор1", "Название3", "Издательство1", 2015, 400)
    };

    // Поиск книг заданного автора
    string searchAuthor = "Автор1";
    cout << "Список книг автора " << searchAuthor << ":\n";
    for (int i = 0; i < numBooks; ++i) {
        if (books[i].getAuthor() == searchAuthor) {
            cout << books[i].getTitle() << endl;
        }
    }

    // Поиск книг заданного издательства
    string searchPublisher = "Издательство1";
    cout << "\nСписок книг издательства " << searchPublisher << ":\n";
    for (int i = 0; i < numBooks; ++i) {
        if (books[i].getPublisher() == searchPublisher) {
            cout << books[i].getTitle() << endl;
        }
    }

    // Поиск книг, выпущенных после заданного года
    int searchYear = 2010;
    cout << "\nСписок книг, выпущенных после " << searchYear << " года:\n";
    for (int i = 0; i < numBooks; ++i) {
        if (books[i].getYear() > searchYear) {
            cout << books[i].getTitle() << endl;
        }
    }

    return 0;
}






