#include<iostream>
using namespace std;

void prime_num(){
    int n;
    // cout<<"\nEnter any Number : ";
    cin>> n;

    int i;
    for(i=2; i<n; i++){

    // cout<< "\nUpper Inside, i : "<< i;
        if (n%i==0){
            cout<< "\nNot a Prime Number.\n";
            break;                       
        }
    
    } 

    if(i==n){
        cout<< "\nThis is a Prime Number.";
    }

}

void prime_num_2()
{
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

void print_all_prime_num(){

    int a, b;
    cout<< "\nEnter Two Number to get all Prime Number between them : ";
    cin>> a >>b;
    
    for(int num=a; num<=b; num++){

        int i;
        for (i=2; i<num; i++){

            if (num%i==0){
                break;
            }
        }

        if (i==num){
            cout<< num << " ";
        }

    }

}

int main()
{
    prime_num();
    // prime_num_2();
    // print_all_prime_num();
}