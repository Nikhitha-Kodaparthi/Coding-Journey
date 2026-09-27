#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        int requiredTime = X * Y;
        int availableTime = Z * 24 * 60;

        if (requiredTime <= availableTime)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}