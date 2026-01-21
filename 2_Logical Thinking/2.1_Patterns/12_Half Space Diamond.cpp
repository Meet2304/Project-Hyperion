#include<bits/stdc++.h>
using namespace std;

void printHalfSpaceDiamond(int rows){
    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j <= i ; j++){
            cout << j + 1;
        }
        for(int j = 0 ; j < (rows -  (2 * i) + 2) ; j++){
            cout << "_";
        }
        for(int j = 0 ; j <= i ; j++){
            cout << j + 1;
        }
        cout << endl;
    }
}

int main(){
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    printHalfSpaceDiamond(rows);
    return 0;
}