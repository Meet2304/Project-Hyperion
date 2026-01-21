#include<bits/stdc++.h>
using namespace std;

void PrintTriangle(int rows){
    for(int i = 0; i < rows ; i++){
        for(int j = 0; j<= i; j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int rows;
    cout << "Enter number of rows:";
    cin >> rows;
    PrintTriangle(rows);
}