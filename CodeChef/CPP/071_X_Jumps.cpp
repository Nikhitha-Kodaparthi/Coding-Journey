#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        int moves = X / Y + X % Y;
        cout << moves << endl;
    }

    return 0;
}