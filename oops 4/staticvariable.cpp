#include <iostream>

using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }

    void getData(void)
    {
        cout << "The id of this emolpyee is " << id << "and this is Employee number " << count << endl;
    }

    // Static Function

    static void getCount(void)
    {
        // cout <<id;  Throws an error
        cout << "The value of the count is " << count << endl;
    }
};

int Employee ::count ; // Deafult value is 0

int main()
{
    Employee Siddharth, Atif, Fahim;

    Siddharth.setData();
    Siddharth.getData();
    Employee::getCount();

    Atif.setData();
    Atif.getData();
    Employee::getCount();

    Fahim.setData();
    Fahim.getData();
    Employee::getCount();

    return 0;
}
