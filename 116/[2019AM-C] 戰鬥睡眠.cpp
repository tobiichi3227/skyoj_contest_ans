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
        應該是個計算時間的題目
        我直接使用原code
        之後修正
        已修改完成
    */
    int a{}, b{}, c{}, d{};
    cin >> a >> b >> c >> d;
//     if(a==c&&b==d)
//         cout<<0<<"\n";
//     else if(a==c&&b>d)
//         cout<<23*60+(60-b+d)<<"\n";
//     else if(a==c&&b<d)
//         cout<<d-b<<"\n";
//     else if(a!=0&&c==0&&b>d)
//         cout<<23*60-(a*60)+d+60-b<<"\n";
//     else if(a!=0&&c==0&&b<=d)
//         cout<<24*60-(a*60)+d-b<<"\n";
//     else if(a>c&&d>=b)
//         cout<<(24-(a-c))*60+d-b<<"\n";
//     else if(a>c&&d<b)
//         cout<<(24-(a-c)-1)*60+d+60-b<<"\n";
//     else if(a<c&&b<=d)
//         cout<<c*60-a*60+(d-b)<<"\n";
//     else if(a<c&&b>d)
//         cout<<c*60-a*60-60+d+60-b<<"\n";

    int tmp = (c - a) * 60 + d - b;
    if (c < a) {
        cout << (24 - a + c) * 60 + d - b << '\n';
    } else if (tmp < 0) {
        cout << 1440 + tmp << '\n';
    } else {
        cout << tmp << '\n';
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

