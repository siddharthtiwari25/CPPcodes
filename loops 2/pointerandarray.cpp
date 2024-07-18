#include<iostream>

using namespace std
;
int main(){

     int mathmarks[4];

    mathmarks[0] =23;
    mathmarks[1] =323;
    mathmarks[2] =243;
    mathmarks[3] =823;

    int *p =mathmarks;

    cout<<"The value of *p is  "<<*p<<endl;
    
    cout<<"The value of *(p+1) is  "<<*(p+1)<<endl;
    
    cout<<"The value of *(p+2) is  "<<*(p+2)<<endl;
    
    cout<<"The value of *(p+3) is  "<<*(p+3)<<endl;

    
    return 0;
}