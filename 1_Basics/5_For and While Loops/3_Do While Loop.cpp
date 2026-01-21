#include<bits/stdc++.h>
using namespace std;

int main(){
    int i = 2;
    /*
    A do while loop is executed at least once before checking the condition.
    1. Execute the loop body.
    2. Check the condition.
    3. If the condition is true, repeat from step 1.
    4. If the condition is false, exit the loop.
    */
    do {
        cout << "The value of i is: " << i << endl;
        i++;
    } while(i<=1);
    return 0;
}