#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife_and_sister ios::sync_with_stdio(false), cin.tie(nullptr)

int main() {
    miyuki_is_my_wife_and_sister;

    int a{}, b{};
    for (int i = 1; i <= a; ++i) {
        for (int j = 1; j <= b; ++j) {
            cout << i << "*" << j << "=" << i * j << " ";
        }

        cout << '\n';
    }

    return 0;
}

