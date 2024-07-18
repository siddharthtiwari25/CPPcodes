#include<iostream>

using namespace std;

template <class T>

class sidd{
    public:
        T data;
        sidd(T a){
            data = a;

        }
        void display();
};

template <class T>
void sidd<T>:: display(){
    cout<< data;
}
void func (int a){
    cout <<"I am first function "<<a <<endl;
}

template <class T>
void func(T a){
    cout <<"I am templatised function "<<a <<endl;
}

template <class T>
void func1(T a){
    cout <<"I am templatised function "<<a <<endl;
}

int main(){
    // sidd <float> s(5 , 7);
    // sidd <int > s(19);
    // cout<<s.data<<endl;
    // s.display();

    //func(4); //Exact match takes the higher priority
    func1(4); //Exact match takes the higher priority
    
    return 0;
}