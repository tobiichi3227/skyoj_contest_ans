#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife ios::sync_with_stdio(false), cin.tie(nullptr)

int main()
{
    miyuki_is_my_wife;

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

    return 0;
}
