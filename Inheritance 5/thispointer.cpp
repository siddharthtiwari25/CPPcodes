#include<iostream>

using namespace std;

class A{
    int a;
    public:
    void setData(int a){
        // A& setData(int a){
        this->a =a;
        // return *this;
    }
    void getData(void){
        cout <<"The value of a is: "<<a<<endl;
    }
};

int main(){
    // this is a keyword as well as a pointer which points to the object which invokes the member function


    A a;
    // a.setData(4).getData();
    a.setData(4);
    a.getData();
    
    return 0;
}