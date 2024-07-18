#include <iostream>

using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;

        cout << "Enter the Id of the Employee " << endl;
        cin >> id;
    }

    void getId(void)
    {
        cout << "The id of the Employee is " << id << endl;
    }
};

int main()
{

    Employee TiwariEnterprises[4];
    for (int i = 0; i < 4; i++)
    {
        TiwariEnterprises[i].setId();
        TiwariEnterprises[i].getId();
    }

    return 0;
}