#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;

long long power(long long a, long long b) {
    long long result = 1;

    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * a) % MOD;
        }

        a = (a * a) % MOD;
        b /= 2;
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        long long a, b;
        cin >> a >> b;

        cout << power(a, b) << '\n';
    }

    return 0;
}