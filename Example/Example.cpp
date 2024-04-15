#include <string.h>
#include <iostream>

using namespace std;

struct date {
    char daymon[6];
    int year;
};
class Student {
    char name[30];
    date t;
    char adr[30], fac[20];
    int kurs;
public:
    Student();
    char* getfac();
    int getkurs();
    void show();
};

Student::Student() {
    cout << "Input name "; cin >> name;
    cout << "Input date "; cin >> t.daymon;
    cout << "Year "; cin >> t.year;
    cout << "Input adr "; cin >> adr;
    cout << "Input fac "; cin >> fac;
    cout << "Input kurs "; cin >> kurs;
}
void Student::show() {
    cout << "Name " << name << endl;
    cout << "Was born " << t.daymon << endl;
    cout << "Address " << adr << endl;
    cout << "Fac " << fac << endl;
    cout << "Kurs " << kurs << endl;
}
char* Student::getfac() { return fac; }
int Student::getkurs() { return kurs; }

void spisfac(Student spis[], int n) {
    char fac[20];
    cout << "Input faculty "; cin >> fac;
    for (int i = 0; i < n; i++) 
        if (strcmp(spis[i].getfac(), fac) == 0)spis[i].show();
}
void spisfackurs(Student spis[], int n) {
    int i, k;
    char fac[20];
    cout << "Input faculty "; cin >> fac;
    cout << "Input the course "; cin >> k;
    for (int i = 0; i < n; i++)
        if ((strcmp(spis[i].getfac(), fac) == 0) && (spis[i].getkurs() == k))
            spis[i].show();
}
int main()
{
    Student* spis;
    int n;
    bool kbhit = false;
    cout << "Input a number of student "; cin >> n;
    spis = new Student[n];
    for (int i = 0; i < n; i++) {
        cout << "=====================" << endl;
        spis[i].show();
    }
    spisfac(spis, n);
    spisfackurs(spis,n);
    delete[] spis;
    cout << "press any key! ";
    while (!kbhit);
}

