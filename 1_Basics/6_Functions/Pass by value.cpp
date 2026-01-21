#include<bits/stdc++.h>
using namespace std;

//Pass by value
void Increament(int num){
    cout << "Original value of num is: " << num << endl;
    num += 5;
    cout << "Value of num after increamenting by 5 is: " << num << endl;
    num += 10;
    cout << "Value of num after increamenting by 10 is: " << num << endl;
}

int main(){
    int num = 10;
    cout << "Value of num before calling the function is: " << num << endl;
    Increament(num);
    cout << "Value of num after calling the function is: " << num << endl;
    return 0;
}