#include<iostream>

using namespace std;

// syntax of multiple parameter template
// CLASS TEMPLATE WITH MULTIPLE PARAMETERS(ONE , TWO OR MORE THAN TWO)

/*
 template <class T1, class T2>
 class nameofclass{

            //body
 }

*/

template <class T1, class T2, class T3>
    class myclass{
        public:
        T1 data1;
        T2 data2;
        T3 data3;

        myclass(T1 a, T2 b ,T3 c){
            data1 = a;
            data2 = b;
            data3 = c;
        }
        void display(){
            cout<<this->data1<<endl<<this->data2<<endl<<this->data3<<endl;
        }
    };

int main(){
    myclass<char , float , int> obj('S' , 1.9, 19);
    obj.display();
    
    return 0;
}