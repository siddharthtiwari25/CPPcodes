#include<iostream>

using namespace std;

class Base1{
    int data1;
    public:
       Base1(int i){
        data1 =i;
        cout <<"Base1 class constructor called "<<endl;
       }
       void printDataBase1(void){
        cout<<"The value of data1 is: "<<data1<<endl;
       }
};
class Base2{
    int data2;
    public:
       Base2(int i){
        data2 =i;
        cout <<"Base2 class constructor called "<<endl;
       }
       void printDataBase2(void){
        cout<<"The value of data2 is: "<<data2<<endl;
       }
};
class Derived : public Base2, public Base1{
    int derived1, derived2;
    public:
    Derived(int a , int b, int c, int d) : Base1(a), Base2(b){
        derived1 =c;
        derived2 =d;
        cout<<"Derived class constructor called: "<<endl;
    }
    void printDataderived(void){
        cout <<"The value of Derived1 is: "<<derived1<<endl;
        cout <<"The value of Derived2 is: "<<derived2<<endl;
    }
    

};


int main(){
    Derived sidd(1, 3, 5, 7);
    sidd.printDataBase1();
    sidd.printDataBase2();
    sidd.printDataderived();
    
    return 0;
}