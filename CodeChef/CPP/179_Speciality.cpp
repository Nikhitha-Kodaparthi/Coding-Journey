#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        if (X > Y && X > Z)
            cout << "Setter\n";
        else if (Y > X && Y > Z)
            cout << "Tester\n";
        else
            cout << "Editorialist\n";
    }

    return 0;
}