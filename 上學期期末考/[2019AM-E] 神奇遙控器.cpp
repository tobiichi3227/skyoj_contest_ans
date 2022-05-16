#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife_and_sister ios::sync_with_stdio(false), cin.tie(nullptr)

int main() {
    miyuki_is_my_wife_and_sister;

    int a{}, b{}, cnt{};
    cin >> a >> b;
    while (a != b) {
        if (!(a & 1)) {
            a /= 2;
        } else {
            a--;
        }
        cnt++;
    }

    cout << cnt << '\n';

    return 0;
}
