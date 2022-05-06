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
        不清楚題序是什麼，目前使用原code，之後修改
    */
    int a,b,c,d,e,f,sum=0;
    cin>>a>>b;
    c=a/10;
    d=b/10;
    e=a%10;
    f=b%10;
    if(c==d){
        sum=sum+50;
    }
    if(e==f){
        sum=sum+50;
    }
    if(e==d){
        sum=sum+50;
    }
    if(a%2==1){
        sum=sum+100;
    }
    if(f==2||f==5||f==8){
        sum=sum+100;
    }
    if(a==b){
        sum=sum+200;
    }
    if(sum==0){
        sum=sum+250;
    }
    sum=sum-500;
    cout<<sum<<'\n';
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

