// List in CPP STL
#include <iostream>
#include <list>     // including list in CPP
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator itr;

    for(itr = lst.begin(); itr!= lst.end(); itr++ ){
        cout<< *itr << " ";
    }
    cout<< endl;
}

int main()
{
    
    list<int> list1;    // list of 0 length
    list1.push_back(4);
    list1.push_back(6);
    list1.push_back(8);

    list<int> :: iterator iter;
    iter = list1.begin();
    cout << *iter << " ";
    iter++;
    cout << *iter << " ";
    

    list<int> list2;    // list of 0 length
    list2.push_back(44);
    list2.push_back(62);
    list2.push_back(9);
    list2.push_back(9);
    list2.push_back(15);

    display(list2);  // ALTER you can create an external function for displaying

    // Ways to remove elements from the list
    // list2.pop_back();
    // list2.pop_front();
    // list2.remove(9);

    list2.merge(list1);
    
    list2.sort();

    list2.reverse();
    display(list2);  // ALTER you can create an external function for displaying
    return 0;
}