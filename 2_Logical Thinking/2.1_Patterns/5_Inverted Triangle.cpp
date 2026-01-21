#include<bits/stdc++.h>
using namespace std;

void printInvertedTriangle(int rows){
    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < (rows-i) ; j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    printInvertedTriangle(rows);
    return 0;
}