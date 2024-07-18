// Paramitrized  constructor
#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int);
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << " i " << endl;
    }
};

Complex ::Complex(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    Complex a(5, 7);
    a.printNumber();

    Complex b = Complex(8, 9);
    b.printNumber();

    return 0;
}