#include<iostream>
#include<string>
#include<map>

using namespace std;

// Map is an associative array

int main(){
    map<string , int> marksMap;
    marksMap["Siddharth"] = 88;
    marksMap["Ayush"] = 98;
    marksMap["Ashish"] = 78;

    marksMap.insert({{"Atif", 69}, {"Jeet", 60}});
    map<string, int> :: iterator iter;
    for (iter= marksMap.begin(); iter!= marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    cout <<"The size is: "<<marksMap.size()<<endl;
    cout <<"The Max size is: "<<marksMap.max_size()<<endl;
    cout <<"The Empty return value is: "<<marksMap.empty()<<endl;
    
    
    return 0;
}