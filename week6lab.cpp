#include <iostream>
using namespace std;

int main()
    {
        int x;
        cout << "please input your grade";
        cin >> x;
        if     (x >= 86) {
            cout << "your grade is A, good job!";
        }
        else if (x >= 72) {
            cout << "your grade is B, nice job!";
        }
        else if (x >= 60) {
            cout << "your grade is C, you did your best!";
        }
        else if (x >= 50) {
            cout << "your grade is D, passable.";
        }
        else if  (x >= 0) {
            cout << "your grade is F, YOU FAILED!!!";
        }
    return 0;
    }
