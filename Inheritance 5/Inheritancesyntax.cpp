#include <iostream>

using namespace std;

class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 45034.0;
    }
    Employee() {}
};

// Derived class syntax

/*
class {{derived-class-name}} :{{visiblity mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Note:
.Deafult visibility mode is private

1.Public Visiblity Mode: Public members of the base class becomes public members of the derives class
2.Private Visiblity Mode: Public members of the base class becomes private members of the derives class
3.private members are never inherited

*/

// Creating a programmer class derived from Employee base class
class programmer : public Employee
{
public:
    int languagecode;
    programmer(int inpId)
    {
        id = inpId;
        languagecode = 10;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee Siddharth(1), Atif(2);
    cout << Siddharth.salary << endl;
    cout << Atif.salary << endl;
    programmer skillF(11);
    cout << skillF.languagecode << endl;
    cout << skillF.id << endl;
    skillF.getData();

    return 0;
}