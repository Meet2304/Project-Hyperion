#include<bits/stdc++.h>
using namespace std;

void printHalfDiamond(int maxwidth){
    for(int i = 0 ; i < maxwidth ; i++){
        for(int j = 0 ; j < (i+1) ; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 0 ; i < maxwidth-1 ; i++){
        for(int j = 0 ; j < (maxwidth-i-1) ; j++){
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    int maxwidth;
    cout << "Enter the max width of the half diamond: ";
    cin >> maxwidth;
    printHalfDiamond(maxwidth);
    return 0;
}