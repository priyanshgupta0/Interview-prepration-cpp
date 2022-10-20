// Find the Sum of Numbers in a Given Interval in C++
#include <bits/stdc++.h>
using namespace std;
int sum_intervel(int a, int b)
{
    if (a > b)
    {
        return 0;
    }
    return a + sum_intervel(a + 1, b);
}
int main()
{
    cout << "Enter the intervel for which you want sum";
    int a, b;
    cout << "enter start interval : ";
    cin >> a;
    cout << "enter end interval : ";
    cin >> b;
    cout << "The sum for the given interval " << a << " to " << b << " is " << sum_intervel(a, b);
    return 0;
}