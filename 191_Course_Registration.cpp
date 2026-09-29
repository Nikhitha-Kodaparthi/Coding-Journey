#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M, K;
        cin >> N >> M >> K;

        if (N + K <= M)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}