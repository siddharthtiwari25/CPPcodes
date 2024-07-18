#include<iostream>

using namespace std;



int main() {
    int n = 6; // The number for which we want to generate the table

    cout << "Multiplication table for " << n << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}


