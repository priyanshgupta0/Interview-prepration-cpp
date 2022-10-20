// C++ Program to find the Greatest of three numbers
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter 3 numbers you want to compare\n";
    int first, second, third;
    cout << "Enter number 1 : ";
    cin >> first;
    cout << "Enter number 2 : ";
    cin >> second;
    cout << "Enter number 2 : ";
    cin >> third;
    int temp, result;
    temp = first > second ? first : second;
    result = temp > third ? temp : third;
    cout << result << " is the largest";
    return 0;
}