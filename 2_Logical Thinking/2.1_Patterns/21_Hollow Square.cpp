#include<bits/stdc++.h>
using namespace std;

void hollowSquare(int rows){
    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < rows ; j++){
            if(i == 0 || i == (rows-1) || j == 0 || j == (rows-1)){
                cout << "*";
            }
            else{
                cout << "_";
            } 
        }
        cout << endl;
    }
}

int main(){
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    hollowSquare(rows);
    return 0;
}