 #include <cmath>
#include <random>
#include <iostream>
#include <cstdlib> 
#include <stdlib.h>
using namespace std;

class Polynom {
    int n;
    double* koef;
public:
    Polynom();
    Polynom(int k);
    Polynom(int k, double* mas);
    Polynom(const Polynom& ob);
    ~Polynom() { delete[]koef; }
    void GiveMemory(int k);
    void SetPolynom(int n, double* mas);
    void SetDegree(int k) { n = k; }
    void CalculateValue(double x);
    int GetDegree() { return n; }
    double GetOneCoefficent(int i) { return(koef[i]); }
    Polynom operator+(Polynom ob);
    Polynom operator*(Polynom ob);
    double& operator[](int i) { return(koef[i]); }
    Polynom& operator = (const Polynom p) {
        if (&p == this) return *this;
        if (koef) delete[] koef;

        n = p.n;
        koef = new double[p.n + 1];
        for (int i = 0; i < p.n; i++)
            koef[i] = p.koef[i];
        return *this;   
    }
    friend ostream& operator >> (ostream& mystream, Polynom& ob);
    friend istream& operator >> (istream& mystream, Polynom& ob);
    int min(int n, int m)
    {
        return (n < m) ? n : m;
    }
    int max(int n, int m) { return (n > m) ? n : m; }
};
Polynom::Polynom() {
    randomize()
    int n = random(5);
}

int main()
{
    std::cout << "Hello World!\n";
}

/