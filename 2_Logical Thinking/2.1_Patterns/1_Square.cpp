#include<bits/stdc++.h>
using namespace std;
/*
Printing a nxn square of *
*/

void printSquare(int r, int c){
    for(int i = 0; i < r; i++){
        for (int j = 0; j<c; j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int rows, cols;
    cout << "Enter the number of rows:" ;
    cin >> rows;
    cout << "Enter the number of cols:" ;
    cin >> cols;
    printSquare(rows, cols);
    return 0;
}