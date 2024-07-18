#include <iostream>

using namespace std;

class Y;

class X
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    friend void add(X, Y);
};
class Y
{
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }
    friend void add(X, Y);
};

void add(X o1, Y o2)
{
    cout << "Summing datas of X and Y gives: " << o1.data + o2.num << endl;
}

int main()
{
    X a1;
    a1.setValue(50);

    Y a2;
    a2.setValue(20);

    add(a1, a2);

    return 0;
}