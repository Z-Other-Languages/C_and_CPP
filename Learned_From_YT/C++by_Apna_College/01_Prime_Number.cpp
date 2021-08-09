using namespace std;
#include<iostream>
#include<conio.h>

int main(){

    int num, div;
    div = 2;

    cout << "Enter Your Number to Check for Prime or Not : ";
    cin >>  num;
    cout << "Entered Number is : " << num;
  
    while (num > div)
    {
        if(num % div == 0)
        {
            cout << "This is not a Prime Number";
        }

        else{
            div = div + 1;
        }
        
    }

    
    
    

}
