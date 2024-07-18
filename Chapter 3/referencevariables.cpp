#include<iostream>

using namespace std;

int sum(int a, int b){

int c= a+b;
return c;
}


// Call by Reference using  C++ Reference variables
void swapReferenceVar(int  &a , int  &b){  //temp   a   b
   int  temp = a;             // 4     4   5
   a = b;                    // 4     5   5
   b = temp;                 // 4     5   4
}

int main(){
    int x =4, y =5;
    // cout<<"The sum of 4 and 5 is "<<sum(4, 5)<<endl;

    cout<<"The vlue of x is "<<x<<" and the value of y is "<<y<<endl;
    swapReferenceVar(x , y);

    cout<<"The vlue of x is "<<x<<" and the value of y is "<<y<<endl;

    return 0;
}