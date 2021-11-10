#include <iostream>
using namespace std;

int main()
{ 	
		cout<< "\nEnter a Natural Number :	";
		int x, y, temp=0, rest;
		cin>> x;    
		y = x;
		
		while (y!=0)
		{
			rest = y%10;
			temp = temp + rest*rest*rest;
			y = y/10;
		}
		
		if (temp == x)
		{
			cout<< x << " is a Armstrong's Number \n\n";
			}
		else
		{
			cout<< x << " is a Not Armstrong's Number \n\n";
		}
		

    return 0;
}