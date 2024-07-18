#include<iostream>

using namespace std
;
int main(){
    // What is a pointer? --->data type which holds the adress of other data types


    int a=3;
    int* b;

    b= &a;

    // &--->(Address of) operator

    cout<<"The adress of a is "<<&a<<endl;
    cout<<"The adress of a is "<<b<<endl;

    // *---> (value at) Dereference operator
    cout<<"The value at address b is "<<*b<<endl;


    return 0;
}