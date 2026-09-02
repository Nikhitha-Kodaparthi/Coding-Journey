#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        if (Y > X)
            cout << "PROFIT\n";
        else if (Y < X)
            cout << "LOSS\n";
        else
            cout << "NEUTRAL\n";
    }

    return 0;
}