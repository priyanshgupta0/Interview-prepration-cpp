// Find the Greatest of the Two Numbers in C++
#include <bits/stdc++.h>
using namespace std;
int main(){
    cout << "Enter two numbers you want to compare\n";
    int a , b ;
    cout << "Enter number 1 : ";
    cin >> a;
    cout << "Enter number 2 : ";
    cin >> b;
    if (a == b)
    {
        cout << "Both the numbers are equal";
    }
    else
    {
        a > b ? cout << a << " is Largest" : cout << b << " is Largest"; 
    }
    
    
return 0;
}