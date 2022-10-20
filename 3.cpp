// Find the Sum of N Natural Numbers in C++
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout <<"Enter the number you want the sum\n";
    cin >> num;
    int Sn = (num*(num+1))/2;
    cout << "Sum of " << num << "natural number is "<<Sn;
return 0;
}