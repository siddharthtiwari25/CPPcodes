#include <iostream>

using namespace std;

int main()
{
    // Basic example
    int a = 4;
    int *ptr = &a;
    *ptr = 993;

    cout << "The value of a is " << *(ptr) << endl;

    // New Operator

    // int *p = new int(30);
    float *p = new float(23.25);
    cout << "The value at address p is " << *(p) << endl;

    int *arr = new int[3];

    arr[0] = 3;
    arr[1] = 6;
    arr[2] = 9;

    delete[] arr;

    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    // Delete Operator

    return 0;
}