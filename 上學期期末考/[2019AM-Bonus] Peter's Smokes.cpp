#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife_and_sister ios::sync_with_stdio(false), cin.tie(nullptr)

int main() {
    miyuki_is_my_wife_and_sister;

    int n{}, k{}, cnt{};
    cin >> n >> k;
    while (n) {
        --n;
        ++cnt;
        if (cnt % k == 0) {
            ++n;
        }
    }

    cout << cnt << '\n';

    return 0;
}
