#include<iostream>

using namespace std;

class Test{
    int a;
    int b;

    public:
    // Test(int i , int j) :a(i) , b(j)
    Test(int i , int j) :a(i) , b(i + j)
    // Test(int i , int j) :a(i), b(i * j)
    // Test(int i , int j) :b(j), a( i + b) ---> Red flag ,This will create a problem a will be initailized first
    {
        // a = i;
        // b = j;
        cout <<"Constructor executed "<<endl;
        cout <<"The value of a is: "<<a<<endl;
        cout <<"The value of b is: "<<b<<endl;
    }

};

int main(){
    Test t(4 , 6);
    
    return 0;
}