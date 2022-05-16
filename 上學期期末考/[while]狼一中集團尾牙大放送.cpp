#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define miyuki_is_my_wife_and_sister ios::sync_with_stdio(false), cin.tie(nullptr)

int main() {
    miyuki_is_my_wife_and_sister;

    //使用原code，之後修改
    int a{}, b{}, c{}, d{}, ans{};
    cin >> a >> b >> c >> d;
    int n{a + c}, m{b + d};
    if (n > m) {
        swap(n, m);
    }

    for (int i = 1; i <= n; ++i) {
        if (n % i == 0 && m % i == 0) {
            ans = i;
        }
    }

    cout << ans << '\n';

    return 0;
}


