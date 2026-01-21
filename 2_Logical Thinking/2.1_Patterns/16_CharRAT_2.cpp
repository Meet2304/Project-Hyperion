#include<bits/stdc++.h>
using namespace std;

void CharRAT2(char letter){
    for(char ch1 = 'A' ; ch1 <= letter ; ch1++){
        for(char ch2 = 'A' ; ch2 <= ch1 ; ch2++){
            cout << ch1;
        }
        cout << endl;
    }
}

int main(){
    char letter;
    cout << "Enter the last character of Right Angle Triangle: ";
    cin >> letter;
    CharRAT2(letter);
    return 0;
}
