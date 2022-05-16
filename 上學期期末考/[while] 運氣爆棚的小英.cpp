#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define miyuki_is_my_wife_and_sister ios::sync_with_stdio(false), cin.tie(nullptr)

int main() {
    miyuki_is_my_wife_and_sister;

    //使用原code，之後修改
    ll a{}, b{}, c{}, d{}, sum{}, i{};
    cin >> a >> b >> c;
    while (sum < c) {
        d = a + a * b;
        sum = 0;
        sum += d;
        a = d;
        i++;
    }

    cout << i << '\n';

    return 0;
}


