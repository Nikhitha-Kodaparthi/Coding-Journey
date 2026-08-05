#include <iostream>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        if (N <= 10) {
            cout << "Lower Double\n";
        } else if (N <= 15) {
            cout << "Lower Single\n";
        } else if (N <= 25) {
            cout << "Upper Double\n";
        } else {
            cout << "Upper Single\n";
        }
    }

    return 0;
}