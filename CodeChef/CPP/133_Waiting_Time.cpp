#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int K, X;
        cin >> K >> X;

        cout << (K * 7) - X << '\n';
    }

    return 0;
}