#include<bits/stdc++.h>
using namespace std;

int main(){
    // 2D Array Declaration
    int arr[3][5];
    
    arr[1][3] = 78;
    cout << "The value at arr[1][3] is: " << arr[1][3] << endl;
    cout << "Array value if no value is assigned: " << arr[0][0] << endl; // Garbage Value
    return 0;
}