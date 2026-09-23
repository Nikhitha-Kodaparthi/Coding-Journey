#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        if (X < Y)
            cout << "REPAIR\n";
        else if (X > Y)
            cout << "NEW PHONE\n";
        else
            cout << "ANY\n";
    }

    return 0;
}