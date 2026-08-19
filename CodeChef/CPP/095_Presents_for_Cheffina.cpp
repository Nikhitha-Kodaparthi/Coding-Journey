#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;

        cout << N - N / 5 << '\n';
    }

    return 0;
}