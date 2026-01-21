#include<bits/stdc++.h>
using namespace std;

void printEquilateralTriangle(int rows){
    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < (rows - i - 1) ; j++){            
            cout << "_";
        }

        for(int j = 0 ; j < (2 * i + 1) ; j++){            
            cout << "*";
        }

        for(int j = 0 ; j < (rows - i - 1) ; j++){            
            cout << "_";
        }
        cout << endl;
    }
}

int main(){
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    printEquilateralTriangle(rows);
    return 0;
}