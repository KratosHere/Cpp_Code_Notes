#include <bits/stdc++.h>
using namespace std;
// Grading System:

int main() {
    
    float marks;
    cout << "Enter Marks Obtained: ";
    cin >> marks;

    if (marks < 25) {
        cout << "Grade : F" << endl;
    }

    else if (marks >= 25 && marks <= 44) {
        cout << "Grade : E" << endl;
    }

    else if (marks >= 45 && marks <= 49) {
        cout << "Grade : D" << endl;
    }

    else if (marks >= 50 && marks <= 59) {
        cout << "Grade : C" << endl;
    }

    else if (marks >= 60 && marks <= 79) {
        cout << "Grade : B" << endl;
    }

    else if (marks >= 80 && marks <= 100) {
        cout << "Grade : A" << endl;
    }


    else {
        cout << "Invalid Marks Input , Try Again" << endl;
    }

    return 0;
}