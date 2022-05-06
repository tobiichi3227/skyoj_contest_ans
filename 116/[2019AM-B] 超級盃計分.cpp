#include <bits/stdc++.h>
using namespace std;

// #include<bits/extc++.h>
// using namespace __gnu_pbds;

#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma pack(1)

using ll = long long;
using pii = std::pair<int, int>;
#define pb push_back
#define ss second
#define ff first
#define dd cout << '\n';
#define all(container) (container).begin(), (container).end()
#define sz(container) static_cast<int>((container).size())
#define each(x, arr) for (auto &(x) : (arr))
#define c_each(x, arr) for (const auto &(x) : (arr))
#define rep(i, j, k) for (int (i) = (j); (i) <= (k); ++(i))
#define print(str) cout << (str)

#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

void solve()
{
    /*
        不是很清楚題序是什麼
    */
    int a{}, b{}, c{}, d{};
    cin >> a >> b;
    if (a < b || a < 0 || b < 0 || a > 100 || b > 100) {
        cout << "impossible\n";
    } else if (!(a&1) && (b&1) || (a&1) && !(b&1)) {
        cout << "impossible\n";
    } else {
        c = (a + b) / 2;
        d = a - c;
        if (c < 0 || d < 0 || c > 100 || d > 100) {
            cout << "impossible\n";
        } else if (c < d) {
            swap(c, d);
        }

        cout << c << ' ' << d << '\n';
    }
}

int main()
{
    miyuki_is_my_wife;

    int tc{1};
    // cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}
