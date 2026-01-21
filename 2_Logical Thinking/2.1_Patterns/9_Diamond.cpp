#include<bits/stdc++.h>
using namespace std;

void printDiamond(int rows){
    for(int i = 0 ; i < rows ; i ++){
        for(int j = 0 ; j < ((rows - i) - 1) ; j++){
            cout << "_";
        }
        for(int j = 0 ; j < ((i * 2) + 1) ; j++){
            cout << "*";
        }
        for(int j = 0 ; j < ((rows - i) - 1) ; j++){
            cout << "_";
        }
        cout << endl;
    }
    for(int i = 0 ; i < rows ; i ++){
        for(int j = 0 ; j < i ; j++){
            cout << "_";
        }
        for(int j = 0 ; j < (((rows - i) * 2) - 1) ; j++){
            cout << "*";
        }
        for(int j = 0 ; j < i ; j++){
            cout << "_";
        }
        cout << endl;
    }
}

int main(){
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    printDiamond(rows);
    return 0;
}