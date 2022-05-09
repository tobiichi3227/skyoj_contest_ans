#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

int main()
{
    miyuki_is_my_wife;

    //有浮點數運算卻用long long，不確定是否正確
    ll a{};
    cin >> a;
    if (a >= 0 && a <= 370000) {
        cout << "Level A\n" << a * 0.07 << '\n';
    } else if (a >= 370001 && a <= 990000) {
        cout << "Level B\n" << a * 0.15 - 25900 << '\n';
    } else if (a >= 990001 && a <= 1980000) {
        cout << "Level C\n" << a * 0.25 - 105100 << '\n';
    } else if (a >= 1980001 && a <= 3720000) {
        cout << "Level D\n" << a * 0.35 - 283300 << '\n';
    } else {
        cout << "Level E\n" << a * 0.45 - 655300 << '\n';
    }


    return 0;
}
