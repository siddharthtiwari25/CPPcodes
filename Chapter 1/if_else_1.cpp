#include<iostream>

using namespace std;

int main(){
    int age;
    cout<< "Tell me your age"<<endl;
    cin>>age;
    if((age<18) && (age>0)){
        cout<< "You can not come to my party"<<endl;
    
    }
    else if(age==18){
        cout<< "You are a kid and you will get a choclate"<<endl;
    }
    else if(age<1){
        cout<< "You are yet to born"<<endl;
    }
    else{
        cout<< "You can come to my party"<<endl;
    }
    return 0;
    
}