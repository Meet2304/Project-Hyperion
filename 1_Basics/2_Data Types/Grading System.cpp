#include<bits/stdc++.h>
using namespace std;

/*
A school has following grading system:
Marks        Grade
below 25    F
25 to 44    E
45 to 49    D
50 to 59    C
60 to 79    B
80 to 100   A
Write a program that takes marks as input and prints the corresponding grade.
*/

/*
No need for conditions like (marks >= 25 && marks <= 44) because if the control
reaches that else if block, it means the previous conditions were false.
*/

int main(){
    int marks;
    cout << "Enter Marks:";
    cin >> marks;
    if (marks < 25){
        cout << "Grade: F";
    }
    else if (marks <= 44){
        cout << "Grade: E";
    }
    else if (marks <= 49){
        cout << "Grade: D";
    }
    else if (marks <= 59){
        cout << "Grade: C";
    }
    else if (marks <= 79){
        cout << "Grade: B";
    }
    else if (marks <= 100){
        cout << "Grade: A";
    }
    return 0;
}