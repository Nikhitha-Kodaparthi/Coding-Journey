#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long X, Y;
        cin >> X >> Y;

        cout << (Y - 1) / X << '\n';
    }

    return 0;
}