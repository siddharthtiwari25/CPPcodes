#include <iostream>

using namespace std;

template <class T>

class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotproduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    // vector v1(3);
    // v1.arr[1]= 4;
    // v1.arr[2]= 6;
    // v1.arr[3]= 8;

    // vector v2(3);
    // v2.arr[1]= 22;
    // v2.arr[2]= 16;
    // v2.arr[3]= 23;

    // int a = v1.dotproduct(v2);
    // cout <<a<<endl;

    vector <double> v1(3);
    v1.arr[0] = 1.4;
    v1.arr[1] = 2.6;
    v1.arr[2] = 1.8;

    vector <double> v2(3);
    v2.arr[0] = 0.4;
    v2.arr[1] = 1.6;
    v2.arr[2] = 2.8;

    double a = v1.dotproduct(v2);
    cout << a << endl;

    return 0;
}