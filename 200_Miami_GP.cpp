#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        if (Y * 100 <= X * 107)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}