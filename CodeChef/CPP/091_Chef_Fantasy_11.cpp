#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        cout << N * (N - 1) << '\n';
    }

    return 0;
}