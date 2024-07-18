#include<iostream>

using namespace std;

int main(){
    // int marks[5] ={34, 23, 54, 45, 22};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;
      

    // Arrays Example

    int mathsmarks[4];
    mathsmarks[0] =78;
    mathsmarks[1] =68;
    mathsmarks[2] =67;
    mathsmarks[3] =99;


    // You can change the value of an array

    mathsmarks[2] = 45;

    cout<<"These are Maths Marks"<<endl;
    cout<<mathsmarks[0]<<endl;
    cout<<mathsmarks[1]<<endl;
    cout<<mathsmarks[2]<<endl;
    cout<<mathsmarks[3]<<endl;


    return 0;
}