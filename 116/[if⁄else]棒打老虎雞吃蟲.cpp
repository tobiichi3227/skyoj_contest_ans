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
        已修改完成
    */
    int a{}, b{};
    cin >> a >> b;

    if (a & 1) {
        if (b & 1) {
            cout << "Tie!\n";
        } else {
            if (a == 1) {
                cout << (b > 3 ? "Computer Wins!\n" : "Player Wins!\n");
            } else {
                cout << (b < 3 ? "Computer Wins!\n" : "Player Wins!\n");
            }
        }
    } else {
        if (!(b & 1)) {
            cout << "Tie!\n";
        } else {
            if (a == 2) {
                cout << (b < 2 ? "Computer Wins!\n" : "Player Wins!\n");
            } else {
                cout << (b > 2 ? "Computer Wins!\n" : "Player Wins!\n");
            }
        }
    }

    // if(a==1){
    //     if(b==1){
    //         cout<<"Tie!";
    //     }
    //     if(b==2){
    //         cout<<"Player Wins!";
    //     }
    //     if(b==3){
    //         cout<<"Tie!";
    //     }
    //     if(b==4){
    //         cout<<"Computer Wins!";
    //     }
    // }
    // else if(a==2){
    //
    //     if(b==1){
    //         cout<<"Computer Wins!";
    //     }
    //     if(b==2){
    //         cout<<"Tie!";
    //     }
    //     if(b==3){
    //     cout<<"Player Wins!";
    //     }
    //     if(b==4){
    //         cout<<"Tie!";
    //     }
    // }
    // else if(a==3){
    //         if(b==1){
    //         cout<<"Tie!";
    //     }
    //     if(b==2){
    //         cout<<"Computer Wins!";
    //     }
    //     if(b==3){
    //         cout<<"Tie!";
    //     }
    //     if(b==4){
    //         cout<<"Player Wins!";
    //     }
    // }
    // else if(a==4){
    //     if(b==1){
    //         cout<<"Player Wins!";
    //     }
    //     if(b==2){
    //         cout<<"Tie!";
    //     }
    //     if(b==3){
    //         cout<<"Computer Wins!";
    //     }
    //     if(b==4){
    //         cout<<"Tie!";
    //     }
    // }
    // cout<<"\n";
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

