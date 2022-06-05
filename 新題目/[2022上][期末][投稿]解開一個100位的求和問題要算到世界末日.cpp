#include <bits/stdc++.h>
using namespace std;

// #include<bits/extc++.h>
// using namespace __gnu_pbds;

#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma pack(1)

using i32 = int;
using i64 = long long;
using f32 = double;
using f64 = long double;
using pii = std::pair<i32, i32>;
#define pb push_back
#define ss second
#define ff first
#define dd cout << '\n';
#define all(container) (container).begin(), (container).end()
#define sz(container) static_cast<int>((container).size())
#define each(x, arr) for (auto &(x) : (arr))
#define c_each(x, arr) for (const auto &(x) : (arr))
#define rep(i, j, k) for (i32 (i) = (j); (i) <= (k); ++(i))
#define print(str) cout << (str)

// template<typename... T>
// inline void ccin   (T&... args)  { ((cin >> args), ...); }
// template<typename... T>
// inline void ccout  (T&&... args)  { ((cout << args << " "), ...); }
// template<typename... T>
// inline void ccoutl (T&&... args) { ((cout << args << " "), ...); cout << '\n'; }

#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

void solve() {
    /*
        我就出題者
        Find the sum of integers between 1 and N (inclusive) that are not multiples of A or B.
    */
    //f(n) = 1+2+3+......+n
    //let l = lcd(a, b)
    //floor(x)為向下取整
    //那和就是f(n) - a * f(floor(n / a)) - b * f(floor(n / b)) + l * f(floor(n / l))
    auto get_sum = [](const i64 x) -> i64 {
        return ((x + 1) * x) >> 1;
    };
    i64 n{}, a{}, b{};
    cin >> n >> a >> b; //ccin(n, a, b);
    i64 lcm = (a * b) / __gcd(a, b); //__gcd是GCC Extension的,如果編譯器不支援，可以自行改成gcd實做
    i64 a_sum = get_sum(n / a) * a, b_sum = get_sum(n / b) * b, lcm_sum = get_sum(n / lcm) * lcm, n_sum = get_sum(n);

    cout << n_sum - a_sum - b_sum + lcm_sum << '\n';

}

i32 main()
{
    miyuki_is_my_wife;

    solve();

    return 0;
}

