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
        完整題目連結：https://github.com/hsuan1117/OwnProblem/tree/master/%E8%B3%87%E8%A8%8A%E6%9C%9F%E4%B8%AD%E8%80%83/win10
    */
    int m{}, n{}, k{};
    cin >> m >> n >> k;
    vector<int> arr(n);
    for (auto &i : arr) {
        cin >> i;
    }
    bool ok = true;
    for (int i = 0; i < n - 1; ++i) {
        if (m == 1) {
            if (!(arr[i] < arr[i+1])) {
                cout << "0\n";
                ok = 0;
                break;
            }
        } else if (m == 2) {
            if (!(arr[i] == arr[i+1])) {
                cout << "0\n";
                ok = 0;
                break;
            }

        } else if (m == 3) {
            if (!(arr[i] > arr[i+1])) {
                cout << "0\n";
                ok = 0;
                break;
            }
        }
    }
    if (ok) {
        cout <<"1\n";
    }
    bool is_all_devide = true;
    for (auto &i : arr) {
        if (i % k != 0) {
            is_all_devide = false;
            break;
        }
    }
    if (is_all_devide) {
        cout << "Oh, win10 I love you.\n";
    } else {
        cout << "Please, I want to meet win10.\n";
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


