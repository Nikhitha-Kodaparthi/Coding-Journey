#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int degree = 0;

        for (int i = 0; i < N; i++) {
            int coefficient;
            cin >> coefficient;

            if (coefficient != 0) {
                degree = i;
            }
        }

        cout << degree << '\n';
    }

    return 0;
}