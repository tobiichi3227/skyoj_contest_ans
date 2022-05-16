#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define miyuki_is_my_wife_and_sister ios::sync_with_stdio(false), cin.tie(nullptr)

int main() {
    miyuki_is_my_wife_and_sister;

    ll n{}, s{};
    cin >> n >> s;
    for (int i = 1, cnt = n; i <= s; ++i, ++cnt) {
        for (int j = 1; j <= i; ++j) {
            cout << n + i - 1;
            if (j != s) {
                cout << " ";
            }
        }

        for (int j = 1; j <= s - i; ++j) {
            cout << cnt + j;
            if (j != s - i) {
                cout << " ";
            }
        }

        cout << '\n';
    }

    return 0;
}

