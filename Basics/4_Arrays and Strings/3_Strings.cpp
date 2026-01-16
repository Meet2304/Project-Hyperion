#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "Hyperion";
    int len = s.size(); // or s.length();

    cout << "The string is: " << s << endl;
    cout << "The length of the string is: " << len << endl;

    cout << "Last element of the string is: " << s[len - 1] << endl;
    cout << "First element of the string is: " << s[0] << endl;

    // Updating string elements
    s[len-1] = 'N'; // Update with character using ''. Not with ""(as it is considered strings)
    cout << "Updated last element of the string with character 'N': " << s << endl;
    return 0;
}
