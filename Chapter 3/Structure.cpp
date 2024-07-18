#include<iostream>

using namespace std
;

typedef struct employee
{
    int eId;
    char favChar;
    float salary;
} ep;

int main(){
    struct employee  siddharth;
    siddharth.eId = 25;
    siddharth.favChar = 's';
    siddharth.salary = 12000;

    cout<<"The value is "<<siddharth.salary<<endl;
    cout<<"The value is "<<siddharth.favChar<<endl;
    cout<<"The value is "<<siddharth.eId<<endl;


    return 0;
}