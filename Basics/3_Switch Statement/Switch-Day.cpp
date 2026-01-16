#include<bits/stdc++.h>
using namespace std;

/*
Take the day number as input and print the day name using switch case statement.
For example, if the input is 1, the output should be "Monday".
*/

int main(){
    int day;
    cout << "Enter the day number:";
    cin >> day;
    switch(day){
        case 1:
            cout << "The day is Monday";
            break;
        case 2:
            cout << "The day is Tuesday";
            break;
        case 3:
            cout << "The day is Wednesday";
            break;
        case 4:
            cout << "The day is Thursday";
            break;
        case 5:
            cout << "The day is Friday";
            break;
        case 6:
            cout << "The day is Saturday";
            break;
        case 7:
            cout << "The day is Sunday";
            break;
        default:
            cout << "Invalid day number";
            break;
    }

    return 0;
}