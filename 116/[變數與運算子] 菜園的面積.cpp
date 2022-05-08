#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

int main()
{
    miyuki_is_my_wife;

    /*
        不是很清楚題序是什麼
    */
    ll n{};
    cin >> n;
    if (!(n % 4)) {
        cout << (n / 4) * (n / 4) << '\n';
    } else {
        cout << (n / 4) * (n / 4 + 1) << '\n';
    }

    return 0;
}

