#include<iostream>

using namespace std;

class calculate{
    public:
    int ch , a , b;
    calculate(){
      
      cout <<"Mini calculator ahed\n\nSelect from the option below\n1)Addition\n2)Substraction\n3)Multiplication\n4)Quoitent\n5)Reminder\n\nEnter Your Choice\n"<<endl;
      cin>>ch;
      if(ch>=1  &&ch<=5){
        cout <<"\nEnter two numbers: "<<endl;
        cin>>a>>b;
      }
    }

};
class solve : public calculate
{
        public:
        int r;
        solve()
        {
            if(ch==1)
            r=a+b;
            else if(ch==2)
            r=a-b;
            else if(ch==3)
            r=a*b;
            else if(ch==4)
            r=a/b;
            else if(ch==5)
            r=a%b;
            else
            cout <<"\n\nWrong Choice !!"<<endl;
            if(ch>=1 && ch<=5)
            {cout<<"\n\nResult : "<<r<<endl;}
        }
};

int main(){
    solve k;
    return 0;
}