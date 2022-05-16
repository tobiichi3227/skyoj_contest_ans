#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife_and_sister ios::sync_with_stdio(false), cin.tie(nullptr)

int main() {
    miyuki_is_my_wife_and_sister;

    int e{}, f{}, c{};
    cin >> e >> f >> c;
    int sum{};
    e += f;
    while (e >= c) {
        e -= c;
        sum++;
        e++;
    }

    cout << sum << '\n';

    return 0;
}
