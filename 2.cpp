// Check Whether a Number is Even or Odd in C++
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number you want to check?\n";
    cin >> num;
    cout << num;
    if (num % 2 == 0)
    {
        cout << " is Even";
    }
    else
    {
        cout << " is Odd";
    }

    return 0;
}