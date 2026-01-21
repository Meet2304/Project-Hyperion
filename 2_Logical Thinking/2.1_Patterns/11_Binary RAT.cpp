#include<bits/stdc++.h>
using namespace std;

void printBinaryRAT(int rows){
    for(int i = 0 ; i <= rows ; i++){
        for(int j = 0 ; j < i ; j++){
            if(i % 2 != 0 && j % 2 != 0){
                cout << "0";
            }
            else if(i % 2 == 0 && j % 2 != 0){
                cout << "1";
            }
            else if(i % 2 == 0 && j % 2 == 0){
                cout << "0";
            }
            else{
                cout << "1";
            }
        }
        cout << endl;
    }
}

int main(){
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    printBinaryRAT(rows);
    return 0;
}