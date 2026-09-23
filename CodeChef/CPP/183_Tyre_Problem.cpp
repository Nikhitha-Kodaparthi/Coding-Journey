#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        cout << 2 * N + 4 * M << '\n';
    }

    return 0;
}