/* Protected access modifier
        	Public Deriv.      	Private Deriv.	Protected Deriv.
Public  	Public          	Private     	Protected
Private    	Not Inherited      	Not Inherited	Not Inherited
Protected	Protected	        Private	        Protected
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Base
{
    protected:
        int pro;
    private:
        int pri;
};

class Derived : private Base
{
    
};

int main()
{
  Base b;
  cout<< b.pro;
//   cout<< b.pri;
  Derived d;
  cout<< d.pro;  // These all will not work since a is protected in both as well as derived class



    return 0;
}