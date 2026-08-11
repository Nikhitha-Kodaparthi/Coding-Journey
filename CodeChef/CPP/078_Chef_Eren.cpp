#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, A, B;
        cin >> N >> A >> B;

        int even = N / 2;
        int odd = N - even;

        cout << even * A + odd * B << '\n';
    }

    return 0;
}