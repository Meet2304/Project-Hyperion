#include<bits/stdc++.h>
using namespace std;

void halfCutDiamond(int rows){
    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j <= i ; j++){
            cout << "*";
        }
        for(int j = 0 ; j < ((2 * rows) - (2 * i) - 2) ; j++){
            cout << "_";
        }
        for(int j = 0 ; j <= i ; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 0 ; i < (rows - 1) ; i++){
        for(int j = 0 ; j < (rows - i - 1) ; j++){
            cout << "*";
        }
        for(int j = 0 ; j < ((2 * i) + 2) ; j++){
            cout << "_";
        }
        for(int j = 0 ; j < (rows - i - 1) ; j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int rows;
    cout << "Enter the number of rows:";
    cin >> rows;
    halfCutDiamond(rows);
    return 0;
}