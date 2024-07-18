#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string st ="I m Siddharth";
    string st2;

    //Opening file using constructor and writing it
    // ofstream out("Sample.txt");    //write opreation
    // out<<st;

    // opening file using constructor and reading it
    ifstream in("Sample(b).txt");  //Read operation
    // in>>st2;
    getline(in , st2);
    cout<<st2;
    
    return 0;
}