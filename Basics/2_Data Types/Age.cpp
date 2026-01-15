#include<bits/stdc++.h>
using namespace std;

// Program that takes an input as age and tells weather the person is an adult or not

int main(){
    int age;

    cout << "Enter Age: ";
    cin >> age;
    if(age >= 18){
        cout << "You are an adult." << "\n";
    }
    else{
        cout << "You are not an adult." << "\n";
    }
    return 0;
}