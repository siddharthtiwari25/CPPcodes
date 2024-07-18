#include<iostream>

using namespace std
;
int main(){
    
    int mathmarks[4];

    mathmarks[0] =23;
    mathmarks[1] =323;
    mathmarks[2] =243;
    mathmarks[3] =823;

    
    for(int i=0; i<4; i++){

        cout<<"The value of marks "<<i<<"  is "<<mathmarks[i]<<endl;
    }

    return 0;
}