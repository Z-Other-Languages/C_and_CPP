/* Demerit of friend function in OOPS Concept :-
   It breaks the concept of data hiding feature of the OOPs.
*/ 
#include <iostream>
using namespace std;

/* Let
    ab = Student
    a = password

*/
class Theory;
class Game{

    int sport;
    
    public:

        void get_game_marks()
        {
            cout<< "Enter Sports Marks Obtained : ";
            cin>> sport;
        }

        friend void sum(Game g, Theory t);
};

class Theory{
    int th_marks;
    public:
        void get_th_marks()
        {
            cout<< "\nEnter ther Theory Marks : ";
            cin>> th_marks;
        }

        friend void sum(Game g, Theory t);
};

void sum(Game g, Theory t){
    cout<< "\nTotal Marks is : " << g.sport + t.th_marks;
}


int main()
{
    Game obj_g;
    Theory obj_t;

    obj_g.get_game_marks();
    obj_t.get_th_marks();

    sum(obj_g, obj_t);

    return 0;
}