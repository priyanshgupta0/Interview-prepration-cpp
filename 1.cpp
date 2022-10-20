// Check if a Number is Positive or Negative in C++
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number you want to check?\n";
    cin >> num;
    //Conditions to check if the number is negative or positive
    if (num > 0)
         cout << "The number is positive";
    else if (num < 0)
        cout << "The number is negative";
    else
        cout << "Zero";
    
    return 0;
}