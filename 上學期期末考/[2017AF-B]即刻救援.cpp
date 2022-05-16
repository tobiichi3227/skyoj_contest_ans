#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife_and_sister ios::sync_with_stdio(false), cin.tie(nullptr)

int main() {
    miyuki_is_my_wife_and_sister;

    int x{};
    bool is_prime = false;

    cin >> x;
    //prime check
    for (int i = 2; i <= sqrt(x); ++i) {
        if (x % i == 0) {
            is_prime = true;
            break;
        }
    }

    if (!is_prime) {
        cout<<"Those whom the gods wish to destroy they first make mad.\n";
        return 0;
    }

    for (int i = x - 1; i >= 1; --i) {
        for (int j = 1; j <= x - 1; ++j) {
            cout << " ";
        }
        cout << i << '\n';
    }

    for (int i = 1; i <= x; ++i) {
        for (int j = 1; j < i; ++j) {
            cout << " ";
        }
        for (int j = (2 * x - 1 - 2 * (i - 1)); j >= 1; --j) {
            cout << "*";
        }
        cout << '\n';
    }

    return 0;
}
