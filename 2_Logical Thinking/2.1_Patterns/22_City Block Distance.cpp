#include<bits/stdc++.h>
using namespace std;

void cityBlockDist(int rows){
    for(int i = 0 ; i < ((2 * rows) - 1) ; i++){
        for(int j = 0 ; j < ((2 * rows) - 1) ; j++){
            int top = i;
            int bottom = (((2 * rows) - 1) - 1 - j);
            int left = j;
            int right = (((2 * rows) - 1) - 1 - i);
            cout << rows - min(min(top, bottom), min(left, right));
        }
        cout << endl;
    }
}

int main(){
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cityBlockDist(rows);
}