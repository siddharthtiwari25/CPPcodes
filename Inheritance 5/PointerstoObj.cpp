#include<iostream>

using namespace std;

class Complex{
    int real , imaginary;
    public:
   void  getData(){
    cout<<"The real part is "<<real<<endl; 
    cout<<"The imaginary part is "<<imaginary<<endl; 

   }
   void setData(int a , int b){
    real = a;
    imaginary = b;
   }

};

int main(){
    Complex c1;
    // Complex *ptr = &c1;
    // c1.setData(1, 54);
    // c1.getData();

    Complex *ptr = new Complex;
    // (*ptr).setData(1, 54);
    // (*ptr).getData();

    ptr->setData(1,4);    //Arrow operator
    ptr->getData();
    
    
    return 0;
}