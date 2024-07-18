#include <iostream>

using namespace std;

// Forward decelaration

class Complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex
{
    int a, b;

public:
    // friend int calculator :: sumRealComplex(Complex , Complex );
    // friend int calculator :: sumCompComplex(Complex , Complex );

    friend class calculator;
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << " i " << endl;
    }
};

int calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);

    calculator calc;
    int result = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << result << endl;

    int resultc = calc.sumCompComplex(o1, o2);
    cout << "The sum of Complex part of o1 and o2 is " << resultc << endl;

    return 0;
}