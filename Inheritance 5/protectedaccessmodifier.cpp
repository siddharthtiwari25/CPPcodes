#include<iostream>

using namespace std;

class Base{
    protected:
    int a;  

    private:
    int b;
};

/*
for a protected member:
                            public derivation       private derivation          proctected derivation
1.private members            Not Inherited            Not Inherited                 Not Inherited
2.protected members             protected               private                       protected
3.public members               public                   private                       protected

*/

class Derived{

};
    

int main(){
    Base b;
    Derived d;
    // cout <<d.a<<endl;  //will not work since a is protected in both base as well as derived class
    
    return 0;
}