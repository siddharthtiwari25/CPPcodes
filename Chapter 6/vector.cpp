#include<iostream>
#include<vector>

using namespace std;

template <class T>
void display (vector<T> &v){
    cout<<"Displaying this vector"<<endl;
    for (int i = 0; i < v.size() ; i++)
    {
        cout <<v[i]<< " ";
        // cout<<v.at(i)<<" ";
    }
    cout <<endl;
    
}

int main(){
    vector<int> vec1;
    int element, size =5;
    // cout <<"Enter the size of your vector "<<endl;
    // cin>>size;
    // for (int  i = 0; i < size; i++)
    // {
    //    cout <<"Enter an element to add to this vector"<<endl;
    //    cin>>element;
    //    vec1.push_back(element);
    // }
    // // vec1.pop_back();
    // display(vec1);
    // vector<int> :: iterator iter =vec1.begin();
    // // vec1.insert(iter+1, 50, 19);
    // display(vec1);

    vector <char> vec2(4); //four element char vector
    // vec2.push_back('5');
    // display(vec2);
    // vector<char> vec3(vec2); //four element char vector from vector 2
    // diaplay(vec3);

    vector<int> vec4(6, 13); //6 element vector of 3s
    display(vec4);
    cout<<vec4.size();
    
    
    return 0;
}