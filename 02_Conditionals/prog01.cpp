#include <bits/stdc++.h>
using namespace std;

int main() {

    // Write a program to take age as the user input and display whether the user is eligible to vote or not!

    int UserAge;

    cout << "Enter your Age: ";
    cin >> UserAge;

    if (UserAge < 18) {
        cout << "You're NOT Eligible to vote" << endl;
    }

    else if (UserAge >= 18) {
        cout << "You're Eligible to Vote" << endl;
    }

    return 0;
}