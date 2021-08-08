#include<iostream>
#include<vector>
using namespace std;
/*
void display(vector<int> &v){
    for(int i=0; i<v.size(); i++)
    {
        cout<< v[i] << " ";
        cout<< v.at(i) << " ";
    }
    cout<< endl << endl << endl;
}
*/

template <class T>
void display(vector<T> &v){
    cout << "Displaying this vector." << endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<< v[i] << " ";
        // cout<< v.at(i) << " ";
    }
    cout<< endl << endl << endl;
}

int main(){
/*
    vector<int> vec1;
    int element, size;
    cout<< "Enter the size of the vector :  " ;
    cin>> size;
    for(int i=0; i<size; i++)
    {
        cout<< "Enter the element to add to the vector : " ;
        cin>> element;
        vec1.push_back(element);
    }
    //  vec1.pop_back(); // delete the last element
    display(vec1);

    vector<int> :: iterator itr  = vec1.begin();    // return iterator at the begining
    // vec1.insert(itr, 786);      // insert at first position
    // vec1.insert(itr+3, 786);    // insert at fourth position
    // vec1.insert(itr+3, 2, 786);    // insert 10 times the number 786 at fourth position

    display(vec1);
*/



    // WAYS TO CREATE VECTOR
    vector<int> vec1;    // zero length integer vector
    
    vector<char> vec2(4); // 4 element character vector
    vec2.push_back('5');
    vec2.push_back('A');
    display(vec2);
    cout<< "Size of Second Vector is : " << vec2.size() << endl;

    vector<char> vec3(vec2);    // 4 element character vector from vec2
    display(vec3);

    vector<int> vec4(10, 3);    // 10 times display 3
    display(vec4);
    cout<< vec4.size() << endl;

    return 0;
}