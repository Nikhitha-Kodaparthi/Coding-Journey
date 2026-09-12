#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X;
        cin >> X;

        cout << max(X, 300) * 10 << '\n';
    }

    return 0;
}