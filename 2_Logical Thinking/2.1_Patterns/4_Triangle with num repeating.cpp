#include<bits/stdc++.h>
using namespace std;

void printNumRepeatTriangle(int rows){
    for(int i = 1; i <= rows ; i++){
        for(int j = 0; j < i; j++){
            cout << i;
        }
        cout << endl;
    }
}

int main(){
    int rows;
    cout << "Enter number of rows:";
    cin >> rows;
    printNumRepeatTriangle(rows);
    return 0;
}