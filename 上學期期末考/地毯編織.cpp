#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife_and_sister ios::sync_with_stdio(false), cin.tie(nullptr)

int main() {
    miyuki_is_my_wife_and_sister;

    int x{}, y{};
    cin >> x >> y;
    for (int i = 1; i <= x; ++i) {
        if (i & 1) {
            for (int j = 1; j <= y; ++j) {
                cout << ((j & 1) ? "=" : "#");
            }
        } else {
            for (int j = 1; j <= y; ++j) {
                cout << ((j & 1) ? "#" : "=");
            }
        }

        cout << '\n';
    }


    return 0;
}


