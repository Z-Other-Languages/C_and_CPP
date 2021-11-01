#include<iostream>
#include<cstring>
using namespace std;

class Base{
    protected:
        string title;
        float rating;
    public:
        Base(string t, float r){
            title = t;
            rating =r;
        }

    // virtual void display(){ cout<< "Coder Bugger"; }
    virtual void display()=0;   // This is Pure Virtual Function
};

class Derive_video : public Base{
    
    float videoLength;

    public:
        Derive_video(string t, float r, float vl) : Base(t, r){
            videoLength = vl;
        }

        void display()
        {
            cout<< endl << "Title of the Video : " << title << endl;
            cout<< "Rating : " << rating << " out of 5 Stars." << endl;
            cout<< "Length of Video : " << videoLength << endl << endl;
        }
};

class Derive_text : public Base{
    int words;

    public:
        Derive_text(string t, float r, int wc) : Base(t, r){
            words = wc;
        }

    void display(){
        cout<< "Text title : " << title << endl;
        cout<< "Rating of Text : " << rating << " out of 5 Stars." << endl;
        cout<< "Number of words in Text Tutorial : " << words << " words." << endl << endl;
    }
};


int main(){
    string title;
    float rating, vlen;
    int words;


    // For derive videos
    title = "PHP and MySQL";
    rating = 4.67;
    vlen = 90.4;

    Derive_video d_video(title, rating, vlen);
    d_video.display();

    // For derive text
    title = "Learn C++ by Code with Harry.";
    rating = 4.99;
    words = 225;

    Derive_text d_text(title, rating, words);
    d_text.display();
    
    // 
    Base *b[2];
    b[0] = &d_video;
    b[1] = &d_text;

    b[0]->display();
    b[1]->display();

}