#include<iostream>

using namespace std;

 inline int product(int a, int b){

    //Not reccomended to use below lines with inline functions
   // static int c = 0;  //This exceutes only once
   // c = c+1;            //Next time this function is run, the value of c will be retained
    return a*b;
}

int main(){
    int a, b;
    cout<<"Enter the value of a and b "<<endl;
    cin>>a>>b;

    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;


    return 0;
}