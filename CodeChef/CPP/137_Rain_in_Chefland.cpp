#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X;
        cin >> X;

        if (X < 3)
            cout << "LIGHT\n";
        else if (X < 7)
            cout << "MODERATE\n";
        else
            cout << "HEAVY\n";
    }

    return 0;
}