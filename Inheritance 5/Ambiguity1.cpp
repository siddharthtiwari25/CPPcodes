#include <iostream>

using namespace std;

class base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};
class base2
{
public:
    void greet()
    {
        cout << "Chak de India" << endl;
    }
};

class Derived : public base1, public base2
{
    int a;

public:
    void greet()
    {
        base1 ::greet();
    }
};
int main()
{
    base1 base1obj;
    base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    Derived d;
    d.greet();

    return 0;
}