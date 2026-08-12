#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        string S;
        cin >> S;

        for (char ch : S) {
            if (ch == 'A')
                cout << 'T';
            else if (ch == 'T')
                cout << 'A';
            else if (ch == 'C')
                cout << 'G';
            else
                cout << 'C';
        }
        cout << endl;
    }

    return 0;
}