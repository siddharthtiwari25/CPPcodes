#include<iostream>

#include<list>

using namespace std;
void display(list<int> &lst){
    list<int> :: iterator it;
    for (it=lst.begin(); it!= lst.end(); it++)
    {
        cout << *it<<" ";
    }
    cout <<endl;
}

int main(){

    list<int> list1; //list of zero length

    list1.push_back(9);
    list1.push_back(9);
    list1.push_back(3);
    list1.push_back(3);
    list1.push_back(3);

      list1.unique();
    display(list1);
    

    //Removing list from list1
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(5);

    // Sorting the list
    // list1.sort();

    // display(list1);

    // reversing the list
    // list1.reverse();
    // display(list1);

   

    // list<int> list2(3); //Empty list of size 3
    // list<int> :: iterator iter;
    // iter = list2.begin();
    // *iter = 45;
    // iter++;
    // *iter = 19;
    // iter++;
    // *iter = 35;
    // iter++;
    // // display(list2);

    // list1.sort();
    // list2.sort();

    // merging of list
    // list1.merge(list2);
    // cout <<"List 1 after merging ";
    // display(list1);
    
   
    
    
    return 0;
}