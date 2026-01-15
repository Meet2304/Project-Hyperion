#include<bits/stdc++.h>
using namespace std;

int main(){
    //int [-10^9 to 10^9]
    int x = 10;
    //long [-10^12 to 10^12]
    long y = 100;
    // long long [-10^18 to 10^18]
    long long z = 1000;
    // float
    float a = 10.1;
    // double
    double b = 10.11;
    // string
    string s;
    // character
    char c;

    cout << "Int:" << x << "\n";
    cout << "long:" << y << "\n";
    cout << "long long:" << z << "\n";
    cout << "float:" << a << "\n";
    cout << "double:" << b << "\n";
    cout << "Enter String: ";
    getline(cin, s);
    cout << "String:" << s << "\n";
    cout << "Enter Character: ";
    cin >> c;
    cout << "Character:" << c << "\n";

    return 0;
}