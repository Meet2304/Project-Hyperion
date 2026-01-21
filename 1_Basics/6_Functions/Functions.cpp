#include<bits/stdc++.h>
using namespace std;

/*
Types of functions in C++:
1. void -> Do not return any value
2. return - 
3. parameterized -> Accept parameters
4. non-parameterized -> Do not accept parameters
*/

void printName(string name){ // Void parameterized function
    cout << "The name is:" << name << endl;
}

// Addition Function
int add(int a , int b){
    return a + b;
}

int main(){
    string name;
    cout << "Enter your name: ";
    cin >> name;
    printName(name);

    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Sum of the numbers is: " << add(num1, num2) << endl;
    return 0;
}