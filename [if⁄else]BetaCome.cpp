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
        應該類似kattis-mia那題，目前使用原code，之後修改
    */
    int a{}, b{};
    cin >> a >> b;
    if (a!=5 && a!=2 && a!=0)
        cout<<"Player Win!\n";
    else if (b!=5 && b!=2 && b!=0)
        cout<<"BetaCome Win!\n";
    else {
        if (a==5 && b==0)
            cout<<"BetaCome Win!\n";
        else if (a==5 && b==2)
            cout<<"Player Win!\n";
        else if (a==5 && b==5)
            cout<<"Tie!\n";
        else {
            if (a==2 && b==0)
                cout<<"Player Win!\n";
            else if (a==2 && b==2)
                cout<<"Tie!\n";
            else if (a==2 && b==5)
                cout<<"BetaCome Win!\n";
        }

        if (a==0 && b==0)
            cout<<"Tie!\n";
        else if (a==0 && b==2)
            cout<<"BetaCome Win!\n";
        else if (a==0 && b==5)
            cout<<"Player Win!\n";

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

