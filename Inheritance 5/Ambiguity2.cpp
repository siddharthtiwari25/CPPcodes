#include<iostream>

using namespace std;
class B{
    public:
    void say(){
        cout <<"Hello Darling"<<endl;
    }

};
class D : public B{
    public:
    void say(){
        cout<<"Hello my beautiful people"<<endl;

    }
};

int main(){
    B b;
    b.say();

    D d;
    d.say();
    
    return 0;
}