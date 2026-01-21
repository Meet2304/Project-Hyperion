#include<bits/stdc++.h>
using namespace std;

void printInvertedCharRAT(char letter){
    for(char ch1 = letter ; ch1 >= 'A' ; ch1--){
        for(char ch2 = 'A' ; ch2 <= ch1 ; ch2++){
            cout << ch2;
        }
        cout << endl;
    }
}

int main(){
    char letter;
    cout << "Enter the last letter of the inverted Right Angle Triangle: ";
    cin >> letter;
    printInvertedCharRAT(letter);
    return 0;
}