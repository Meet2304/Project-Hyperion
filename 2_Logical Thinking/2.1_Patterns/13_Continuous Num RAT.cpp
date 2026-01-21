#include<bits/stdc++.h>
using namespace std;

void printContinuousNumRAT(int rows){
    int count = 1;
    for(int i = 0 ; i <= rows ; i++){
        for(int j = 0 ; j < i ; j++){
            cout << count;
            count++;
        }
        cout << endl;
    }
}

int main(){
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    printContinuousNumRAT(rows);
    return 0;
}