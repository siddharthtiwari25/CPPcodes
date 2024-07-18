#include<iostream>

using namespace std;


float moneyRecived(int currentMoney, float factor= 1.04 ){
     return currentMoney * factor;
}


//int strlen(cons char*p){
                                //(Constant Arguments)
// }

int main(){

    int a, b;
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyRecived(money)<<
    "Rs after 1 year"<<endl;

    cout<<"For Vip: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyRecived
    (money, 1.1)<< "Rs after 1 year"<<endl;
    
    return 0;
}