#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define miyuki_is_my_wife_and_sister ios::sync_with_stdio(false), cin.tie(nullptr)

int main() {
    miyuki_is_my_wife_and_sister;

    ll n{}, sum{};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        sum = 0;
        for (int j = 1; j <= n - i; ++j) {
            sum += j * j * j;
        }

        cout << "SON(" << n - i << ")=" << sum << '\n';
    }

    return 0;
}
