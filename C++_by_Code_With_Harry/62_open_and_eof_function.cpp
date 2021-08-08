#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
    // ofstream os;    // writing in file
    // os.open("Sample.txt");
    // os << "This is is first time.";
    // os << " Second Time.\n";
    // os << " Third Time.\n";
    // os.close();

    ifstream is;
    is.open("Sample60.txt");
    string str1, str2;
    // is >> str1;
    // is >> str2;

    // cout<< str1 << str2;

    while(is.eof()==0){
        // is>> str1;
        getline(is, str1);
        cout<< str1 << endl;
    }


    return 0;
}