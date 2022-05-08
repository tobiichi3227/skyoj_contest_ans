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
        簡單的三角形判斷
    */
    vector<ll> arr(3); //原code用long long，不確定題目有沒有卡long long
    for (auto &i : arr) {
        cin >> i;
    }
    sort(all(arr));
    if (arr[2] >= (arr[1] + arr[0])) {
        cout << "Invalid\n";
        return;
    }
    if (arr[0] == arr[1] && arr[1] == arr[2] && arr[0] == arr[2]) {
        cout << "Equilateral\n";
    } else if (arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2]) {
        cout << "Isosceles\n";
    } else {
        cout << "Scalene\n";
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

