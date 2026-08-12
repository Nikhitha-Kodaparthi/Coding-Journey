#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        int breaks = (X - 1) / 3;
        cout << X * Y + breaks * Z << endl;
    }

    return 0;
}
