#include<bits/stdc++.h>
using namespace std;

void charEquilateralTriangel(int num){
    for(int i = 0 ; i < num ; i++){
        for(int j = 0 ; j < (num - i) ; j++){
            cout << "_";
        }
        char letter = 'A';
        for(int j = 0 ; j < ((2 * i) + 1) ; j++){
            if(j < i){
                cout << letter;
                letter++;
            }
            else{
                cout << letter;
                letter--;
            }
        }
        for(int j = 0 ; j < (num - i) ; j++){
            cout << "_";
        }
        cout << endl;
    }
}

int main(){
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    charEquilateralTriangel(rows);
    return 0;
}