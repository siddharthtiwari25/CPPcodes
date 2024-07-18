#include<iostream>
// There are two types of header files:
// 1. System header files: It comes with the compiler
// 2. User defined header files: It is written by the user
//  #include "this.h"  --> This will produce an error if this.h is not present in the current directory
using namespace std;


int main(){
    int a=4, b=5;
    cout<<"Opreators in C++:"<<endl;
    cout<<"Followings are the types of opreators in c++"<<endl;

    // Arthmetic Opreator
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a++   is "<<a++<<endl;
    cout<<"The value of a--   is "<<a--<<endl;
    cout<<"The value of ++a   is "<<++a<<endl;
    cout<<"The value of --a   is "<<--a<<endl;
    


    return 0;



}
