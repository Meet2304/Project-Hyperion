#include<bits/stdc++.h>
using namespace std;

void patternCharRAT(int rows){
    for(int i = 0 ; i < rows ; i++){
        for(char ch1 = 'E' - i ; ch1 <= 'E' ; ch1++){
            cout << ch1;
        }
        cout << endl;
    }
}

int main(){
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    patternCharRAT(rows);
    return 0;
}