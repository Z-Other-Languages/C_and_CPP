// Maps in CPP STL

#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string, int> marks;
    marks["Ayush"] = 95;
    marks["Jack"] = 81;
    marks["Tom"] = 42;

    marks.insert({{"Jerry", 64}, {"Oggy", 22}});

    map<string, int> :: iterator itr;
    for(itr = marks.begin(); itr != marks.end(); itr++ ){
        cout<< (*itr).first << " " << (*itr).second << endl;
    }

}