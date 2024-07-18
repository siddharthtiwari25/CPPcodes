#include<iostream>

using namespace std;
/*
Inheritance:
Student -> Test
Student -> Sports
Sports -> Result
Test  -> Result
*/

class Student{
    protected:
    int roll_number;
    public:
    void set_number(int a){
        roll_number = a;
    }
    void print_number(void){
        cout <<"Your Roll No is: "<<roll_number<<endl;
    }

};

class Test : virtual public Student{
    protected:
    float maths , physics;
    public:
    void set_marks(float m1, float m2){
        maths =m1;
        physics =m2;
    }
    void print_marks(void){
        cout <<"Your Result is here:"<<endl
        <<"Maths: "<<maths<<endl
        <<"Physics: "<<physics<<endl;
    }
};

class Sports : virtual public Student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score = sc;
    }
    void print_score(void){
        cout <<"Your PT score is "<<score<<endl;
    }

};

class Result : public Sports, public Test{
    private:
    float total;
    public:
    void display(void){
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        
        cout <<"Your Total score is: "<<total<<endl;
    }
};

int main(){
    Result siddharth;
    siddharth.set_number(19);
    siddharth.set_marks(88.4, 90);
    siddharth.set_score(8);
    siddharth.display();

    return 0;
}