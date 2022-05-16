#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife_and_sister ios::sync_with_stdio(false), cin.tie(nullptr)

void sieve(std::vector<int>& prime, const int n) {
    vector<bool> vis(n, false);
    for (int i = 2; i <= n; ++i) {
        if (!vis[i]) {
            prime.push_back(i);
        }
        for (const auto &p : prime) {
            if (i * p > n) {
                break;
            }
            vis[i * p] = true;
            if (i % p == 0) {
                break;
            }
        }
    }
}

int main() {
    miyuki_is_my_wife_and_sister;

    std::vector<int> prime;
    sieve(prime, 10000); //我估計10000就夠了

    int n{}, cnt{1};
    cin >> n;
    for (auto &p : prime) {
        if (p >= n) {
            break;
        }
        cout << "NOP(" << cnt++ << ")=" << p << '\n';
    }

    return 0;
}
