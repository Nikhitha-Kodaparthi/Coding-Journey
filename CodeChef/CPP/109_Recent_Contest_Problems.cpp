#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int start38 = 0;
        int ltime108 = 0;

        for (int i = 0; i < N; i++) {
            string contest;
            cin >> contest;

            if (contest == "START38")
                start38++;
            else
                ltime108++;
        }

        cout << start38 << " " << ltime108 << '\n';
    }

    return 0;
}