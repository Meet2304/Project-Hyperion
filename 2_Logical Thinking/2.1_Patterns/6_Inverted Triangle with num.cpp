#include<bits/stdc++.h>
using namespace std;

void printInvertedTrianglewithNum(int rows){
    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < (rows - i) ; j++){
            cout << j+1;
        }
        cout << endl;
    }
}

int main(){
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    printInvertedTrianglewithNum(rows);
    return 0;
}