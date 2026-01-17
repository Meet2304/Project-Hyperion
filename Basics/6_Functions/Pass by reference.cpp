#include<bits/stdc++.h>
using namespace std;

//Pass by reference
void Something(string &str){
    cout << "Original string is: " << str << endl;
    str += " World!";
    cout << "String after modification inside the function is: " << str << endl;
}

int main(){
    string str = "Hola";
    cout << "String before calling the function is: " << str << endl;
    Something(str);
    cout << "String after calling the function is: " << str << endl;
    return 0;
}