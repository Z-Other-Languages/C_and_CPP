#include<iostream>
using namespace std;

void neha(){

    int pocketMoney=3000;

    for (int date = 0; date <= 30; date++)  
    {
        if (date%2 == 0)
        {
            continue;
        }
        
        if (pocketMoney==0){
            break;
        }

        cout<< "Go out Today\n";
        pocketMoney = pocketMoney - 300;
    }
    
}
void eg_2(){
    for (int i = 0; i < 100; i++)
    {
        if (i%3==0){
            continue;
        }
        cout<<i<<"\n";
    }
    

}

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

int main(){
    
    // neha();
    // eg_2();
    prime_num();
    // print_all_prime_num();
    

}