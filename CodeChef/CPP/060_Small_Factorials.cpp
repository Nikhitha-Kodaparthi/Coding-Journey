#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> fact;
        fact.push_back(1);

        for (int i = 2; i <= n; i++) {
            int carry = 0;

            for (int j = 0; j < fact.size(); j++) {
                int prod = fact[j] * i + carry;
                fact[j] = prod % 10;
                carry = prod / 10;
            }

            while (carry) {
                fact.push_back(carry % 10);
                carry /= 10;
            }
        }

        for (int i = fact.size() - 1; i >= 0; i--)
            cout << fact[i];

        cout << endl;
    }

    return 0;
}